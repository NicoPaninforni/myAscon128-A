vlib work
vlog -sv -timescale 1ns/1ps +define+POST_SYNTH -sv -quiet -work work src/myascon_ascon_top_1.0.0_0/sim_post_synth/tb_ascon_top.sv
vlog -sv -timescale 1ns/1ps +define+POST_SYNTH -quiet -work work src/myascon_ascon_top_1.0.0_0/netlist/ascon_top_syn.v
vlog -sv -timescale 1ns/1ps +define+POST_SYNTH -quiet -work work /software/dk/tsmc65/digital/Front_End/verilog/tcbn65lplvt_200a/tcbn65lplvt.v
