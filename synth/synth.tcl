# ===============================
# Synthesis script for ASCON_TOP
# Target flow:
#  - Gate-level netlist (for STA)
#  - Clean QuestaSim netlist (post-synth RTL-like)
# ===============================

# === Libraries ===
set target_library [list \
    /software/dk/tsmc65/digital/Front_End/timing_power_noise/NLDM/tcbn65lplvt_220a/tcbn65lplvttc.db \
]

set link_library "* $target_library"

# === Read RTL ===
analyze -format sverilog -lib WORK ../ascon_params.sv 
analyze -format sverilog -lib WORK ../ascon_sbox_d2.sv
analyze -format sverilog -lib WORK ../fsm.sv
analyze -format sverilog -lib WORK ../register.sv
analyze -format sverilog -lib WORK ../shareCreator.sv
#analyze -format sverilog -lib WORK ../sipo_debug.sv
analyze -format sverilog -lib WORK ../state_register.sv
analyze -format sverilog -lib WORK ../ascon_top.sv

elaborate ascon_top -lib WORK 
link
current_design ascon_top

check_design > reports/check.rpt


# === Options for preserving FF / matching sim ===
#set compile_delete_unloaded_sequential_cells false
#set compile_seqmap_propagate_constants false
#set compile_seqmap_propagate_mux_using_seqgen false
#set compile_seqmap_propagate_constants_with_seqgen false
set compile_output_inversion false

# === Clock constraints ===
create_clock -name clk -period 1.0 [get_ports clk]

# === FULL SYNTHESIS ===
compile_ultra -no_autoungroup -no_seq_output_inversion -no_boundary_optimization

# === Reports ===
report_area > reports/area.rpt
report_timing > reports/timing.rpt
report_power > reports/power.rpt

# === Netlist options for QuestaSim ===
set bus_naming_style "%s"
set verilogout_no_tri true

# === Save Gate-level netlist ===
write -format verilog -hier -output ../netlist/ascon_top_syn.v

# === Save constraints and timing ===
write_sdf ../netlist/ascon_top_syn.sdf
write_sdc ../netlist/ascon_top_syn.sdc

# === Done ===
quit
