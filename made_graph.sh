python3 ascon_graph_Th.py \
  --colors "1:#219ebc,2:#588157,3:#f4a261,5:#9e2a2b" \
  --axis-label-size 18 --tick-size 16 --legend-size 12 --annot-size 10

python3 ascon_graph.py --mode area \
  --csv results_sweep.csv \
  --area-col Area_kGE \
  --degrees 1 2 3 5 \
  --d0-area 11.29 \
  --annotate \
  --color-d0 "#013a63" \
  --color-cumul "#2a6f97" \
  --color-incr "#468faf" \
  --out Area_vs_d_at_PARMAX.pdf



