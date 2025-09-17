#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse, csv, math, sys, re
from collections import defaultdict

# usa backend non interattivo: salva su file anche senza DISPLAY
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches

# ----------------- Utility robuste -----------------

def sniff_csv(path):
    with open(path, 'r', encoding='utf-8', newline='') as f:
        sample = f.read(4096)
        f.seek(0)
        try:
            dialect = csv.Sniffer().sniff(sample)
        except Exception:
            dialect = csv.excel
        reader = csv.DictReader(f, dialect=dialect)
        rows = list(reader)
        return rows, reader.fieldnames or []

def normalize_key_map(fieldnames):
    m = {}
    for k in fieldnames:
        kn = re.sub(r'\s+', '', k.strip().lower())
        m[kn] = k
    return m

def resolve_column(fieldnames, explicit, candidates):
    fmap = normalize_key_map(fieldnames)
    def find_one(name):
        if not name: return None
        key = re.sub(r'\s+', '', name.strip().lower())
        return fmap.get(key)
    col = find_one(explicit)
    if col: return col
    for c in candidates:
        col = find_one(c)
        if col: return col
    return None

_num_regex = re.compile(r'[-+]?\d+(?:[.,]\d+)?')

def parse_float_smart(v):
    if v is None: return None
    if isinstance(v, (int, float)):
        try:
            xf = float(v)
            return xf if math.isfinite(xf) else None
        except Exception:
            return None
    s = str(v).strip()
    m = _num_regex.search(s)
    if not m: return None
    num = m.group(0)
    if ',' in num and '.' not in num:
        num = num.replace(',', '.')
    try:
        x = float(num)
        return x if math.isfinite(x) else None
    except Exception:
        return None

def parse_int_from_any(v):
    if v is None: return None
    if isinstance(v, (int, float)) and float(v).is_integer():
        return int(v)
    m = re.search(r'-?\d+', str(v))
    if not m: return None
    try:
        return int(m.group(0))
    except Exception:
        return None

# ---- unità area + conversione ----

def infer_area_unit(col_name, forced=None):
    if forced:
        return forced.lower()
    name = (col_name or '').lower()
    if 'kge' in name: return 'kge'
    if 'mm2' in name or 'mm^2' in name or 'mm²' in name: return 'mm2'
    if 'um2' in name or 'µm2' in name or 'um^2' in name or 'µm^2' in name or 'micron' in name: return 'um2'
    if re.search(r'(^|[^a-z])ge([^a-z]|$)', name): return 'kge'
    return 'unknown'

def convert_area_to_kge(value, unit, um2_per_ge):
    if value is None: return None
    if unit == 'kge': return value
    if unit == 'um2':
        if not um2_per_ge:
            print("[ERROR] La colonna area è in µm² ma non hai specificato --um2-per-ge.", file=sys.stderr)
            sys.exit(2)
        return value / um2_per_ge / 1000.0
    if unit == 'mm2':
        if not um2_per_ge:
            print("[ERROR] La colonna area è in mm² ma non hai specificato --um2-per-ge.", file=sys.stderr)
            sys.exit(2)
        um2 = value * 1_000_000.0
        return um2 / um2_per_ge / 1000.0
    print("[WARN] Unità area sconosciuta: assumo che i valori siano già in kGE.", file=sys.stderr)
    return value

# ---- colori ----

HEX_RE = re.compile(r'#([0-9a-fA-F]{6})$')

def parse_color_map(s):
    """Stringa: '1:#1f77b4,2:#ff7f0e' -> dict {'1':'#1f77b4','2':'#ff7f0e'}"""
    out = {}
    if not s: return out
    for part in s.split(','):
        part = part.strip()
        if not part or ':' not in part: continue
        k, v = part.split(':', 1)
        k, v = k.strip(), v.strip()
        if HEX_RE.fullmatch(v):
            out[k] = v
    return out

def _hex_to_rgb01(h):
    h = h.lstrip('#')
    return tuple(int(h[i:i+2], 16)/255.0 for i in (0,2,4))

