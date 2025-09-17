#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ASCON sweep (PAR, d): patch params, run synthesis (FuseSoC + DC), parse timing/area,
compute Fmax, Throughput (solo process), kGE e Th/kGE. Salva CSV e (opzionale) plot.

Modello (share parallele):
  cycles_per_block = 8 * (BASE_CYCLES + ceil(64 / (PAR * (d+1)))) + (1 se XOR per blocco)
Throughput [Gbps]  = (128 * Fmax[GHz]) / cycles_per_block

Esempio:
  # sweep PAR 1..32, SEC 1 2 3 5 (default), grafico Throughput vs PAR
  python3 ascon_sweep.py --par-max 32 --xor-per-block --plot --verbose \
    --report-dir build/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/report

  # oppure lista esplicita di PAR
  python3 ascon_sweep.py --par 1 2 3 5 32 --sec 1 2 3 5 --xor-per-block --plot
"""

"""
Opzioni tipiche (derivate dal codice che mi hai incollato prima)

--par o --par-max → valori di parallelismo (PAR)

--sec → security orders d da sweepare

--params-file → file dei parametri RTL da patchare (default: rtl/ascon_params.sv)

--run-cmd → comando per la sintesi (default: fusesoc run --target=synthesis myascon:ascon_top:1.0.0)

--report-dir → directory con timing.rpt e area.rpt

--out-csv → nome del file CSV di output

--plot → genera il grafico PNG

