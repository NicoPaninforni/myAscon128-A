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

set REPORT_DIR report

set link_library "* $target_library"

# === Read RTL from FuseSoC ===
puts "====> Reading RTL from FuseSoC-generated sources ..."
source myascon_ascon_top_1.0.0_0-read-sources.tcl

# === Elaborate ===
puts "====> Elaborating design ..."
elaborate ascon_top -lib WORK 
link
current_design ascon_top

# === Design checks ===
puts "====> Running design checks ..."
check_design > ${REPORT_DIR}/check.rpt

# === Options for preserving FF / matching sim ===
set compile_output_inversion false

# === Clock constraints ===
puts "====> Applying clock constraints ..."
create_clock -name clk -period 1.0 [get_ports clk]

# === FULL SYNTHESIS ===
puts "====> Running compile_ultra ..."
compile_ultra -no_autoungroup -no_seq_output_inversion -no_boundary_optimization

# === Reports ===
puts "====> Writing reports ..."
report_area > ${REPORT_DIR}/area.rpt
report_area -hierarchy > ${REPORT_DIR}/area_hier.rpt
report_timing > ${REPORT_DIR}/timing.rpt
report_timing -max_paths 10 > ${REPORT_DIR}/timing_max10.rpt
report_power > ${REPORT_DIR}/power.rpt

# === Netlist options for QuestaSim ===
set bus_naming_style "%s"
set verilogout_no_tri true

# === Save Gate-level netlist ===
puts "====> Saving gate-level netlist ..."
sh mkdir -p netlist
write -format verilog -hier -output netlist/ascon_top_syn.v

# === Save constraints and timing ===
puts "====> Saving constraints and timing ..."
write_sdf netlist/ascon_top_syn.sdf
write_sdc netlist/ascon_top_syn.sdc

# === Done ===
puts "====> Synthesis DONE. Exiting."
quit
