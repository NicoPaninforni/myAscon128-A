vlib work

vlog -sv +incdir+.. +define+TB \
    tb_cw305_top.v \
    ../cw305_top.v \
    ../cw305_reg_ascon.v \
    ../cw305_usb_reg_fe.v \
    ../cdc_pulse.v \
    ../clocks.v \
    xilinx_primitives_stub.v \
    ../../rtl/ascon_params.sv \
    ../../rtl/ascon_sbox_d2.sv \
    ../../rtl/fsm.sv \
    ../../rtl/lfsr.sv \
    ../../rtl/register.sv \
    ../../rtl/shareCreator.sv \
    ../../rtl/sipo_debug.sv \
    ../../rtl/state_register.sv \
    ../../rtl/ascon_top.sv \
    ../cw305_ascon_defines.v


vsim -voptargs=+acc work.tb

vcd file dump.vcd
vcd add -r tb/*

run -all
quit