--xor-per-block → aggiunge 1 ciclo extra per XOR
"""

import argparse, os, re, sys, math, glob, subprocess, csv
from pathlib import Path

# ------------------------- util -------------------------
def read_text(p: Path) -> str:
    return p.read_text(encoding='utf-8', errors='ignore')

def write_text(p: Path, s: str) -> None:
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_text(s, encoding='utf-8')

def _fmt(x):
    return "NA" if x is None else (f"{x:.3f}" if isinstance(x, float) else str(x))

# ------------------------- patch params -----------------
def patch_param_file(params_file: Path, par_val: int, so_val: int) -> None:
    """Sostituisce PAR e ordine (SEC_ORDER/d/D) nel file parametri; salva .bak la prima volta."""
    txt = read_text(params_file)
    bak = params_file.with_suffix(params_file.suffix + ".bak")
    if not bak.exists():
        write_text(bak, txt)
    new = txt
    patterns = [
        (r'(?m)^(\s*`define\s+PAR\s+)(\d+)\b', fr'\g<1>{par_val}'),
        (r'(?m)^(\s*`define\s+SEC_ORDER\s+)(\d+)\b', fr'\g<1>{so_val}'),
        (r'(?m)^(\s*`define\s+D\s+)(\d+)\b', fr'\g<1>{so_val}'),
        (r'(?m)^(?P<pfx>\s*(?:localparam|parameter)\s+(?:int\s+)?PAR\s*=\s*)(?P<num>\d+)(?P<sfx>\s*;)', fr'\g<pfx>{par_val}\g<sfx>'),
        (r'(?m)^(?P<pfx>\s*(?:localparam|parameter)\s+(?:int\s+)?SEC_ORDER\s*=\s*)(?P<num>\d+)(?P<sfx>\s*;)', fr'\g<pfx>{so_val}\g<sfx>'),
        (r'(?m)^(?P<pfx>\s*(?:localparam|parameter)\s+(?:int\s+)?D\s*=\s*)(?P<num>\d+)(?P<sfx>\s*;)', fr'\g<pfx>{so_val}\g<sfx>'),
        (r'(?m)^(?P<pfx>\s*(?:localparam|parameter)\s+(?:int\s+)?d\s*=\s*)(?P<num>\d+)(?P<sfx>\s*;)', fr'\g<pfx>{so_val}\g<sfx>'),
    ]
    for pat, rep in patterns:
        new = re.sub(pat, rep, new)
    write_text(params_file, new)

# ------------------------- run synthesis ----------------
def run_cmd(cmd: str) -> int:
    print(f"\n[RUN] {cmd}")
    return subprocess.call(cmd, shell=True)

# ------------------------- find reports -----------------
def find_reports(verbose=False, report_dir=None, timing_rpt=None, area_rpt=None, search_root="build"):
    """
    Se forniti, usa timing_rpt/area_rpt. Altrimenti:
    - se report_dir è passato, cerca lì (timing.rpt/area.rpt o timing*.rpt/area*.rpt più recenti)
    - fallback: scansione sotto build/ cercando file con contenuto coerente.
    """
    # 1) file espliciti
    if timing_rpt and area_rpt:
        return str(Path(timing_rpt)), str(Path(area_rpt))

    # 2) directory esplicita
    if report_dir:
        rd = Path(report_dir)
        t = None
        a = None
        cand_t = [rd / "timing.rpt"] + sorted(rd.glob("timing*.rpt"), key=lambda p: p.stat().st_mtime, reverse=True)
        cand_a = [rd / "area.rpt"]   + sorted(rd.glob("area*.rpt"),   key=lambda p: p.stat().st_mtime, reverse=True)
        t = next((str(p) for p in cand_t if p.exists()), None)
        a = next((str(p) for p in cand_a if p.exists()), None)
        if verbose:
            print(f"[DEBUG] report-dir lookup → timing={t} | area={a}")
        if t and a:
            return t, a

    # 3) fallback: content-based scan
    def score_candidate(path: str, txt: str, want: str) -> int:
        score = 0
        low = txt.lower()
        p = path.lower()
        if want == 'timing':
            if ("report : timing" in low) or ("report_timing" in low): score += 3
            if "path type: max" in low: score += 2
            if "data required time" in low or "library setup time" in low: score += 2
        else:  # area
            if "total cell area" in low or "total area:" in low: score += 4
            if "combinational area" in low and "noncombinational area" in low: score += 2
        if "synthesis" in p: score += 1
        if "/report" in p or "/reports" in p: score += 1
        if p.endswith(".rpt") or p.endswith(".rep"): score += 1
        return score

    root = Path(search_root)
    if not root.exists():
        return None, None

    patterns = [
        str(root / "*" / "synthesis-*" / "report" / "*.*"),
        str(root / "*" / "synthesis-*" / "reports" / "*.*"),
        str(root / "**" / "*.*"),
    ]
    seen = set()
    cand_paths = []
    for pat in patterns:
        for fp in glob.glob(pat, recursive=True):
            if fp in seen: continue
            seen.add(fp)
            ext = fp.lower().rsplit(".", 1)[-1] if "." in fp else ""
            if ext not in {"rpt", "rep", "txt", "log"}:
                continue
            try:
                sz = os.path.getsize(fp)
            except OSError:
                continue
            if sz > 8_000_000:
                continue
            cand_paths.append(fp)
    cand_paths.sort(key=lambda p: os.path.getmtime(p), reverse=True)

    if verbose:
        print("[DEBUG] Candidate text-ish files (filtered):")
        for p in cand_paths[:50]:
            print("  -", p)

    timing_best = (None, -1)
    area_best   = (None, -1)
    for fp in cand_paths:
        try:
            txt = read_text(Path(fp))
        except Exception:
            continue
        st = score_candidate(fp, txt, "timing")
        sa = score_candidate(fp, txt, "area")
        if st > timing_best[1]:
            timing_best = (fp, st)
        if sa > area_best[1]:
            area_best = (fp, sa)
        if timing_best[1] >= 6 and area_best[1] >= 6:
            break

    t, a = timing_best[0], area_best[0]
    if verbose:
        print(f"[DEBUG] Selected timing.rpt: {t}  (score={timing_best[1]})")
        print(f"[DEBUG] Selected area.rpt  : {a}  (score={area_best[1]})")
    return t, a

# ------------------------- parse timing/area -------------
def grep_context(txt: str, pat: str, width: int = 200):
    m = re.search(pat, txt)
    if not m:
        return None
    i = max(0, m.start() - width)
    j = min(len(txt), m.end() + width)
    return txt[i:j]

def parse_timing_max(timing_path: str, verbose=False):
    """
    Tarato su report DC:
      Path Type: max
      data arrival time 0.99
      library setup time -0.01
      data required time 0.99
      slack (MET) 0.00
      clock clk (rise edge) 1.00
    Ritorna: required_ns, setup_abs_ns, slack_ns, arrival_pos_ns, clock_period_ns
    """
    if not timing_path:
        return None, None, None, None, None
    txt = read_text(Path(timing_path))

    blocks = re.split(r'\*{10,}', txt)
    max_block = None
    for b in reversed(blocks):
        if "Path Type: max" in b:
            max_block = b
            break
    blk = max_block or txt

    reqs   = re.findall(r'data required time\s+([-\d.]+)', blk)
    setups = re.findall(r'library setup time\s+([-\d.]+)', blk)
    slacks = re.findall(r'slack\s*\([A-Z]+\)\s+([-\d.]+)', blk)
    arrs   = re.findall(r'\n\s*data arrival time\s+([-\d.]+)', blk)
    clocks = re.findall(r'clock\s+[^\n]*\(rise edge\)\s+([-\d.]+)', blk)

    required = float(reqs[-1]) if reqs else None
    setup_abs = abs(float(setups[-1])) if setups else None
    slack = float(slacks[-1]) if slacks else 0.0

    arrival = None
    if arrs:
        try:
            a_last = float(arrs[-1])
            if a_last >= 0:
                arrival = a_last
            elif len(arrs) >= 2:
                arrival = float(arrs[-2])
        except Exception:
            arrival = None

    clock_period = float(clocks[-1]) if clocks else None

    if verbose:
        print("[DEBUG] timing excerpt around 'data required time':")
        ctx = grep_context(blk, r'data required time')
        if ctx: print(ctx)

    return required, setup_abs, slack, arrival, clock_period

def parse_area(area_path: str, verbose=False):
    if not area_path:
        return None
    s = read_text(Path(area_path))

    m = re.search(r'Total cell area:\s*([0-9]+(?:\.[0-9]+)?)', s)
    if m: return float(m.group(1))

    m = re.search(r'Total area:\s*([0-9]+(?:\.[0-9]+)?)', s)
    if m: return float(m.group(1))

    m = re.search(
        r'Combinational area:\s*([0-9]+(?:\.[0-9]+)?)\s*\n.*?'
        r'Noncombinational area:\s*([0-9]+(?:\.[0-9]+)?)',
        s, flags=re.S
    )
    if m:
        return float(m.group(1)) + float(m.group(2))

    if verbose:
        print("[DEBUG] impossibile parsare l'area; primi 400 char:\n", s[:400])
    return None

# ------------------------- models ------------------------
def cycles_per_block(par: int, d: int, base_cycles: int = 3, rounds: int = 8,
                     xor_per_block: bool = True) -> int:
    s = d + 1
    extra = math.ceil(64 / max(1, par * s))
    total = rounds * (base_cycles + extra) + (1 if xor_per_block else 0)
    return int(total)

def throughput_gbps(fmax_ghz: float, cycles_block: int) -> float:
    if not fmax_ghz or not cycles_block or cycles_block <= 0:
        return None
    return (128.0 * fmax_ghz) / float(cycles_block)

# ------------------------- main --------------------------
def main():
    ap = argparse.ArgumentParser()

    # Sweep PAR: lista esplicita (--par) oppure 1..N con --par-max (default 32)
    grp = ap.add_mutually_exclusive_group(required=False)
    grp.add_argument('--par', nargs='+', type=int,
                     help='Valori PAR espliciti (es. 1 2 3 5)')
    grp.add_argument('--par-max', type=int, default=32,
                     help='Esegue sweep PAR da 1 a N (default 32)')

    # Security orders: default 1 2 3 5
    ap.add_argument('--sec', nargs='+', type=int, default=[1, 2, 3, 5],
                    help='Security orders d (default: 1 2 3 5)')

    ap.add_argument('--params-file', default='rtl/ascon_params.sv', help='File parametri/macros da patchare')
    ap.add_argument('--run-cmd', default='fusesoc run --target=synthesis myascon:ascon_top:1.0.0', help='Comando per la sintesi')
    ap.add_argument('--base-cycles', type=int, default=3, help='Cicli fissi per round (default 3)')
    ap.add_argument('--rounds', type=int, default=8, help='Numero round process (default 8)')
    ap.add_argument('--xor-per-block', action='store_true', help='Conta 1 ciclo extra per XOR/msg (per blocco)')
    ap.add_argument('--out-csv', default='results_sweep.csv', help='CSV di output')
    ap.add_argument('--plot', action='store_true', help='Genera PNG Th_vs_PAR.png')
    ap.add_argument('--verbose', action='store_true', help='Diagnostica su ricerca e parsing report')

    # report path options
    ap.add_argument('--report-dir', default=None,
                    help='Directory che contiene area.rpt e timing.rpt (es. build/.../synthesis-design_compiler/report)')
    ap.add_argument('--timing-rpt', default=None,
                    help='Percorso esplicito del timing report (es. .../timing.rpt)')
    ap.add_argument('--area-rpt', default=None,
                    help='Percorso esplicito dell area report (es. .../area.rpt)')

    # gate-equivalent scaling
    ap.add_argument('--ge-um2', type=float, default=1.44,
                    help='Area [µm^2] per 1 GE (default 1.44). kGE = Area / (ge_um2*1000).')

    args = ap.parse_args()

    # Costruisci la lista PAR: se --par non è dato, usa 1..par-max
    par_list = args.par if args.par else list(range(1, args.par_max + 1))

    params_path = Path(args.params_file)
    if not params_path.exists():
        print(f"[ERROR] File parametri non trovato: {params_path}", file=sys.stderr)
        sys.exit(1)

    results = []
    for so in args.sec:
        for par in par_list:
            print(f"\n=== Sweep: d={so}, PAR={par} ===")
            patch_param_file(params_path, par, so)
            rc = run_cmd(args.run_cmd)
            if rc != 0:
                print(f"[ERROR] Sintesi fallita (rc={rc}) per d={so}, PAR={par}", file=sys.stderr)
                results.append({'SecOrder': so, 'PAR': par, 'Area': None, 'kGE': None, 'Arrival_ns': None, 'Required_ns': None, 'Setup_ns': None, 'Slack_ns': None, 'Crit_ns': None, 'Fmax_GHz': None, 'CyclesPerBlock': None, 'Th_Gbps': None, 'Th_per_kGE_Gbps_per_kGE': None, 'ThPerArea': None, 'TimingRpt': None, 'AreaRpt': None})
                continue

            # selezione report
            timing_rpt, area_rpt = find_reports(
                verbose=args.verbose,
                report_dir=args.report_dir,
                timing_rpt=args.timing_rpt,
                area_rpt=args.area_rpt
            )
            print(f"[INFO] timing.rpt={timing_rpt} | area.rpt={area_rpt}")
            if not timing_rpt or not Path(timing_rpt).exists():
                print("[ERROR] timing.rpt non trovato o inesistente", file=sys.stderr)
            if not area_rpt or not Path(area_rpt).exists():
                print("[ERROR] area.rpt non trovato o inesistente", file=sys.stderr)

            # parse reports
            required, setup_mag, slack, arrival, clk_period = parse_timing_max(timing_rpt, verbose=args.verbose)
            area = parse_area(area_rpt, verbose=args.verbose)

            # Tcrit e Fmax
            Tcrit_ns = None
            if required is not None and setup_mag is not None:
                Tcrit_ns = (required + setup_mag) - (slack if slack is not None else 0.0)
            elif arrival is not None and setup_mag is not None:
                Tcrit_ns = arrival + setup_mag
            elif clk_period is not None:
                Tcrit_ns = clk_period

            fmax_ghz = (1.0 / Tcrit_ns) if (Tcrit_ns and Tcrit_ns > 0) else None

            # cycles / TH (coerente con lo script originale)
            cycles = 8 * (args.base_cycles + math.ceil(64 / max(1, par * (so + 1))) - 1) + (1 if args.xor_per_block else 0)
            th_gbps = throughput_gbps(fmax_ghz, cycles)

            # kGE e metriche derivate
            kge = (area / (args.ge_um2 * 1000.0)) if (area is not None and area > 0 and args.ge_um2 > 0) else None
            th_per_kge = (th_gbps / kge) if (th_gbps is not None and kge) else None
            # relazione: Th/Area = (Th/kGE)*1000
            th_per_area = (th_per_kge * 1000.0) if (th_per_kge is not None) else None

            print(f"[INFO] req={_fmt(required)} ns | setup={_fmt(setup_mag)} ns | slack={_fmt(slack)} ns | "
                  f"arrival={_fmt(arrival)} ns | Tcrit={_fmt(Tcrit_ns)} ns | Fmax={_fmt(fmax_ghz)} GHz | "
                  f"Area={_fmt(area)} | kGE={_fmt(kge)} | Cycles/blk={cycles} | "
                  f"Th={_fmt(th_gbps)} Gbps | Th/kGE={_fmt(th_per_kge)} Gbps/kGE")

            results.append({
                'SecOrder': so,
                'PAR': par,
                'Area': area,
                'kGE': kge,
                'Arrival_ns': arrival,
                'Required_ns': required,
                'Setup_ns': setup_mag,
                'Slack_ns': slack,
                'Crit_ns': Tcrit_ns,
                'Fmax_GHz': fmax_ghz,
                'CyclesPerBlock': cycles,
                'Th_Gbps': th_gbps,
                'Th_per_kGE_Gbps_per_kGE': th_per_kge,
                'ThPerArea': th_per_area,  # (Th/kGE)*1000
                'TimingRpt': timing_rpt,
                'AreaRpt': area_rpt,
                'Model_BaseCycles': args.base_cycles,
                'Model_Rounds': 8,
                'Model_XORperBlock': bool(args.xor_per_block),
                'Model_ge_um2_per_GE': args.ge_um2,
            })

    # CSV
    out_csv = Path(args.out_csv)
    with out_csv.open('w', newline='', encoding='utf-8') as f:
        headers = list(results[0].keys()) if results else []
        w = csv.DictWriter(f, fieldnames=headers)
        if headers:
            w.writeheader()
            for r in results:
                w.writerow(r)
    print(f"\n[OK] Salvato CSV: {out_csv.resolve()}")

    # Plot: Throughput vs PAR (curve per d)
    if args.plot and results:
        try:
            import matplotlib
            import matplotlib.pyplot as plt
            series = {}
            for r in results:
                y = r.get('Th_Gbps')          # <-- Throughput in Gbps
                x = r.get('PAR')
                so = r.get('SecOrder')
                if y is None or x is None or so is None:
                    continue
                series.setdefault(so, []).append((x, y))
            for so in series:
                series[so] = sorted(series[so], key=lambda x: x[0])

            plt.figure()
            for so, pts in sorted(series.items()):
                xs = [x for x, _ in pts]
                ys = [y for _, y in pts]
                plt.plot(xs, ys, marker='o', label=f'd={so}')
            plt.xlabel('PAR')
            plt.ylabel('Throughput [Gbps]')
            plt.title('ASCON-128a (process): Throughput vs PAR')
            plt.grid(True, which='both', linestyle='--', linewidth=0.5)
            plt.legend()
            out_png = Path('Th_vs_PAR.png')
            plt.savefig(out_png, dpi=150, bbox_inches='tight')
            print(f"[OK] Salvato grafico: {out_png.resolve()}")
        except Exception as e:
            print(f"[WARN] Impossibile generare il grafico automaticamente: {e}", file=sys.stderr)

if __name__ == '__main__':
    main()