def _rgb01_to_hex(rgb):
    r,g,b = (max(0,min(1,x)) for x in rgb)
    return '#%02x%02x%02x' % (round(r*255), round(g*255), round(b*255))

def lighten(hex_color, amount=0.35):
    r,g,b = _hex_to_rgb01(hex_color)
    return _rgb01_to_hex((r + (1-r)*amount, g + (1-g)*amount, b + (1-b)*amount))

def darken(hex_color, amount=0.25):
    r,g,b = _hex_to_rgb01(hex_color)
    return _rgb01_to_hex((r*(1-amount), g*(1-amount), b*(1-amount)))

# ----------------- Modalità TH -----------------

def grafico_th_vs_par(rows, args, col_x, col_y, col_group):
    series = defaultdict(list)
    allowed_groups = set(args.only_groups) if args.only_groups else None
    for r in rows:
        if col_x not in r or col_y not in r or col_group not in r:
            continue
        gx_raw = r[col_group]
        gx = str(gx_raw).strip()
        if allowed_groups and gx not in allowed_groups:
            continue
        x = parse_float_smart(r[col_x])
        y = parse_float_smart(r[col_y])
        if x is None or y is None:
            continue
        series[gx].append((x, y))

    if not series:
        print("[WARN] Nessun dato valido da plottare (controlla colonne/csv).", file=sys.stderr)
        sys.exit(0)

    color_map = parse_color_map(args.colors)
    global_color = args.color_hex if (isinstance(args.color_hex, str) and HEX_RE.fullmatch(args.color_hex)) else None

    plt.figure()
    ax = plt.gca()
    ax.margins(x=0.05)  # <-- piccolo margine orizzontale extra

    for g, pts in sorted(series.items(), key=lambda kv: str(kv[0])):
        pts.sort(key=lambda t: t[0])
        xs = [p[0] for p in pts]
        ys = [p[1] for p in pts]
        label = f"d={g}" if col_group.lower() in ("secorder", "d") else f"{col_group}={g}"

        color = color_map.get(g) or global_color
        if color:
            plt.plot(xs, ys, marker='o', linewidth=1.0, label=label, color=color)
        else:
            plt.plot(xs, ys, marker='o', linewidth=1.0, label=label)

    # --- etichette più grandi ---
    plt.xlabel(args.xlabel or col_x, fontsize=args.axis_label_size)
    plt.ylabel(args.ylabel or col_y, fontsize=args.axis_label_size)
    plt.title(args.title or "Throughput vs PAR", fontsize=args.title_size)

    # --- tick più grandi ---
    ax.tick_params(axis='both', which='major', labelsize=args.tick_size)

    plt.legend()
    plt.tight_layout()

    # --- allarga a destra (anche se qui non annotiamo, è innocuo) ---
    xlo, xhi = ax.get_xlim()
    pad = (xhi - xlo) * args.right_pad_frac
    ax.set_xlim(xlo, xhi + pad)

    out = args.out or "Th_vs_PAR.pdf"
    fmt = 'pdf' if out.lower().endswith('.pdf') else 'png'
    plt.savefig(out, format=fmt, bbox_inches='tight')
    print(f"[OK] Salvato: {out}")

# ----------------- Modalità AREA vs d @ PAR_MAX -----------------

def scegli_riga_parmax(righe_d, par_col, par_target):
    candidates = []
    for r in righe_d:
        v = parse_float_smart(r.get(par_col))
        if v is None: continue
        candidates.append((abs(v - par_target), v, r))
    if not candidates: return None, None
    exact = [t for t in candidates if t[1] == par_target]
    if exact: return exact[0][2], exact[0][1]
    best = min(candidates, key=lambda t: t[0])
    return best[2], best[1]

