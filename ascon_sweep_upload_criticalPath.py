#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Recompute timing/throughput columns from Crit_ns.

Aggiorna:
  Arrival_ns = Crit_ns - Setup_ns
  Required_ns = Crit_ns - Setup_ns
  Fmax_GHz = 1 / Crit_ns
  Th_Gbps = 128 / (CyclesPerBlock * Crit_ns)
  Th_per_kGE_Gbps_per_kGE = Th_Gbps / kGE
  ThPerArea = Th_per_kGE_Gbps_per_kGE * 1000

Uso:
  python3 recompute_from_crit.py input.csv output.csv
"""

import sys, csv

def fnum(x):
    try:
        if x is None: return None
        s = str(x).strip()
        if s == "" or s.lower() == "na": return None
        return float(s)
    except Exception:
        return None

def inum(x):
    try:
        return int(float(str(x).strip()))
    except Exception:
        return None

def ffmt(x):
    if x is None: return ""
    # 15 cifre “ragionevoli”, come nei tuoi CSV precedenti
    return f"{x:.15g}"

def main():
    if len(sys.argv) < 3:
        print("Uso: python3 recompute_from_crit.py input.csv output.csv")
        sys.exit(1)

    inp, outp = sys.argv[1], sys.argv[2]

    with open(inp, newline="", encoding="utf-8") as f:
        rows = list(csv.DictReader(f))
        headers = rows[0].keys() if rows else []

    for r in rows:
        crit = fnum(r.get("Crit_ns"))
        setup = fnum(r.get("Setup_ns"))
        cycles = inum(r.get("CyclesPerBlock"))
        kge = fnum(r.get("kGE"))

        # Arrival/Required: solo se ho Crit e Setup
        if crit is not None and setup is not None:
            arr_req = crit - setup
            r["Arrival_ns"] = ffmt(arr_req)
            r["Required_ns"] = ffmt(arr_req)

        # Fmax: 1 / Crit_ns (ns -> GHz)
        fmax = (1.0 / crit) if (crit is not None and crit > 0.0) else None
        r["Fmax_GHz"] = ffmt(fmax)

        # Throughput: 128 / (cycles * Crit_ns)
        th = (128.0 / (cycles * crit)) if (crit and crit > 0.0 and cycles and cycles > 0) else None
        r["Th_Gbps"] = ffmt(th)

        # Th/kGE e ThPerArea (come nel tuo script precedente)
        th_per_kge = (th / kge) if (th is not None and kge and kge > 0.0) else None
        r["Th_per_kGE_Gbps_per_kGE"] = ffmt(th_per_kge)
        r["ThPerArea"] = ffmt((th_per_kge * 1000.0) if th_per_kge is not None else None)

    # Scrivi out
    with open(outp, "w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=headers)
        w.writeheader()
        for r in rows:
            w.writerow(r)

    print(f"[OK] Salvato: {outp}")

if __name__ == "__main__":
    main()
