# Auto-generated project tcl file


create_project myascon_ascon_top_1.0.0_0 -force

set_property part xc7a100tftg256-2 [current_project]





read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/ascon_params.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/ascon_top.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/circular_shift_register.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/fsm.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/lfsr.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/shift_register.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/state_register.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/sipo_debug.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/register.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/ascon_sbox_d2.sv}
read_verilog -sv {src/myascon_ascon_top_1.0.0_0/rtl/shareCreator.sv}
read_verilog {src/myascon_ascon_top_1.0.0_0/fpga/cdc_pulse.v}
read_verilog {src/myascon_ascon_top_1.0.0_0/fpga/clocks.v}
read_verilog {src/myascon_ascon_top_1.0.0_0/fpga/cw305_usb_reg_fe.v}
read_verilog {src/myascon_ascon_top_1.0.0_0/fpga/cw305_ascon_defines.v}
read_verilog {src/myascon_ascon_top_1.0.0_0/fpga/cw305_reg_ascon.v}
read_verilog {src/myascon_ascon_top_1.0.0_0/fpga/cw305_top.v}
read_xdc {src/myascon_ascon_top_1.0.0_0/fpga/cw305.xdc}

set_property include_dirs [list .] [get_filesets sources_1]
set_property top cw305_top [current_fileset]
set_property source_mgmt_mode None [current_project]


