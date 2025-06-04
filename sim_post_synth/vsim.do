# Compile std cell lib
vlog /software/dk/tsmc65/digital/Front_End/verilog/tcbn65lplvt_200a/tcbn65lplvt.v

# Compile netlist with timescale
vlog -sv -timescale=1ns/1ps ../netlist/ascon_top_syn.v

# Compile behavioral for comparison
vlog ../ascon_params.sv \
     ../fsm.sv \
     ../state_register.sv \
     ../register.sv \
     ../shareCreator.sv \
     ../ascon_sbox_d2.sv

# Compile testbench
vlog -sv tb_ascon_top.sv

# Run simulation
vsim -voptargs=+acc work.tb_ascon_top

# Dump wave
vcd file dump.vcd
vcd add -r tb_ascon_top/*

run -all
quit
