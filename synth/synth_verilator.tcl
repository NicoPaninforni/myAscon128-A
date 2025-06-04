# ===============================
# synth_verilator.tcl
# Goal: generate Verilator-compatible netlist
# - No SEQGEN
# - No physical cells
# - Optional: preserve FF for debug
# ===============================

# === STEP 0: Setup ===
# Only WORK library (no physical)
set target_library ""
set link_library "* WORK"

# === STEP 1: Read RTL ===
analyze -format sverilog -lib WORK ../ascon_top.sv
analyze -format sverilog -lib WORK ../ascon_sbox_d2.sv
analyze -format sverilog -lib WORK ../fsm.sv
analyze -format sverilog -lib WORK ../register.sv
analyze -format sverilog -lib WORK ../shareCreator.sv
analyze -format sverilog -lib WORK ../sipo_debug.sv
analyze -format sverilog -lib WORK ../state_register.sv

# === STEP 2: Elaborate ===
elaborate ascon_top -lib WORK
current_design ascon_top

# === Optional: set preserve for FF used in debug ===
# Example:
set preserve_ff_list [get_cells -hierarchical *extra_padding_ff_reg*]
lappend preserve_ff_list [get_cells -hierarchical *current_state_reg*]
lappend preserve_ff_list [get_cells -hierarchical *round_counter_reg*]
lappend preserve_ff_list [get_cells -hierarchical *bit_counter_reg*]
lappend preserve_ff_list [get_cells -hierarchical *last_block_process_ff_reg*]

# Apply preserve (if found)
foreach cell $preserve_ff_list {
    if { [llength $cell] > 0 } {
        set_attribute $cell preserve true
    }
}

# === STEP 3: Low-effort compile ===
compile -map_effort low

# === STEP 4: Write Verilator-compatible netlist ===
write -format verilog -hierarchy -output ../netlist/ascon_top_verilator.v

puts "=== DONE: Verilator-friendly netlist generated ==="

# === Finish ===
quit