def grafico_area_vs_d_parmax(rows, args, col_group, col_par, col_area):
    area_unit = infer_area_unit(col_area, args.force_area_unit)
    if area_unit in ('um2', 'mm2') and not args.um2_per_ge:
        print(f"[ERROR] Colonna '{col_area}' rilevata come {area_unit}. Specifica --um2-per-ge (µm² per GE).", file=sys.stderr)
        sys.exit(2)

    per_d = defaultdict(list)
    for r in rows:
        d_val = parse_int_from_any(r.get(col_group))
        if d_val is None: continue
        per_d[d_val].append(r)

    xs, ys, labels = [], [], []
    for d in args.degrees:
        righe_d = per_d.get(d, [])
        if not righe_d:
            continue
        par_target = math.ceil(64.0 / (d + 1))
        r_sel, par_eff = scegli_riga_parmax(righe_d, col_par, par_target)
        if r_sel is None:
            continue
        area_val_raw = parse_float_smart(r_sel.get(col_area))
        if area_val_raw is None:
            continue
        area_kge = convert_area_to_kge(area_val_raw, area_unit, args.um2_per_ge)
        xs.append(d)
        ys.append(area_kge)
        labels.append(f"d={d} (PAR={int(par_eff)})")

    if args.d0_area is not None:
        xs.append(0)
        ys.append(args.d0_area)
        labels.append("d=0 (PAR=64)")

    if not xs:
        print("[WARN] Nessun punto valido per il grafico Area vs d. Controlla colonne/csv.", file=sys.stderr)
        sys.exit(0)

    # colori
    color_map = parse_color_map(args.colors)
    global_color = args.color_hex if (isinstance(args.color_hex, str) and HEX_RE.fullmatch(args.color_hex)) else None
    col_d0 = args.color_d0

    # Se specificati, usa colori globali per i segmenti extra
    cumul_color_global = args.color_cumul if (args.color_cumul and HEX_RE.fullmatch(args.color_cumul)) else None
    incr_color_global  = args.color_incr  if (args.color_incr  and HEX_RE.fullmatch(args.color_incr )) else None

    # ordina per d
    data = sorted(zip(xs, ys, labels), key=lambda t: t[0])
    ds     = [t[0] for t in data]
    areas  = [t[1] for t in data]
    labs   = [t[2] for t in data]

    # baseline d=0 (se presente/fornita)
    baseline_kge = None
    for d, y in zip(ds, areas):
        if d == 0:
            baseline_kge = y
            break
    if baseline_kge is None and args.d0_area is not None:
        baseline_kge = args.d0_area

    # segmenti
    base_vals, cumul_prev_vals, incr_prev_vals = [], [], []
    prev_area = baseline_kge
    for (d, y) in zip(ds, areas):
        if baseline_kge is None:
            base_vals.append(y); cumul_prev_vals.append(0.0); incr_prev_vals.append(0.0)
            prev_area = y
            continue
        base = min(y, baseline_kge)
        extra_total = max(y - baseline_kge, 0.0)
        prev_over_baseline = max((prev_area or baseline_kge) - baseline_kge, 0.0)
        cumul = max(min(extra_total, prev_over_baseline), 0.0)
        incr  = max(y - max(prev_area or baseline_kge, baseline_kge), 0.0)
        base_vals.append(base); cumul_prev_vals.append(cumul); incr_prev_vals.append(incr)
        prev_area = y

    # plotting per-bar
    plt.figure()
    ax = plt.gca()
    ax.margins(x=0.02)  # <-- leggero margine a sinistra/dx
    y_positions = list(range(len(ds)))
    bar_h = 0.7

    for i, d in enumerate(ds):
        base = base_vals[i]; cumu = cumul_prev_vals[i]; incr = incr_prev_vals[i]

        # colori per questo grado
        d_key = str(d)
        d_col = color_map.get(d_key) or global_color or "#888888"

        # scegli colori segmenti
        if cumul_color_global:
            cumul_color = cumul_color_global
        else:
            cumul_color = lighten(d_col, amount=args.shade_cumul)

        if incr_color_global:
            incr_color = incr_color_global
        else:
            incr_color = darken(d_col, amount=args.shade_incr)

        left0 = 0.0
        plt.barh(y_positions[i], base, height=bar_h, left=left0,
                 edgecolor='black', linewidth=0.5, color=col_d0, label=None)
        if cumu > 0:
            plt.barh(y_positions[i], cumu, height=bar_h, left=left0+base,
                     edgecolor='black', linewidth=0.3,
                     color=cumul_color, label=None, alpha=0.9)
        if incr > 0:
            plt.barh(y_positions[i], incr, height=bar_h, left=left0+base+cumu,
                     edgecolor='black', linewidth=0.3,
                     color=incr_color, label=None, alpha=0.9)

    # annotazioni (opzionali)
    if args.annotate:
        xmax = max(areas) if areas else 0
        min_w = 0.06 * (xmax if xmax > 0 else 1.0)
        par_re = re.compile(r'\(PAR=([^)]+)\)')
        for i, ((d, y, lab), base, cumu, incr) in enumerate(zip(data, base_vals, cumul_prev_vals, incr_prev_vals)):
            m = par_re.search(lab)
            par_val = m.group(1) if m else "?"
            par_txt = rf"$\mathrm{{PAR}}_{{\mathrm{{MAX}}}}={par_val}$"
            plt.annotate(par_txt, (y, i), textcoords="offset points", xytext=(6, -8),
                         va='center', fontsize=args.tick_size)  # usa tick_size come base

            if baseline_kge is None or d == 0:
                continue
                        # --- Δ0: etichetta allineata a sinistra dentro il blocco extra (cumu+incr) ---
            extra_total = cumu + incr
            if extra_total > 0:
                # piccolo rientro per evitare che tocchi il bordo del blocco
                ax = plt.gca()
                xlo, xhi = ax.get_xlim()
                xr = max(1e-9, xhi - xlo)
                eps_inside = 0.015 * xr  # ~1.5% dell'intervallo X

                x_left_extra  = base
                x_right_extra = base + extra_total

                if extra_total >= 2 * eps_inside:
                    # segmento sufficientemente largo: allineamento a sinistra (rientrato)
                    x_d0 = x_left_extra + eps_inside
                    ha0 = 'left'
                else:
                    # segmento molto stretto: mettiamo il testo centrato per non sbordare
                    x_d0 = (x_left_extra + x_right_extra) * 0.5
                    ha0 = 'center'

                plt.annotate(f"Δ0={extra_total:.2f}",
                             (x_d0, i),
                             ha=ha0, va='center',
                             fontsize=args.tick_size, color='black')

            if d >= 2 and incr > 0:
                plt.annotate(f"Δprev={incr:.2f}", (y, i),
                             textcoords="offset points", xytext=(6, 8),
                             va='center', fontsize=args.tick_size)

    # ticks/labels/legend
    plt.yticks(y_positions, [str(d) for d in ds])

    legend_cumul = cumul_color_global or lighten("#4477aa", args.shade_cumul)
    legend_incr  = incr_color_global  or darken("#4477aa",  args.shade_incr)
    base_patch   = mpatches.Patch(facecolor=args.color_d0, edgecolor='black', label='Base (d=0)')
    cumul_patch  = mpatches.Patch(facecolor=legend_cumul,  edgecolor='black', label='Extra vs d=0')
    incr_patch   = mpatches.Patch(facecolor=legend_incr,   edgecolor='black', label='Extra vs d-1')
    plt.legend(handles=[base_patch, cumul_patch, incr_patch])

    # --- etichette più grandi ---
    plt.xlabel(args.ylabel or "Area [kGE]", fontsize=args.axis_label_size)
    plt.ylabel(args.xlabel or "Masking order d", fontsize=args.axis_label_size)

    # --- allarga a destra per ospitare annotazioni ---
    xmax_plotted = max(areas + ([baseline_kge] if baseline_kge else []))
    xlo, xhi = 0, xmax_plotted
    pad = (xhi - xlo) * args.right_pad_frac
    plt.xlim(xlo, xhi + pad)

    # --- tick più grandi ---
    ax = plt.gca()
    ax.tick_params(axis='both', which='major', labelsize=args.tick_size)

    plt.tight_layout()
    out = args.out or "Area_vs_d_at_PARMAX_hbar.pdf"
    fmt = 'pdf' if out.lower().endswith('.pdf') else 'png'
    plt.savefig(out, format=fmt, bbox_inches='tight')
    print(f"[OK] Salvato: {out}")

