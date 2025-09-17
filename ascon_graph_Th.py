#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse, csv, math, sys, re
from collections import defaultdict

import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

HEX_RE = re.compile(r'#([0-9a-fA-F]{6})$')

def parse_color_map(s):
    """
    Converte stringa tipo: "1:#1f77b4,2:#ff7f0e,3:#2ca02c,5:#d62728"
    in dict { '1':'#1f77b4', '2':'#ff7f0e', ... } (ignora coppie non valide).
    """
    out = {}
    if not s:
        return out
    for part in s.split(','):
        part = part.strip()
        if not part:
            continue
        if ':' not in part:
            continue
        k, v = part.split(':', 1)
        k, v = k.strip(), v.strip()
        if HEX_RE.fullmatch(v):
            out[k] = v
    return out

def main():
    ap = argparse.ArgumentParser(
        description="Plot Throughput [Gbps] vs PAR (curve per SecOrder) da results_sweep.csv"
    )
    ap.add_argument('--csv', default='results_sweep.csv', help='Path CSV input (default: results_sweep.csv)')
    ap.add_argument('--x', default='PAR', help='Colonna asse X (default: PAR)')
    ap.add_argument('--y', default='Th_Gbps', help='Colonna asse Y (default: Th_Gbps)')
    ap.add_argument('--group', default='SecOrder', help='Colonna per le serie (default: SecOrder)')
    ap.add_argument('--out', default='Th_vs_PAR.pdf', help='File PDF output (default: Th_vs_PAR.pdf)')
    ap.add_argument('--title', default='ASCON-128a (process): Throughput vs PAR', help='Titolo grafico')
    ap.add_argument('--xlabel', default='PAR', help='Etichetta asse X')
    ap.add_argument('--ylabel', default='Throughput [Gbps]', help='Etichetta asse Y')
    ap.add_argument('--only-groups', nargs='*', help='Filtra solo questi valori della colonna --group (es: 1 2 3 5)')
    ap.add_argument('--y-round', type=int, default=6,
                    help='Arrotondamento dei TH per identificare plateaux e prime occorrenze (default: 6)')
    ap.add_argument('--color-hex', default=None,
                    help='Colore HEX globale (fallback) per le serie non specificate (es. #555555)')
    ap.add_argument('--colors', default=None,
                    help='Mappa colori per grado: "1:#1f77b4,2:#ff7f0e,3:#2ca02c,5:#d62728"')

    # --- NUOVE OPZIONI DI FONT ---
    ap.add_argument('--font-size', type=int, default=12,
                    help='Dimensione font base (default: 12)')
    ap.add_argument('--title-size', type=int, default=16,
                    help='Dimensione titolo (default: 16)')
    ap.add_argument('--axis-label-size', type=int, default=14,
                    help='Dimensione etichette assi (default: 14)')
    ap.add_argument('--tick-size', type=int, default=12,
                    help='Dimensione tick assi (default: 12)')
    ap.add_argument('--legend-size', type=int, default=12,
                    help='Dimensione legenda (default: 12)')
    ap.add_argument('--annot-size', type=int, default=12,
                    help='Dimensione annotazioni sul grafico (default: 12)')

    args = ap.parse_args()

    # --- CSV ---
    try:
        with open(args.csv, newline='', encoding='utf-8') as f:
            rows = list(csv.DictReader(f))
    except FileNotFoundError:
        print(f"[ERROR] CSV non trovato: {args.csv}", file=sys.stderr)
        sys.exit(1)

    # --- Serie ---
    series = defaultdict(list)
    allowed_groups = set(args.only_groups) if args.only_groups else None
    for r in rows:
        if args.x not in r or args.y not in r or args.group not in r:
            continue
        g = r[args.group]
        if allowed_groups and g not in allowed_groups:
            continue
        try:
            x = float(r[args.x])
            y = float(r[args.y])
        except Exception:
            continue
        if math.isfinite(x) and math.isfinite(y):
            series[g].append((x, y))

    if not series:
        print("[WARN] Nessun dato valido da plottare (controlla colonne/csv).", file=sys.stderr)
        sys.exit(0)

    # --- Marker per d ---
    marker_cycle = ['o','x','^','s','D','v','>','<','p','*','h','+']  # d=1->o, d=2->x
    def pick_marker(g, idx):
        try:
            gi = int(g)
        except Exception:
            gi = None
        if gi == 1: return 'o'
        if gi == 2: return 'x'
        if gi is not None and gi >= 3:
            return marker_cycle[(gi-1) % len(marker_cycle)]
        return marker_cycle[idx % len(marker_cycle)]

    # --- Colori ---
    color_map = parse_color_map(args.colors)
    global_color = args.color_hex if (isinstance(args.color_hex, str) and HEX_RE.fullmatch(args.color_hex)) else None

    tol = 10 ** (-args.y_round)

    # --- IMPOSTAZIONI FONT GLOBALI ---
    plt.rcParams.update({
        'font.size': args.font_size,
        'axes.titlesize': args.title_size,
        'axes.labelsize': args.axis_label_size,
        'xtick.labelsize': args.tick_size,
        'ytick.labelsize': args.tick_size,
        'legend.fontsize': args.legend_size,
    })

    plt.figure()
    ax = plt.gca()
    ax.margins(x=0.02, y=0.15)  # più aria in alto per tenere le etichette dentro

    def sort_key(kv):
        k = kv[0]
        try: return (0, int(k))
        except: return (1, str(k))

    for idx, (g, pts) in enumerate(sorted(series.items(), key=sort_key)):
        pts.sort(key=lambda t: t[0])
        xs = [p[0] for p in pts]
        ys = [p[1] for p in pts]
        label = f"d={g}" if args.group.lower() in ("secorder", "d") else f"{args.group}={g}"
        marker = pick_marker(g, idx)

        # Colore preferito per questa serie
        line_kwargs = {}
        if g in color_map:
            line_kwargs['color'] = color_map[g]
        elif global_color:
            line_kwargs['color'] = global_color

        # linea (senza marker)
        line, = plt.plot(xs, ys, linewidth=0.9, label=label, **line_kwargs)
        color = line.get_color()

        # marker solo alla prima occorrenza di ciascun valore TH (plateau -> un marker)
        seen = set()
        mark_x, mark_y = [], []
        for x, y in zip(xs, ys):
            key = round(y, args.y_round)
            if key not in seen:
                seen.add(key)
                mark_x.append(x)
                mark_y.append(y)
        plt.scatter(mark_x, mark_y, marker=marker, s=25, color=color)

        # annota massimo (prima occorrenza se plateau) e TENGO IL TESTO DENTRO I BORDI
        if ys:
            ymax = max(ys)
            imax = next(i for i, y in enumerate(ys) if abs(y - ymax) <= tol)
            xmax, yval = xs[imax], ys[imax]

            # calcola offset per stare dentro
            xlo, xhi = ax.get_xlim()
            ylo, yhi = ax.get_ylim()
            xr = max(1e-9, xhi - xlo)
            yr = max(1e-9, yhi - ylo)

            dx, dy = 5, 5
            ha, va = 'left', 'bottom'
            # vicino al bordo destro?
            if xmax > xhi - 0.05 * xr:
                dx, ha = -6, 'right'
            # vicino al bordo alto?
            if yval > yhi - 0.06 * yr:
                dy, va = -8, 'top'
            # per sicurezza, se è d=5 applico offset più conservativo
            if str(g).strip() == '5':
                if xmax > xhi - 0.08 * xr:
                    dx, ha = -8, 'right'
                if yval > yhi - 0.08 * yr:
                    dy, va = -10, 'top'

            plt.annotate(f"{yval:.3g} Gbps",
                         xy=(xmax, yval),
                         xytext=(dx, dy),
                         textcoords="offset points",
                         ha=ha, va=va,
                         fontsize=args.annot_size,   # <-- dimensione annotazioni più grande
                         annotation_clip=True)

    plt.xlabel(args.xlabel, fontsize=args.axis_label_size)
    plt.ylabel(args.ylabel, fontsize=args.axis_label_size)
    # plt.grid(True, which='both', linestyle='--', linewidth=0.2)
    plt.legend()
    # tick size già gestito da rcParams; qui forziamo anche la dimensione dei tick
    ax.tick_params(axis='both', which='major', labelsize=args.tick_size)

    plt.tight_layout()
    plt.savefig(args.out, format='pdf', bbox_inches='tight')
    print(f"[OK] Salvato: {args.out}")

if __name__ == '__main__':
    main()