# ----------------- Ispezione / main -----------------

def chiedi_modalita(modalita_arg):
    if modalita_arg:
        return modalita_arg.lower()
    print("Che grafico vuoi fare?")
    print("  [th]   Throughput (y) vs PAR (x)")
    print("  [area] Area [kGE] (y) vs Ordine d (x) a PAR_MAX = ⌈64/(d+1)⌉")
    scelta = input("Seleziona 'th' o 'area' [th]: ").strip().lower()
    return scelta if scelta in ("th", "area") else "th"

def main():
    ap = argparse.ArgumentParser(
        description="Plot: 1) Throughput [Gbps] vs PAR (curve per SecOrder)  2) Area [kGE] vs d @ PAR_MAX=⌈64/(d+1)⌉"
    )
    # generali
    ap.add_argument('--mode', choices=['th', 'area'], help="Tipo grafico.")
    ap.add_argument('--csv', default='results_sweep.csv', help='Path CSV input')
    ap.add_argument('--group', default=None, help='Colonna per ordine (auto se omessa). Esempi: SecOrder, d, Degree')
    ap.add_argument('--out', default=None, help='File output (auto-estensione = formato)')
    ap.add_argument('--title', default=None, help='Titolo grafico')
    ap.add_argument('--xlabel', default=None, help='Etichetta asse X')
    ap.add_argument('--ylabel', default=None, help='Etichetta asse Y')
    ap.add_argument('--inspect', action='store_true', help='Stampa colonne disponibili e valori unici di d, poi esce.')

    # *** NUOVE OPZIONI DIMENSIONI TESTO ***
    ap.add_argument('--font-size', type=int, default=16, help='Dimensione font base (default: 12)')
    ap.add_argument('--title-size', type=int, default=16, help='Dimensione titolo (default: 16)')
    ap.add_argument('--axis-label-size', type=int, default=18, help='Dimensione etichette assi (default: 14)')
    ap.add_argument('--tick-size', type=int, default=12, help='Dimensione etichette tick (default: 12)')

    # *** NUOVO: padding destro per annotazioni ***
    ap.add_argument('--right-pad-frac', type=float, default=0.35,
                    help='Frazione di padding a destra dell’asse X per lasciare spazio alle annotazioni (default: 0.25)')

    # colori (entrambi i mode)
    ap.add_argument('--colors', default=None,
                    help='Mappa colori per grado (mode th o base per shade): "1:#1f77b4,2:#ff7f0e,3:#2ca02c,5:#d62728"')
    ap.add_argument('--color-hex', default=None,
                    help='Colore HEX fallback per serie/gradi non specificati (es. "#888888")')

    # per modalità th
    ap.add_argument('--x', default=None, help='[th] Colonna asse X (tipico: PAR)')
    ap.add_argument('--y', default=None, help='[th] Colonna asse Y (tipico: Th_Gbps)')
    ap.add_argument('--only-groups', nargs='*', help='[th] Filtra solo questi valori della colonna --group')

    # per modalità area
    ap.add_argument('--par-col', default=None, help='[area] Colonna PAR (tipico: PAR o PAR_MAX)')
    ap.add_argument('--area-col', default=None, help='[area] Colonna Area (kGE/µm²/mm²)')
    ap.add_argument('--degrees', nargs='*', type=int, default=[1,2,3,5], help='[area] d da considerare')
    ap.add_argument('--d0-area', type=float, default=None, help='[area] Valore manuale per d=0 (non presente nel CSV).')
    ap.add_argument('--annotate', action='store_true', help='[area] Aggiunge etichette ai punti.')

    # unità/convert
    ap.add_argument('--force-area-unit', choices=['kge','um2','mm2'], default=None,
                    help='Forza unità area (di default si deduce dal nome colonna).')
    ap.add_argument('--um2-per-ge', type=float, default=None,
                    help='µm² per 1 GE (obbligatorio se area è in µm²/mm²).')

    # colori specifici per AREA (3 colori)
    ap.add_argument('--color-d0',     default='#c7c7c7', help='[area] Colore baseline d=0 (default: #c7c7c7)')
    ap.add_argument('--color-cumul',  default=None,      help='[area] Colore extra vs d=0 (HEX, opzionale)')
    ap.add_argument('--color-incr',   default=None,      help='[area] Colore extra vs d-1 (HEX, opzionale)')
    ap.add_argument('--shade-cumul', type=float, default=0.35, help='[area] Schiarisci cumulativo (0..1)')
    ap.add_argument('--shade-incr',  type=float, default=0.25, help='[area] Scurisci incremento (0..1)')

    args = ap.parse_args()

    # applica dimensioni font globali
    plt.rcParams.update({
        'font.size': args.font_size,
        'axes.titlesize': args.title_size,
        'axes.labelsize': args.axis_label_size,
        'xtick.labelsize': args.tick_size,
        'ytick.labelsize': args.tick_size,
        'legend.fontsize': max(args.tick_size-1, 8),
    })

    # carica CSV
    rows, fieldnames = sniff_csv(args.csv)
    if not rows:
        print(f"[ERROR] CSV vuoto o non leggibile: {args.csv}", file=sys.stderr)
        sys.exit(1)

    # risoluzione colonne (auto + sinonimi)
    col_group = resolve_column(fieldnames, args.group,
                               candidates=['SecOrder','d','Degree','Order','secorder','ordine','grado'])
    col_par = resolve_column(fieldnames, args.par_col,
                             candidates=['PAR','PAR_MAX','Par','par','par_max'])
    col_area = resolve_column(fieldnames, args.area_col,
                              candidates=['Area_kGE','Area[kGE]','kGE','Area','Area_um2','Area[um^2]','Area[µm^2]','area_kge','area'])

    # ispezione
    if args.inspect:
        print("[INFO] Colonne nel CSV:")
        for c in fieldnames:
            print("  -", c)
        if col_group:
            ds = set()
            for r in rows:
                d = parse_int_from_any(r.get(col_group))
                if d is not None:
                    ds.add(d)
            print(f"[INFO] Colonna ordine: {col_group}  |  d unici trovati: {sorted(ds)}")
        else:
            print("[INFO] Nessuna colonna ordine rilevata automaticamente (usa --group).")
        if col_area:
            au = infer_area_unit(col_area, args.force_area_unit)
            print(f"[INFO] Colonna area: {col_area}  |  unità rilevata: {au}")
        sys.exit(0)

    mode = chiedi_modalita(args.mode)

    if mode == 'th':
        col_x = resolve_column(fieldnames, args.x, candidates=['PAR','Par','par'])
        col_y = resolve_column(fieldnames, args.y, candidates=['Th_Gbps','Throughput','th_gbps','th','Gbps'])
        if not col_group:
            col_group = resolve_column(fieldnames, None, candidates=['SecOrder','d','Degree'])
        if not col_x or not col_y or not col_group:
            print(f"[ERROR] Colonne non trovate. x={col_x} y={col_y} group={col_group}", file=sys.stderr)
            sys.exit(2)
        grafico_th_vs_par(rows, args, col_x, col_y, col_group)

    elif mode == 'area':
        if not col_group or not col_par or not col_area:
            print(f"[ERROR] Colonne non trovate per modalità area. group={col_group} par={col_par} area={col_area}", file=sys.stderr)
            print("[HINT] Usa --inspect per vedere le colonne. Puoi forzare con --group/--par-col/--area-col.", file=sys.stderr)
            sys.exit(2)
        grafico_area_vs_d_parmax(rows, args, col_group, col_par, col_area)

    else:
        print(f"[ERROR] Modalità sconosciuta: {mode}", file=sys.stderr)
        sys.exit(2)

if __name__ == '__main__':
    main()
