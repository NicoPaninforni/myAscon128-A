// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vascon_top__Syms.h"


void Vascon_top___024root__traceInitSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vascon_top___024root__traceInitTop(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vascon_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vascon_top___024root__traceInitSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1419,"clk", false,-1);
        tracep->declBit(c+1420,"reset_n", false,-1);
        tracep->declBit(c+1421,"start", false,-1);
        tracep->declQuad(c+1422,"key1", false,-1, 63,0);
        tracep->declQuad(c+1424,"key2", false,-1, 63,0);
        tracep->declBit(c+1426,"key_valid", false,-1);
        tracep->declQuad(c+1427,"nonce1", false,-1, 63,0);
        tracep->declQuad(c+1429,"nonce2", false,-1, 63,0);
        tracep->declQuad(c+1431,"initialVector", false,-1, 63,0);
        tracep->declArray(c+1433,"data_in", false,-1, 127,0);
        tracep->declBit(c+1437,"valid_data_in", false,-1);
        tracep->declBit(c+1438,"last_block", false,-1);
        tracep->declBus(c+1439,"valid_bytes", false,-1, 4,0);
        tracep->declBit(c+1440,"EOT", false,-1);
        tracep->declArray(c+1441,"state_reg_out", false,-1, 319,0);
        tracep->declBit(c+1451,"ciphertext_valid", false,-1);
        tracep->declArray(c+1452,"ciphertext", false,-1, 127,0);
        tracep->declBit(c+1456,"done", false,-1);
        tracep->declBit(c+1457,"ready_tag", false,-1);
        tracep->declQuad(c+1458,"tag1", false,-1, 63,0);
        tracep->declQuad(c+1460,"tag2", false,-1, 63,0);
        tracep->declBit(c+1462,"ready_for_data", false,-1);
        tracep->declBit(c+1463,"read_data", false,-1);
        tracep->declBit(c+1464,"debug_extra_padding_ff", false,-1);
        tracep->declBus(c+1465,"debug_bitcounter", false,-1, 3,0);
        tracep->declBus(c+1466,"debug_roundcounter", false,-1, 3,0);
        tracep->declBus(c+1467,"debug_state", false,-1, 4,0);
        tracep->declQuad(c+1468,"debug_state_0", false,-1, 63,0);
        tracep->declQuad(c+1470,"debug_state_1", false,-1, 63,0);
        tracep->declQuad(c+1472,"debug_state_2", false,-1, 63,0);
        tracep->declQuad(c+1474,"debug_state_3", false,-1, 63,0);
        tracep->declQuad(c+1476,"debug_state_4", false,-1, 63,0);
        tracep->declQuad(c+1478,"debug_round_state_0", false,-1, 63,0);
        tracep->declQuad(c+1480,"debug_round_state_1", false,-1, 63,0);
        tracep->declQuad(c+1482,"debug_round_state_2", false,-1, 63,0);
        tracep->declQuad(c+1484,"debug_round_state_3", false,-1, 63,0);
        tracep->declQuad(c+1486,"debug_round_state_4", false,-1, 63,0);
        tracep->declQuad(c+1488,"debug_linear_diffusion_state3", false,-1, 63,0);
        tracep->declQuad(c+1490,"debug_linear_diffusion_state4", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top clk", false,-1);
        tracep->declBit(c+1420,"ascon_top reset_n", false,-1);
        tracep->declBit(c+1421,"ascon_top start", false,-1);
        tracep->declQuad(c+1422,"ascon_top key1", false,-1, 63,0);
        tracep->declQuad(c+1424,"ascon_top key2", false,-1, 63,0);
        tracep->declBit(c+1426,"ascon_top key_valid", false,-1);
        tracep->declQuad(c+1427,"ascon_top nonce1", false,-1, 63,0);
        tracep->declQuad(c+1429,"ascon_top nonce2", false,-1, 63,0);
        tracep->declQuad(c+1431,"ascon_top initialVector", false,-1, 63,0);
        tracep->declArray(c+1433,"ascon_top data_in", false,-1, 127,0);
        tracep->declBit(c+1437,"ascon_top valid_data_in", false,-1);
        tracep->declBit(c+1438,"ascon_top last_block", false,-1);
        tracep->declBus(c+1439,"ascon_top valid_bytes", false,-1, 4,0);
        tracep->declBit(c+1440,"ascon_top EOT", false,-1);
        tracep->declArray(c+1441,"ascon_top state_reg_out", false,-1, 319,0);
        tracep->declBit(c+1451,"ascon_top ciphertext_valid", false,-1);
        tracep->declArray(c+1452,"ascon_top ciphertext", false,-1, 127,0);
        tracep->declBit(c+1456,"ascon_top done", false,-1);
        tracep->declBit(c+1457,"ascon_top ready_tag", false,-1);
        tracep->declQuad(c+1458,"ascon_top tag1", false,-1, 63,0);
        tracep->declQuad(c+1460,"ascon_top tag2", false,-1, 63,0);
        tracep->declBit(c+1462,"ascon_top ready_for_data", false,-1);
        tracep->declBit(c+1463,"ascon_top read_data", false,-1);
        tracep->declBit(c+1464,"ascon_top debug_extra_padding_ff", false,-1);
        tracep->declBus(c+1465,"ascon_top debug_bitcounter", false,-1, 3,0);
        tracep->declBus(c+1466,"ascon_top debug_roundcounter", false,-1, 3,0);
        tracep->declBus(c+1467,"ascon_top debug_state", false,-1, 4,0);
        tracep->declQuad(c+1468,"ascon_top debug_state_0", false,-1, 63,0);
        tracep->declQuad(c+1470,"ascon_top debug_state_1", false,-1, 63,0);
        tracep->declQuad(c+1472,"ascon_top debug_state_2", false,-1, 63,0);
        tracep->declQuad(c+1474,"ascon_top debug_state_3", false,-1, 63,0);
        tracep->declQuad(c+1476,"ascon_top debug_state_4", false,-1, 63,0);
        tracep->declQuad(c+1478,"ascon_top debug_round_state_0", false,-1, 63,0);
        tracep->declQuad(c+1480,"ascon_top debug_round_state_1", false,-1, 63,0);
        tracep->declQuad(c+1482,"ascon_top debug_round_state_2", false,-1, 63,0);
        tracep->declQuad(c+1484,"ascon_top debug_round_state_3", false,-1, 63,0);
        tracep->declQuad(c+1486,"ascon_top debug_round_state_4", false,-1, 63,0);
        tracep->declQuad(c+1488,"ascon_top debug_linear_diffusion_state3", false,-1, 63,0);
        tracep->declQuad(c+1490,"ascon_top debug_linear_diffusion_state4", false,-1, 63,0);
        tracep->declArray(c+519,"ascon_top lfsr_out", false,-1, 95,0);
        tracep->declBus(c+522,"ascon_top lfsr_state_in", false,-1, 30,0);
        tracep->declBus(c+523,"ascon_top lfsr_state_out", false,-1, 30,0);
        tracep->declArray(c+524,"ascon_top random_masks", false,-1, 89,0);
        tracep->declBus(c+527,"ascon_top random_masks_sbox", false,-1, 5,0);
        tracep->declBit(c+528,"ascon_top extra_padding_ff", false,-1);
        tracep->declBit(c+529,"ascon_top shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top shift_type", false,-1);
        tracep->declBit(c+1112,"ascon_top write_en", false,-1);
        tracep->declBit(c+531,"ascon_top last_cycle", false,-1);
        tracep->declBit(c+532,"ascon_top reg_key1_load", false,-1);
        tracep->declBit(c+533,"ascon_top reg_key2_load", false,-1);
        tracep->declBit(c+534,"ascon_top sel_mux_linear_diffusion_out_x3", false,-1);
        tracep->declBit(c+1113,"ascon_top sel_mux_linear_diffusion_out_x4", false,-1);
        tracep->declBit(c+1114,"ascon_top sel_init_load", false,-1);
        tracep->declBit(c+535,"ascon_top sel_masked_round", false,-1);
        tracep->declBit(c+1115,"ascon_top sel_padding", false,-1);
        tracep->declBit(c+536,"ascon_top sel_xor_signal", false,-1);
        tracep->declBit(c+1116,"ascon_top sel_absorb_data", false,-1);
        tracep->declBit(c+537,"ascon_top shift_enable_sipo", false,-1);
        tracep->declBit(c+538,"ascon_top last_cycle_sipo", false,-1);
        tracep->declBus(c+539,"ascon_top round_counter", false,-1, 3,0);
        tracep->declBus(c+540,"ascon_top bit_counter", false,-1, 3,0);
        tracep->declArray(c+1117,"ascon_top state_reg_in", false,-1, 319,0);
        tracep->declArray(c+837,"ascon_top state_reg_out_shiftdplus1", false,-1, 119,0);
        tracep->declArray(c+1152,"ascon_top state_reg_in_shiftdplus1", false,-1, 119,0);
        tracep->declBus(c+1156,"ascon_top state_reg_in_shift1", false,-1, 29,0);
        tracep->declQuad(c+541,"ascon_top reg_key1_out", false,-1, 63,0);
        tracep->declQuad(c+543,"ascon_top reg_key2_out", false,-1, 63,0);
        tracep->declQuad(c+545,"ascon_top round_x0_debug", false,-1, 63,0);
        tracep->declQuad(c+547,"ascon_top round_x1_debug", false,-1, 63,0);
        tracep->declQuad(c+549,"ascon_top round_x2_debug", false,-1, 63,0);
        tracep->declQuad(c+551,"ascon_top round_x3_debug", false,-1, 63,0);
        tracep->declQuad(c+553,"ascon_top round_x4_debug", false,-1, 63,0);
        tracep->declBus(c+841,"ascon_top state_reg_out_x0", false,-1, 23,0);
        tracep->declBus(c+842,"ascon_top state_reg_out_x1", false,-1, 23,0);
        tracep->declBus(c+843,"ascon_top state_reg_out_x2", false,-1, 23,0);
        tracep->declBus(c+844,"ascon_top state_reg_out_x3", false,-1, 23,0);
        tracep->declBus(c+845,"ascon_top state_reg_out_x4", false,-1, 23,0);
        tracep->declBus(c+846,"ascon_top mux_1st_x0", false,-1, 23,0);
        tracep->declBus(c+847,"ascon_top mux_1st_x1", false,-1, 23,0);
        tracep->declBus(c+1157,"ascon_top mux_1st_x2", false,-1, 23,0);
        tracep->declBus(c+848,"ascon_top mux_1st_x3", false,-1, 23,0);
        tracep->declBus(c+849,"ascon_top mux_1st_x4", false,-1, 23,0);
        tracep->declQuad(c+555,"ascon_top round_constant_full", false,-1, 63,0);
        tracep->declBus(c+1508,"ascon_top RC_PADDED_WIDTH", false,-1, 31,0);
        tracep->declArray(c+557,"ascon_top round_constant_padded", false,-1, 65,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+560+i*1,"ascon_top rc_block", true,(i+0), 5,0);}}
        tracep->declArray(c+1158,"ascon_top shares_out", false,-1, 119,0);
        tracep->declBus(c+1492,"ascon_top shares_in", false,-1, 29,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1162+i*1,"ascon_top affine_layer_in", true,(i+0), 29,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1166+i*1,"ascon_top affine_layer_out", true,(i+0), 29,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1170+i*1,"ascon_top next_sbox_input", true,(i+0), 19,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+850+i*1,"ascon_top sbox_input", true,(i+0), 19,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+856+i*1,"ascon_top sbox_output", true,(i+0), 19,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1176+i*1,"ascon_top sbox_output_unmasked", true,(i+0), 19,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1182+i*1,"ascon_top mux_sbox_out", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1188+i*1,"ascon_top affine_layer2nd_in", true,(i+0), 29,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1192+i*1,"ascon_top affine_layer2nd_out", true,(i+0), 29,0);}}
        tracep->declBus(c+1156,"ascon_top recombine_shares", false,-1, 29,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1102+i*2,"ascon_top state_reg_in_absorb", true,(i+0), 63,0);}}
        tracep->declArray(c+1493,"ascon_top init_data", false,-1, 319,0);
        tracep->declArray(c+862,"ascon_top linear_diffusion_out", false,-1, 319,0);
        tracep->declArray(c+1127,"ascon_top data_in_padded", false,-1, 127,0);
        tracep->declArray(c+1131,"ascon_top reverse_reg_data_out", false,-1, 127,0);
        tracep->declArray(c+825,"ascon_top input_state", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1+i*1,"ascon_top rotations_a", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6+i*1,"ascon_top rotations_b", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+872+i*2,"ascon_top linear_diffusion_debug", true,(i+0), 63,0);}}
        tracep->declQuad(c+835,"ascon_top mux_linear_diffusion_out_x4", false,-1, 63,0);
        tracep->declQuad(c+1503,"ascon_top mux_linear_diffusion_out_x3", false,-1, 63,0);
        tracep->declQuad(c+564,"ascon_top xor_signal", false,-1, 63,0);
        tracep->declBus(c+882,"ascon_top unnamedblk1 p", false,-1, 31,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[0] fresh_r", false,-1, 5,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[1] fresh_r", false,-1, 5,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[2] fresh_r", false,-1, 5,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[3] fresh_r", false,-1, 5,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[4] fresh_r", false,-1, 5,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[5] fresh_r", false,-1, 5,0);
        tracep->declBus(c+1196,"ascon_top affine_layer[0] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+1505,"ascon_top affine_layer[1] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+1506,"ascon_top affine_layer[2] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+1507,"ascon_top affine_layer[3] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+1197,"ascon_top recombine[0] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[0] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1198,"ascon_top recombine[1] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[1] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1199,"ascon_top recombine[2] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[2] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1200,"ascon_top recombine[3] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[3] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1201,"ascon_top recombine[4] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[4] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1202,"ascon_top recombine[5] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[5] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1203,"ascon_top recombine[6] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[6] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1204,"ascon_top recombine[7] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[7] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1205,"ascon_top recombine[8] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[8] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1206,"ascon_top recombine[9] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[9] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1207,"ascon_top recombine[10] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[10] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1208,"ascon_top recombine[11] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[11] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1209,"ascon_top recombine[12] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[12] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1210,"ascon_top recombine[13] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[13] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1211,"ascon_top recombine[14] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[14] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1212,"ascon_top recombine[15] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[15] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1213,"ascon_top recombine[16] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[16] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1214,"ascon_top recombine[17] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[17] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1215,"ascon_top recombine[18] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[18] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1216,"ascon_top recombine[19] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[19] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1217,"ascon_top recombine[20] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[20] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1218,"ascon_top recombine[21] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[21] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1219,"ascon_top recombine[22] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[22] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1220,"ascon_top recombine[23] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[23] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1221,"ascon_top recombine[24] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[24] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1222,"ascon_top recombine[25] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[25] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1223,"ascon_top recombine[26] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[26] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1224,"ascon_top recombine[27] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[27] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1225,"ascon_top recombine[28] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[28] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1226,"ascon_top recombine[29] temp_bits", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top recombine[29] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+1135,"ascon_top unnamedblk5 i", false,-1, 31,0);
        tracep->declArray(c+1510,"ascon_top lfst_inst data_in", false,-1, 95,0);
        tracep->declBus(c+522,"ascon_top lfst_inst state_in", false,-1, 30,0);
        tracep->declArray(c+519,"ascon_top lfst_inst data_out", false,-1, 95,0);
        tracep->declBus(c+523,"ascon_top lfst_inst state_out", false,-1, 30,0);
        tracep->declBus(c+1513,"ascon_top lfst_inst STYLE_INT", false,-1, 31,0);
        tracep->declArray(c+11,"ascon_top lfst_inst genblk1 lfsr_state[0] mask", false,-1, 126,0);
        tracep->declBit(c+566,"ascon_top lfst_inst genblk1 lfsr_state[0] state_reg", false,-1);
        tracep->declBus(c+567,"ascon_top lfst_inst genblk1 lfsr_state[0] i", false,-1, 31,0);
        tracep->declArray(c+15,"ascon_top lfst_inst genblk1 lfsr_state[1] mask", false,-1, 126,0);
        tracep->declBit(c+568,"ascon_top lfst_inst genblk1 lfsr_state[1] state_reg", false,-1);
        tracep->declBus(c+569,"ascon_top lfst_inst genblk1 lfsr_state[1] i", false,-1, 31,0);
        tracep->declArray(c+19,"ascon_top lfst_inst genblk1 lfsr_state[2] mask", false,-1, 126,0);
        tracep->declBit(c+570,"ascon_top lfst_inst genblk1 lfsr_state[2] state_reg", false,-1);
        tracep->declBus(c+571,"ascon_top lfst_inst genblk1 lfsr_state[2] i", false,-1, 31,0);
        tracep->declArray(c+23,"ascon_top lfst_inst genblk1 lfsr_state[3] mask", false,-1, 126,0);
        tracep->declBit(c+572,"ascon_top lfst_inst genblk1 lfsr_state[3] state_reg", false,-1);
        tracep->declBus(c+573,"ascon_top lfst_inst genblk1 lfsr_state[3] i", false,-1, 31,0);
        tracep->declArray(c+27,"ascon_top lfst_inst genblk1 lfsr_state[4] mask", false,-1, 126,0);
        tracep->declBit(c+574,"ascon_top lfst_inst genblk1 lfsr_state[4] state_reg", false,-1);
        tracep->declBus(c+575,"ascon_top lfst_inst genblk1 lfsr_state[4] i", false,-1, 31,0);
        tracep->declArray(c+31,"ascon_top lfst_inst genblk1 lfsr_state[5] mask", false,-1, 126,0);
        tracep->declBit(c+576,"ascon_top lfst_inst genblk1 lfsr_state[5] state_reg", false,-1);
        tracep->declBus(c+577,"ascon_top lfst_inst genblk1 lfsr_state[5] i", false,-1, 31,0);
        tracep->declArray(c+35,"ascon_top lfst_inst genblk1 lfsr_state[6] mask", false,-1, 126,0);
        tracep->declBit(c+578,"ascon_top lfst_inst genblk1 lfsr_state[6] state_reg", false,-1);
        tracep->declBus(c+579,"ascon_top lfst_inst genblk1 lfsr_state[6] i", false,-1, 31,0);
        tracep->declArray(c+39,"ascon_top lfst_inst genblk1 lfsr_state[7] mask", false,-1, 126,0);
        tracep->declBit(c+580,"ascon_top lfst_inst genblk1 lfsr_state[7] state_reg", false,-1);
        tracep->declBus(c+581,"ascon_top lfst_inst genblk1 lfsr_state[7] i", false,-1, 31,0);
        tracep->declArray(c+43,"ascon_top lfst_inst genblk1 lfsr_state[8] mask", false,-1, 126,0);
        tracep->declBit(c+582,"ascon_top lfst_inst genblk1 lfsr_state[8] state_reg", false,-1);
        tracep->declBus(c+583,"ascon_top lfst_inst genblk1 lfsr_state[8] i", false,-1, 31,0);
        tracep->declArray(c+47,"ascon_top lfst_inst genblk1 lfsr_state[9] mask", false,-1, 126,0);
        tracep->declBit(c+584,"ascon_top lfst_inst genblk1 lfsr_state[9] state_reg", false,-1);
        tracep->declBus(c+585,"ascon_top lfst_inst genblk1 lfsr_state[9] i", false,-1, 31,0);
        tracep->declArray(c+51,"ascon_top lfst_inst genblk1 lfsr_state[10] mask", false,-1, 126,0);
        tracep->declBit(c+586,"ascon_top lfst_inst genblk1 lfsr_state[10] state_reg", false,-1);
        tracep->declBus(c+587,"ascon_top lfst_inst genblk1 lfsr_state[10] i", false,-1, 31,0);
        tracep->declArray(c+55,"ascon_top lfst_inst genblk1 lfsr_state[11] mask", false,-1, 126,0);
        tracep->declBit(c+588,"ascon_top lfst_inst genblk1 lfsr_state[11] state_reg", false,-1);
        tracep->declBus(c+589,"ascon_top lfst_inst genblk1 lfsr_state[11] i", false,-1, 31,0);
        tracep->declArray(c+59,"ascon_top lfst_inst genblk1 lfsr_state[12] mask", false,-1, 126,0);
        tracep->declBit(c+590,"ascon_top lfst_inst genblk1 lfsr_state[12] state_reg", false,-1);
        tracep->declBus(c+591,"ascon_top lfst_inst genblk1 lfsr_state[12] i", false,-1, 31,0);
        tracep->declArray(c+63,"ascon_top lfst_inst genblk1 lfsr_state[13] mask", false,-1, 126,0);
        tracep->declBit(c+592,"ascon_top lfst_inst genblk1 lfsr_state[13] state_reg", false,-1);
        tracep->declBus(c+593,"ascon_top lfst_inst genblk1 lfsr_state[13] i", false,-1, 31,0);
        tracep->declArray(c+67,"ascon_top lfst_inst genblk1 lfsr_state[14] mask", false,-1, 126,0);
        tracep->declBit(c+594,"ascon_top lfst_inst genblk1 lfsr_state[14] state_reg", false,-1);
        tracep->declBus(c+595,"ascon_top lfst_inst genblk1 lfsr_state[14] i", false,-1, 31,0);
        tracep->declArray(c+71,"ascon_top lfst_inst genblk1 lfsr_state[15] mask", false,-1, 126,0);
        tracep->declBit(c+596,"ascon_top lfst_inst genblk1 lfsr_state[15] state_reg", false,-1);
        tracep->declBus(c+597,"ascon_top lfst_inst genblk1 lfsr_state[15] i", false,-1, 31,0);
        tracep->declArray(c+75,"ascon_top lfst_inst genblk1 lfsr_state[16] mask", false,-1, 126,0);
        tracep->declBit(c+598,"ascon_top lfst_inst genblk1 lfsr_state[16] state_reg", false,-1);
        tracep->declBus(c+599,"ascon_top lfst_inst genblk1 lfsr_state[16] i", false,-1, 31,0);
        tracep->declArray(c+79,"ascon_top lfst_inst genblk1 lfsr_state[17] mask", false,-1, 126,0);
        tracep->declBit(c+600,"ascon_top lfst_inst genblk1 lfsr_state[17] state_reg", false,-1);
        tracep->declBus(c+601,"ascon_top lfst_inst genblk1 lfsr_state[17] i", false,-1, 31,0);
        tracep->declArray(c+83,"ascon_top lfst_inst genblk1 lfsr_state[18] mask", false,-1, 126,0);
        tracep->declBit(c+602,"ascon_top lfst_inst genblk1 lfsr_state[18] state_reg", false,-1);
        tracep->declBus(c+603,"ascon_top lfst_inst genblk1 lfsr_state[18] i", false,-1, 31,0);
        tracep->declArray(c+87,"ascon_top lfst_inst genblk1 lfsr_state[19] mask", false,-1, 126,0);
        tracep->declBit(c+604,"ascon_top lfst_inst genblk1 lfsr_state[19] state_reg", false,-1);
        tracep->declBus(c+605,"ascon_top lfst_inst genblk1 lfsr_state[19] i", false,-1, 31,0);
        tracep->declArray(c+91,"ascon_top lfst_inst genblk1 lfsr_state[20] mask", false,-1, 126,0);
        tracep->declBit(c+606,"ascon_top lfst_inst genblk1 lfsr_state[20] state_reg", false,-1);
        tracep->declBus(c+607,"ascon_top lfst_inst genblk1 lfsr_state[20] i", false,-1, 31,0);
        tracep->declArray(c+95,"ascon_top lfst_inst genblk1 lfsr_state[21] mask", false,-1, 126,0);
        tracep->declBit(c+608,"ascon_top lfst_inst genblk1 lfsr_state[21] state_reg", false,-1);
        tracep->declBus(c+609,"ascon_top lfst_inst genblk1 lfsr_state[21] i", false,-1, 31,0);
        tracep->declArray(c+99,"ascon_top lfst_inst genblk1 lfsr_state[22] mask", false,-1, 126,0);
        tracep->declBit(c+610,"ascon_top lfst_inst genblk1 lfsr_state[22] state_reg", false,-1);
        tracep->declBus(c+611,"ascon_top lfst_inst genblk1 lfsr_state[22] i", false,-1, 31,0);
        tracep->declArray(c+103,"ascon_top lfst_inst genblk1 lfsr_state[23] mask", false,-1, 126,0);
        tracep->declBit(c+612,"ascon_top lfst_inst genblk1 lfsr_state[23] state_reg", false,-1);
        tracep->declBus(c+613,"ascon_top lfst_inst genblk1 lfsr_state[23] i", false,-1, 31,0);
        tracep->declArray(c+107,"ascon_top lfst_inst genblk1 lfsr_state[24] mask", false,-1, 126,0);
        tracep->declBit(c+614,"ascon_top lfst_inst genblk1 lfsr_state[24] state_reg", false,-1);
        tracep->declBus(c+615,"ascon_top lfst_inst genblk1 lfsr_state[24] i", false,-1, 31,0);
        tracep->declArray(c+111,"ascon_top lfst_inst genblk1 lfsr_state[25] mask", false,-1, 126,0);
        tracep->declBit(c+616,"ascon_top lfst_inst genblk1 lfsr_state[25] state_reg", false,-1);
        tracep->declBus(c+617,"ascon_top lfst_inst genblk1 lfsr_state[25] i", false,-1, 31,0);
        tracep->declArray(c+115,"ascon_top lfst_inst genblk1 lfsr_state[26] mask", false,-1, 126,0);
        tracep->declBit(c+618,"ascon_top lfst_inst genblk1 lfsr_state[26] state_reg", false,-1);
        tracep->declBus(c+619,"ascon_top lfst_inst genblk1 lfsr_state[26] i", false,-1, 31,0);
        tracep->declArray(c+119,"ascon_top lfst_inst genblk1 lfsr_state[27] mask", false,-1, 126,0);
        tracep->declBit(c+620,"ascon_top lfst_inst genblk1 lfsr_state[27] state_reg", false,-1);
        tracep->declBus(c+621,"ascon_top lfst_inst genblk1 lfsr_state[27] i", false,-1, 31,0);
        tracep->declArray(c+123,"ascon_top lfst_inst genblk1 lfsr_state[28] mask", false,-1, 126,0);
        tracep->declBit(c+622,"ascon_top lfst_inst genblk1 lfsr_state[28] state_reg", false,-1);
        tracep->declBus(c+623,"ascon_top lfst_inst genblk1 lfsr_state[28] i", false,-1, 31,0);
        tracep->declArray(c+127,"ascon_top lfst_inst genblk1 lfsr_state[29] mask", false,-1, 126,0);
        tracep->declBit(c+624,"ascon_top lfst_inst genblk1 lfsr_state[29] state_reg", false,-1);
        tracep->declBus(c+625,"ascon_top lfst_inst genblk1 lfsr_state[29] i", false,-1, 31,0);
        tracep->declArray(c+131,"ascon_top lfst_inst genblk1 lfsr_state[30] mask", false,-1, 126,0);
        tracep->declBit(c+626,"ascon_top lfst_inst genblk1 lfsr_state[30] state_reg", false,-1);
        tracep->declBus(c+627,"ascon_top lfst_inst genblk1 lfsr_state[30] i", false,-1, 31,0);
        tracep->declArray(c+135,"ascon_top lfst_inst genblk1 lfsr_data[0] mask", false,-1, 126,0);
        tracep->declBit(c+628,"ascon_top lfst_inst genblk1 lfsr_data[0] data_reg", false,-1);
        tracep->declBus(c+629,"ascon_top lfst_inst genblk1 lfsr_data[0] i", false,-1, 31,0);
        tracep->declArray(c+139,"ascon_top lfst_inst genblk1 lfsr_data[1] mask", false,-1, 126,0);
        tracep->declBit(c+630,"ascon_top lfst_inst genblk1 lfsr_data[1] data_reg", false,-1);
        tracep->declBus(c+631,"ascon_top lfst_inst genblk1 lfsr_data[1] i", false,-1, 31,0);
        tracep->declArray(c+143,"ascon_top lfst_inst genblk1 lfsr_data[2] mask", false,-1, 126,0);
        tracep->declBit(c+632,"ascon_top lfst_inst genblk1 lfsr_data[2] data_reg", false,-1);
        tracep->declBus(c+633,"ascon_top lfst_inst genblk1 lfsr_data[2] i", false,-1, 31,0);
        tracep->declArray(c+147,"ascon_top lfst_inst genblk1 lfsr_data[3] mask", false,-1, 126,0);
        tracep->declBit(c+634,"ascon_top lfst_inst genblk1 lfsr_data[3] data_reg", false,-1);
        tracep->declBus(c+635,"ascon_top lfst_inst genblk1 lfsr_data[3] i", false,-1, 31,0);
        tracep->declArray(c+151,"ascon_top lfst_inst genblk1 lfsr_data[4] mask", false,-1, 126,0);
        tracep->declBit(c+636,"ascon_top lfst_inst genblk1 lfsr_data[4] data_reg", false,-1);
        tracep->declBus(c+637,"ascon_top lfst_inst genblk1 lfsr_data[4] i", false,-1, 31,0);
        tracep->declArray(c+155,"ascon_top lfst_inst genblk1 lfsr_data[5] mask", false,-1, 126,0);
        tracep->declBit(c+638,"ascon_top lfst_inst genblk1 lfsr_data[5] data_reg", false,-1);
        tracep->declBus(c+639,"ascon_top lfst_inst genblk1 lfsr_data[5] i", false,-1, 31,0);
        tracep->declArray(c+159,"ascon_top lfst_inst genblk1 lfsr_data[6] mask", false,-1, 126,0);
        tracep->declBit(c+640,"ascon_top lfst_inst genblk1 lfsr_data[6] data_reg", false,-1);
        tracep->declBus(c+641,"ascon_top lfst_inst genblk1 lfsr_data[6] i", false,-1, 31,0);
        tracep->declArray(c+163,"ascon_top lfst_inst genblk1 lfsr_data[7] mask", false,-1, 126,0);
        tracep->declBit(c+642,"ascon_top lfst_inst genblk1 lfsr_data[7] data_reg", false,-1);
        tracep->declBus(c+643,"ascon_top lfst_inst genblk1 lfsr_data[7] i", false,-1, 31,0);
        tracep->declArray(c+167,"ascon_top lfst_inst genblk1 lfsr_data[8] mask", false,-1, 126,0);
        tracep->declBit(c+644,"ascon_top lfst_inst genblk1 lfsr_data[8] data_reg", false,-1);
        tracep->declBus(c+645,"ascon_top lfst_inst genblk1 lfsr_data[8] i", false,-1, 31,0);
        tracep->declArray(c+171,"ascon_top lfst_inst genblk1 lfsr_data[9] mask", false,-1, 126,0);
        tracep->declBit(c+646,"ascon_top lfst_inst genblk1 lfsr_data[9] data_reg", false,-1);
        tracep->declBus(c+647,"ascon_top lfst_inst genblk1 lfsr_data[9] i", false,-1, 31,0);
        tracep->declArray(c+175,"ascon_top lfst_inst genblk1 lfsr_data[10] mask", false,-1, 126,0);
        tracep->declBit(c+648,"ascon_top lfst_inst genblk1 lfsr_data[10] data_reg", false,-1);
        tracep->declBus(c+649,"ascon_top lfst_inst genblk1 lfsr_data[10] i", false,-1, 31,0);
        tracep->declArray(c+179,"ascon_top lfst_inst genblk1 lfsr_data[11] mask", false,-1, 126,0);
        tracep->declBit(c+650,"ascon_top lfst_inst genblk1 lfsr_data[11] data_reg", false,-1);
        tracep->declBus(c+651,"ascon_top lfst_inst genblk1 lfsr_data[11] i", false,-1, 31,0);
        tracep->declArray(c+183,"ascon_top lfst_inst genblk1 lfsr_data[12] mask", false,-1, 126,0);
        tracep->declBit(c+652,"ascon_top lfst_inst genblk1 lfsr_data[12] data_reg", false,-1);
        tracep->declBus(c+653,"ascon_top lfst_inst genblk1 lfsr_data[12] i", false,-1, 31,0);
        tracep->declArray(c+187,"ascon_top lfst_inst genblk1 lfsr_data[13] mask", false,-1, 126,0);
        tracep->declBit(c+654,"ascon_top lfst_inst genblk1 lfsr_data[13] data_reg", false,-1);
        tracep->declBus(c+655,"ascon_top lfst_inst genblk1 lfsr_data[13] i", false,-1, 31,0);
        tracep->declArray(c+191,"ascon_top lfst_inst genblk1 lfsr_data[14] mask", false,-1, 126,0);
        tracep->declBit(c+656,"ascon_top lfst_inst genblk1 lfsr_data[14] data_reg", false,-1);
        tracep->declBus(c+657,"ascon_top lfst_inst genblk1 lfsr_data[14] i", false,-1, 31,0);
        tracep->declArray(c+195,"ascon_top lfst_inst genblk1 lfsr_data[15] mask", false,-1, 126,0);
        tracep->declBit(c+658,"ascon_top lfst_inst genblk1 lfsr_data[15] data_reg", false,-1);
        tracep->declBus(c+659,"ascon_top lfst_inst genblk1 lfsr_data[15] i", false,-1, 31,0);
        tracep->declArray(c+199,"ascon_top lfst_inst genblk1 lfsr_data[16] mask", false,-1, 126,0);
        tracep->declBit(c+660,"ascon_top lfst_inst genblk1 lfsr_data[16] data_reg", false,-1);
        tracep->declBus(c+661,"ascon_top lfst_inst genblk1 lfsr_data[16] i", false,-1, 31,0);
        tracep->declArray(c+203,"ascon_top lfst_inst genblk1 lfsr_data[17] mask", false,-1, 126,0);
        tracep->declBit(c+662,"ascon_top lfst_inst genblk1 lfsr_data[17] data_reg", false,-1);
        tracep->declBus(c+663,"ascon_top lfst_inst genblk1 lfsr_data[17] i", false,-1, 31,0);
        tracep->declArray(c+207,"ascon_top lfst_inst genblk1 lfsr_data[18] mask", false,-1, 126,0);
        tracep->declBit(c+664,"ascon_top lfst_inst genblk1 lfsr_data[18] data_reg", false,-1);
        tracep->declBus(c+665,"ascon_top lfst_inst genblk1 lfsr_data[18] i", false,-1, 31,0);
        tracep->declArray(c+211,"ascon_top lfst_inst genblk1 lfsr_data[19] mask", false,-1, 126,0);
        tracep->declBit(c+666,"ascon_top lfst_inst genblk1 lfsr_data[19] data_reg", false,-1);
        tracep->declBus(c+667,"ascon_top lfst_inst genblk1 lfsr_data[19] i", false,-1, 31,0);
        tracep->declArray(c+215,"ascon_top lfst_inst genblk1 lfsr_data[20] mask", false,-1, 126,0);
        tracep->declBit(c+668,"ascon_top lfst_inst genblk1 lfsr_data[20] data_reg", false,-1);
        tracep->declBus(c+669,"ascon_top lfst_inst genblk1 lfsr_data[20] i", false,-1, 31,0);
        tracep->declArray(c+219,"ascon_top lfst_inst genblk1 lfsr_data[21] mask", false,-1, 126,0);
        tracep->declBit(c+670,"ascon_top lfst_inst genblk1 lfsr_data[21] data_reg", false,-1);
        tracep->declBus(c+671,"ascon_top lfst_inst genblk1 lfsr_data[21] i", false,-1, 31,0);
        tracep->declArray(c+223,"ascon_top lfst_inst genblk1 lfsr_data[22] mask", false,-1, 126,0);
        tracep->declBit(c+672,"ascon_top lfst_inst genblk1 lfsr_data[22] data_reg", false,-1);
        tracep->declBus(c+673,"ascon_top lfst_inst genblk1 lfsr_data[22] i", false,-1, 31,0);
        tracep->declArray(c+227,"ascon_top lfst_inst genblk1 lfsr_data[23] mask", false,-1, 126,0);
        tracep->declBit(c+674,"ascon_top lfst_inst genblk1 lfsr_data[23] data_reg", false,-1);
        tracep->declBus(c+675,"ascon_top lfst_inst genblk1 lfsr_data[23] i", false,-1, 31,0);
        tracep->declArray(c+231,"ascon_top lfst_inst genblk1 lfsr_data[24] mask", false,-1, 126,0);
        tracep->declBit(c+676,"ascon_top lfst_inst genblk1 lfsr_data[24] data_reg", false,-1);
        tracep->declBus(c+677,"ascon_top lfst_inst genblk1 lfsr_data[24] i", false,-1, 31,0);
        tracep->declArray(c+235,"ascon_top lfst_inst genblk1 lfsr_data[25] mask", false,-1, 126,0);
        tracep->declBit(c+678,"ascon_top lfst_inst genblk1 lfsr_data[25] data_reg", false,-1);
        tracep->declBus(c+679,"ascon_top lfst_inst genblk1 lfsr_data[25] i", false,-1, 31,0);
        tracep->declArray(c+239,"ascon_top lfst_inst genblk1 lfsr_data[26] mask", false,-1, 126,0);
        tracep->declBit(c+680,"ascon_top lfst_inst genblk1 lfsr_data[26] data_reg", false,-1);
        tracep->declBus(c+681,"ascon_top lfst_inst genblk1 lfsr_data[26] i", false,-1, 31,0);
        tracep->declArray(c+243,"ascon_top lfst_inst genblk1 lfsr_data[27] mask", false,-1, 126,0);
        tracep->declBit(c+682,"ascon_top lfst_inst genblk1 lfsr_data[27] data_reg", false,-1);
        tracep->declBus(c+683,"ascon_top lfst_inst genblk1 lfsr_data[27] i", false,-1, 31,0);
        tracep->declArray(c+247,"ascon_top lfst_inst genblk1 lfsr_data[28] mask", false,-1, 126,0);
        tracep->declBit(c+684,"ascon_top lfst_inst genblk1 lfsr_data[28] data_reg", false,-1);
        tracep->declBus(c+685,"ascon_top lfst_inst genblk1 lfsr_data[28] i", false,-1, 31,0);
        tracep->declArray(c+251,"ascon_top lfst_inst genblk1 lfsr_data[29] mask", false,-1, 126,0);
        tracep->declBit(c+686,"ascon_top lfst_inst genblk1 lfsr_data[29] data_reg", false,-1);
        tracep->declBus(c+687,"ascon_top lfst_inst genblk1 lfsr_data[29] i", false,-1, 31,0);
        tracep->declArray(c+255,"ascon_top lfst_inst genblk1 lfsr_data[30] mask", false,-1, 126,0);
        tracep->declBit(c+688,"ascon_top lfst_inst genblk1 lfsr_data[30] data_reg", false,-1);
        tracep->declBus(c+689,"ascon_top lfst_inst genblk1 lfsr_data[30] i", false,-1, 31,0);
        tracep->declArray(c+259,"ascon_top lfst_inst genblk1 lfsr_data[31] mask", false,-1, 126,0);
        tracep->declBit(c+690,"ascon_top lfst_inst genblk1 lfsr_data[31] data_reg", false,-1);
        tracep->declBus(c+691,"ascon_top lfst_inst genblk1 lfsr_data[31] i", false,-1, 31,0);
        tracep->declArray(c+263,"ascon_top lfst_inst genblk1 lfsr_data[32] mask", false,-1, 126,0);
        tracep->declBit(c+692,"ascon_top lfst_inst genblk1 lfsr_data[32] data_reg", false,-1);
        tracep->declBus(c+693,"ascon_top lfst_inst genblk1 lfsr_data[32] i", false,-1, 31,0);
        tracep->declArray(c+267,"ascon_top lfst_inst genblk1 lfsr_data[33] mask", false,-1, 126,0);
        tracep->declBit(c+694,"ascon_top lfst_inst genblk1 lfsr_data[33] data_reg", false,-1);
        tracep->declBus(c+695,"ascon_top lfst_inst genblk1 lfsr_data[33] i", false,-1, 31,0);
        tracep->declArray(c+271,"ascon_top lfst_inst genblk1 lfsr_data[34] mask", false,-1, 126,0);
        tracep->declBit(c+696,"ascon_top lfst_inst genblk1 lfsr_data[34] data_reg", false,-1);
        tracep->declBus(c+697,"ascon_top lfst_inst genblk1 lfsr_data[34] i", false,-1, 31,0);
        tracep->declArray(c+275,"ascon_top lfst_inst genblk1 lfsr_data[35] mask", false,-1, 126,0);
        tracep->declBit(c+698,"ascon_top lfst_inst genblk1 lfsr_data[35] data_reg", false,-1);
        tracep->declBus(c+699,"ascon_top lfst_inst genblk1 lfsr_data[35] i", false,-1, 31,0);
        tracep->declArray(c+279,"ascon_top lfst_inst genblk1 lfsr_data[36] mask", false,-1, 126,0);
        tracep->declBit(c+700,"ascon_top lfst_inst genblk1 lfsr_data[36] data_reg", false,-1);
        tracep->declBus(c+701,"ascon_top lfst_inst genblk1 lfsr_data[36] i", false,-1, 31,0);
        tracep->declArray(c+283,"ascon_top lfst_inst genblk1 lfsr_data[37] mask", false,-1, 126,0);
        tracep->declBit(c+702,"ascon_top lfst_inst genblk1 lfsr_data[37] data_reg", false,-1);
        tracep->declBus(c+703,"ascon_top lfst_inst genblk1 lfsr_data[37] i", false,-1, 31,0);
        tracep->declArray(c+287,"ascon_top lfst_inst genblk1 lfsr_data[38] mask", false,-1, 126,0);
        tracep->declBit(c+704,"ascon_top lfst_inst genblk1 lfsr_data[38] data_reg", false,-1);
        tracep->declBus(c+705,"ascon_top lfst_inst genblk1 lfsr_data[38] i", false,-1, 31,0);
        tracep->declArray(c+291,"ascon_top lfst_inst genblk1 lfsr_data[39] mask", false,-1, 126,0);
        tracep->declBit(c+706,"ascon_top lfst_inst genblk1 lfsr_data[39] data_reg", false,-1);
        tracep->declBus(c+707,"ascon_top lfst_inst genblk1 lfsr_data[39] i", false,-1, 31,0);
        tracep->declArray(c+295,"ascon_top lfst_inst genblk1 lfsr_data[40] mask", false,-1, 126,0);
        tracep->declBit(c+708,"ascon_top lfst_inst genblk1 lfsr_data[40] data_reg", false,-1);
        tracep->declBus(c+709,"ascon_top lfst_inst genblk1 lfsr_data[40] i", false,-1, 31,0);
        tracep->declArray(c+299,"ascon_top lfst_inst genblk1 lfsr_data[41] mask", false,-1, 126,0);
        tracep->declBit(c+710,"ascon_top lfst_inst genblk1 lfsr_data[41] data_reg", false,-1);
        tracep->declBus(c+711,"ascon_top lfst_inst genblk1 lfsr_data[41] i", false,-1, 31,0);
        tracep->declArray(c+303,"ascon_top lfst_inst genblk1 lfsr_data[42] mask", false,-1, 126,0);
        tracep->declBit(c+712,"ascon_top lfst_inst genblk1 lfsr_data[42] data_reg", false,-1);
        tracep->declBus(c+713,"ascon_top lfst_inst genblk1 lfsr_data[42] i", false,-1, 31,0);
        tracep->declArray(c+307,"ascon_top lfst_inst genblk1 lfsr_data[43] mask", false,-1, 126,0);
        tracep->declBit(c+714,"ascon_top lfst_inst genblk1 lfsr_data[43] data_reg", false,-1);
        tracep->declBus(c+715,"ascon_top lfst_inst genblk1 lfsr_data[43] i", false,-1, 31,0);
        tracep->declArray(c+311,"ascon_top lfst_inst genblk1 lfsr_data[44] mask", false,-1, 126,0);
        tracep->declBit(c+716,"ascon_top lfst_inst genblk1 lfsr_data[44] data_reg", false,-1);
        tracep->declBus(c+717,"ascon_top lfst_inst genblk1 lfsr_data[44] i", false,-1, 31,0);
        tracep->declArray(c+315,"ascon_top lfst_inst genblk1 lfsr_data[45] mask", false,-1, 126,0);
        tracep->declBit(c+718,"ascon_top lfst_inst genblk1 lfsr_data[45] data_reg", false,-1);
        tracep->declBus(c+719,"ascon_top lfst_inst genblk1 lfsr_data[45] i", false,-1, 31,0);
        tracep->declArray(c+319,"ascon_top lfst_inst genblk1 lfsr_data[46] mask", false,-1, 126,0);
        tracep->declBit(c+720,"ascon_top lfst_inst genblk1 lfsr_data[46] data_reg", false,-1);
        tracep->declBus(c+721,"ascon_top lfst_inst genblk1 lfsr_data[46] i", false,-1, 31,0);
        tracep->declArray(c+323,"ascon_top lfst_inst genblk1 lfsr_data[47] mask", false,-1, 126,0);
        tracep->declBit(c+722,"ascon_top lfst_inst genblk1 lfsr_data[47] data_reg", false,-1);
        tracep->declBus(c+723,"ascon_top lfst_inst genblk1 lfsr_data[47] i", false,-1, 31,0);
        tracep->declArray(c+327,"ascon_top lfst_inst genblk1 lfsr_data[48] mask", false,-1, 126,0);
        tracep->declBit(c+724,"ascon_top lfst_inst genblk1 lfsr_data[48] data_reg", false,-1);
        tracep->declBus(c+725,"ascon_top lfst_inst genblk1 lfsr_data[48] i", false,-1, 31,0);
        tracep->declArray(c+331,"ascon_top lfst_inst genblk1 lfsr_data[49] mask", false,-1, 126,0);
        tracep->declBit(c+726,"ascon_top lfst_inst genblk1 lfsr_data[49] data_reg", false,-1);
        tracep->declBus(c+727,"ascon_top lfst_inst genblk1 lfsr_data[49] i", false,-1, 31,0);
        tracep->declArray(c+335,"ascon_top lfst_inst genblk1 lfsr_data[50] mask", false,-1, 126,0);
        tracep->declBit(c+728,"ascon_top lfst_inst genblk1 lfsr_data[50] data_reg", false,-1);
        tracep->declBus(c+729,"ascon_top lfst_inst genblk1 lfsr_data[50] i", false,-1, 31,0);
        tracep->declArray(c+339,"ascon_top lfst_inst genblk1 lfsr_data[51] mask", false,-1, 126,0);
        tracep->declBit(c+730,"ascon_top lfst_inst genblk1 lfsr_data[51] data_reg", false,-1);
        tracep->declBus(c+731,"ascon_top lfst_inst genblk1 lfsr_data[51] i", false,-1, 31,0);
        tracep->declArray(c+343,"ascon_top lfst_inst genblk1 lfsr_data[52] mask", false,-1, 126,0);
        tracep->declBit(c+732,"ascon_top lfst_inst genblk1 lfsr_data[52] data_reg", false,-1);
        tracep->declBus(c+733,"ascon_top lfst_inst genblk1 lfsr_data[52] i", false,-1, 31,0);
        tracep->declArray(c+347,"ascon_top lfst_inst genblk1 lfsr_data[53] mask", false,-1, 126,0);
        tracep->declBit(c+734,"ascon_top lfst_inst genblk1 lfsr_data[53] data_reg", false,-1);
        tracep->declBus(c+735,"ascon_top lfst_inst genblk1 lfsr_data[53] i", false,-1, 31,0);
        tracep->declArray(c+351,"ascon_top lfst_inst genblk1 lfsr_data[54] mask", false,-1, 126,0);
        tracep->declBit(c+736,"ascon_top lfst_inst genblk1 lfsr_data[54] data_reg", false,-1);
        tracep->declBus(c+737,"ascon_top lfst_inst genblk1 lfsr_data[54] i", false,-1, 31,0);
        tracep->declArray(c+355,"ascon_top lfst_inst genblk1 lfsr_data[55] mask", false,-1, 126,0);
        tracep->declBit(c+738,"ascon_top lfst_inst genblk1 lfsr_data[55] data_reg", false,-1);
        tracep->declBus(c+739,"ascon_top lfst_inst genblk1 lfsr_data[55] i", false,-1, 31,0);
        tracep->declArray(c+359,"ascon_top lfst_inst genblk1 lfsr_data[56] mask", false,-1, 126,0);
        tracep->declBit(c+740,"ascon_top lfst_inst genblk1 lfsr_data[56] data_reg", false,-1);
        tracep->declBus(c+741,"ascon_top lfst_inst genblk1 lfsr_data[56] i", false,-1, 31,0);
        tracep->declArray(c+363,"ascon_top lfst_inst genblk1 lfsr_data[57] mask", false,-1, 126,0);
        tracep->declBit(c+742,"ascon_top lfst_inst genblk1 lfsr_data[57] data_reg", false,-1);
        tracep->declBus(c+743,"ascon_top lfst_inst genblk1 lfsr_data[57] i", false,-1, 31,0);
        tracep->declArray(c+367,"ascon_top lfst_inst genblk1 lfsr_data[58] mask", false,-1, 126,0);
        tracep->declBit(c+744,"ascon_top lfst_inst genblk1 lfsr_data[58] data_reg", false,-1);
        tracep->declBus(c+745,"ascon_top lfst_inst genblk1 lfsr_data[58] i", false,-1, 31,0);
        tracep->declArray(c+371,"ascon_top lfst_inst genblk1 lfsr_data[59] mask", false,-1, 126,0);
        tracep->declBit(c+746,"ascon_top lfst_inst genblk1 lfsr_data[59] data_reg", false,-1);
        tracep->declBus(c+747,"ascon_top lfst_inst genblk1 lfsr_data[59] i", false,-1, 31,0);
        tracep->declArray(c+375,"ascon_top lfst_inst genblk1 lfsr_data[60] mask", false,-1, 126,0);
        tracep->declBit(c+748,"ascon_top lfst_inst genblk1 lfsr_data[60] data_reg", false,-1);
        tracep->declBus(c+749,"ascon_top lfst_inst genblk1 lfsr_data[60] i", false,-1, 31,0);
        tracep->declArray(c+379,"ascon_top lfst_inst genblk1 lfsr_data[61] mask", false,-1, 126,0);
        tracep->declBit(c+750,"ascon_top lfst_inst genblk1 lfsr_data[61] data_reg", false,-1);
        tracep->declBus(c+751,"ascon_top lfst_inst genblk1 lfsr_data[61] i", false,-1, 31,0);
        tracep->declArray(c+383,"ascon_top lfst_inst genblk1 lfsr_data[62] mask", false,-1, 126,0);
        tracep->declBit(c+752,"ascon_top lfst_inst genblk1 lfsr_data[62] data_reg", false,-1);
        tracep->declBus(c+753,"ascon_top lfst_inst genblk1 lfsr_data[62] i", false,-1, 31,0);
        tracep->declArray(c+387,"ascon_top lfst_inst genblk1 lfsr_data[63] mask", false,-1, 126,0);
        tracep->declBit(c+754,"ascon_top lfst_inst genblk1 lfsr_data[63] data_reg", false,-1);
        tracep->declBus(c+755,"ascon_top lfst_inst genblk1 lfsr_data[63] i", false,-1, 31,0);
        tracep->declArray(c+391,"ascon_top lfst_inst genblk1 lfsr_data[64] mask", false,-1, 126,0);
        tracep->declBit(c+756,"ascon_top lfst_inst genblk1 lfsr_data[64] data_reg", false,-1);
        tracep->declBus(c+757,"ascon_top lfst_inst genblk1 lfsr_data[64] i", false,-1, 31,0);
        tracep->declArray(c+395,"ascon_top lfst_inst genblk1 lfsr_data[65] mask", false,-1, 126,0);
        tracep->declBit(c+758,"ascon_top lfst_inst genblk1 lfsr_data[65] data_reg", false,-1);
        tracep->declBus(c+759,"ascon_top lfst_inst genblk1 lfsr_data[65] i", false,-1, 31,0);
        tracep->declArray(c+399,"ascon_top lfst_inst genblk1 lfsr_data[66] mask", false,-1, 126,0);
        tracep->declBit(c+760,"ascon_top lfst_inst genblk1 lfsr_data[66] data_reg", false,-1);
        tracep->declBus(c+761,"ascon_top lfst_inst genblk1 lfsr_data[66] i", false,-1, 31,0);
        tracep->declArray(c+403,"ascon_top lfst_inst genblk1 lfsr_data[67] mask", false,-1, 126,0);
        tracep->declBit(c+762,"ascon_top lfst_inst genblk1 lfsr_data[67] data_reg", false,-1);
        tracep->declBus(c+763,"ascon_top lfst_inst genblk1 lfsr_data[67] i", false,-1, 31,0);
        tracep->declArray(c+407,"ascon_top lfst_inst genblk1 lfsr_data[68] mask", false,-1, 126,0);
        tracep->declBit(c+764,"ascon_top lfst_inst genblk1 lfsr_data[68] data_reg", false,-1);
        tracep->declBus(c+765,"ascon_top lfst_inst genblk1 lfsr_data[68] i", false,-1, 31,0);
        tracep->declArray(c+411,"ascon_top lfst_inst genblk1 lfsr_data[69] mask", false,-1, 126,0);
        tracep->declBit(c+766,"ascon_top lfst_inst genblk1 lfsr_data[69] data_reg", false,-1);
        tracep->declBus(c+767,"ascon_top lfst_inst genblk1 lfsr_data[69] i", false,-1, 31,0);
        tracep->declArray(c+415,"ascon_top lfst_inst genblk1 lfsr_data[70] mask", false,-1, 126,0);
        tracep->declBit(c+768,"ascon_top lfst_inst genblk1 lfsr_data[70] data_reg", false,-1);
        tracep->declBus(c+769,"ascon_top lfst_inst genblk1 lfsr_data[70] i", false,-1, 31,0);
        tracep->declArray(c+419,"ascon_top lfst_inst genblk1 lfsr_data[71] mask", false,-1, 126,0);
        tracep->declBit(c+770,"ascon_top lfst_inst genblk1 lfsr_data[71] data_reg", false,-1);
        tracep->declBus(c+771,"ascon_top lfst_inst genblk1 lfsr_data[71] i", false,-1, 31,0);
        tracep->declArray(c+423,"ascon_top lfst_inst genblk1 lfsr_data[72] mask", false,-1, 126,0);
        tracep->declBit(c+772,"ascon_top lfst_inst genblk1 lfsr_data[72] data_reg", false,-1);
        tracep->declBus(c+773,"ascon_top lfst_inst genblk1 lfsr_data[72] i", false,-1, 31,0);
        tracep->declArray(c+427,"ascon_top lfst_inst genblk1 lfsr_data[73] mask", false,-1, 126,0);
        tracep->declBit(c+774,"ascon_top lfst_inst genblk1 lfsr_data[73] data_reg", false,-1);
        tracep->declBus(c+775,"ascon_top lfst_inst genblk1 lfsr_data[73] i", false,-1, 31,0);
        tracep->declArray(c+431,"ascon_top lfst_inst genblk1 lfsr_data[74] mask", false,-1, 126,0);
        tracep->declBit(c+776,"ascon_top lfst_inst genblk1 lfsr_data[74] data_reg", false,-1);
        tracep->declBus(c+777,"ascon_top lfst_inst genblk1 lfsr_data[74] i", false,-1, 31,0);
        tracep->declArray(c+435,"ascon_top lfst_inst genblk1 lfsr_data[75] mask", false,-1, 126,0);
        tracep->declBit(c+778,"ascon_top lfst_inst genblk1 lfsr_data[75] data_reg", false,-1);
        tracep->declBus(c+779,"ascon_top lfst_inst genblk1 lfsr_data[75] i", false,-1, 31,0);
        tracep->declArray(c+439,"ascon_top lfst_inst genblk1 lfsr_data[76] mask", false,-1, 126,0);
        tracep->declBit(c+780,"ascon_top lfst_inst genblk1 lfsr_data[76] data_reg", false,-1);
        tracep->declBus(c+781,"ascon_top lfst_inst genblk1 lfsr_data[76] i", false,-1, 31,0);
        tracep->declArray(c+443,"ascon_top lfst_inst genblk1 lfsr_data[77] mask", false,-1, 126,0);
        tracep->declBit(c+782,"ascon_top lfst_inst genblk1 lfsr_data[77] data_reg", false,-1);
        tracep->declBus(c+783,"ascon_top lfst_inst genblk1 lfsr_data[77] i", false,-1, 31,0);
        tracep->declArray(c+447,"ascon_top lfst_inst genblk1 lfsr_data[78] mask", false,-1, 126,0);
        tracep->declBit(c+784,"ascon_top lfst_inst genblk1 lfsr_data[78] data_reg", false,-1);
        tracep->declBus(c+785,"ascon_top lfst_inst genblk1 lfsr_data[78] i", false,-1, 31,0);
        tracep->declArray(c+451,"ascon_top lfst_inst genblk1 lfsr_data[79] mask", false,-1, 126,0);
        tracep->declBit(c+786,"ascon_top lfst_inst genblk1 lfsr_data[79] data_reg", false,-1);
        tracep->declBus(c+787,"ascon_top lfst_inst genblk1 lfsr_data[79] i", false,-1, 31,0);
        tracep->declArray(c+455,"ascon_top lfst_inst genblk1 lfsr_data[80] mask", false,-1, 126,0);
        tracep->declBit(c+788,"ascon_top lfst_inst genblk1 lfsr_data[80] data_reg", false,-1);
        tracep->declBus(c+789,"ascon_top lfst_inst genblk1 lfsr_data[80] i", false,-1, 31,0);
        tracep->declArray(c+459,"ascon_top lfst_inst genblk1 lfsr_data[81] mask", false,-1, 126,0);
        tracep->declBit(c+790,"ascon_top lfst_inst genblk1 lfsr_data[81] data_reg", false,-1);
        tracep->declBus(c+791,"ascon_top lfst_inst genblk1 lfsr_data[81] i", false,-1, 31,0);
        tracep->declArray(c+463,"ascon_top lfst_inst genblk1 lfsr_data[82] mask", false,-1, 126,0);
        tracep->declBit(c+792,"ascon_top lfst_inst genblk1 lfsr_data[82] data_reg", false,-1);
        tracep->declBus(c+793,"ascon_top lfst_inst genblk1 lfsr_data[82] i", false,-1, 31,0);
        tracep->declArray(c+467,"ascon_top lfst_inst genblk1 lfsr_data[83] mask", false,-1, 126,0);
        tracep->declBit(c+794,"ascon_top lfst_inst genblk1 lfsr_data[83] data_reg", false,-1);
        tracep->declBus(c+795,"ascon_top lfst_inst genblk1 lfsr_data[83] i", false,-1, 31,0);
        tracep->declArray(c+471,"ascon_top lfst_inst genblk1 lfsr_data[84] mask", false,-1, 126,0);
        tracep->declBit(c+796,"ascon_top lfst_inst genblk1 lfsr_data[84] data_reg", false,-1);
        tracep->declBus(c+797,"ascon_top lfst_inst genblk1 lfsr_data[84] i", false,-1, 31,0);
        tracep->declArray(c+475,"ascon_top lfst_inst genblk1 lfsr_data[85] mask", false,-1, 126,0);
        tracep->declBit(c+798,"ascon_top lfst_inst genblk1 lfsr_data[85] data_reg", false,-1);
        tracep->declBus(c+799,"ascon_top lfst_inst genblk1 lfsr_data[85] i", false,-1, 31,0);
        tracep->declArray(c+479,"ascon_top lfst_inst genblk1 lfsr_data[86] mask", false,-1, 126,0);
        tracep->declBit(c+800,"ascon_top lfst_inst genblk1 lfsr_data[86] data_reg", false,-1);
        tracep->declBus(c+801,"ascon_top lfst_inst genblk1 lfsr_data[86] i", false,-1, 31,0);
        tracep->declArray(c+483,"ascon_top lfst_inst genblk1 lfsr_data[87] mask", false,-1, 126,0);
        tracep->declBit(c+802,"ascon_top lfst_inst genblk1 lfsr_data[87] data_reg", false,-1);
        tracep->declBus(c+803,"ascon_top lfst_inst genblk1 lfsr_data[87] i", false,-1, 31,0);
        tracep->declArray(c+487,"ascon_top lfst_inst genblk1 lfsr_data[88] mask", false,-1, 126,0);
        tracep->declBit(c+804,"ascon_top lfst_inst genblk1 lfsr_data[88] data_reg", false,-1);
        tracep->declBus(c+805,"ascon_top lfst_inst genblk1 lfsr_data[88] i", false,-1, 31,0);
        tracep->declArray(c+491,"ascon_top lfst_inst genblk1 lfsr_data[89] mask", false,-1, 126,0);
        tracep->declBit(c+806,"ascon_top lfst_inst genblk1 lfsr_data[89] data_reg", false,-1);
        tracep->declBus(c+807,"ascon_top lfst_inst genblk1 lfsr_data[89] i", false,-1, 31,0);
        tracep->declArray(c+495,"ascon_top lfst_inst genblk1 lfsr_data[90] mask", false,-1, 126,0);
        tracep->declBit(c+808,"ascon_top lfst_inst genblk1 lfsr_data[90] data_reg", false,-1);
        tracep->declBus(c+809,"ascon_top lfst_inst genblk1 lfsr_data[90] i", false,-1, 31,0);
        tracep->declArray(c+499,"ascon_top lfst_inst genblk1 lfsr_data[91] mask", false,-1, 126,0);
        tracep->declBit(c+810,"ascon_top lfst_inst genblk1 lfsr_data[91] data_reg", false,-1);
        tracep->declBus(c+811,"ascon_top lfst_inst genblk1 lfsr_data[91] i", false,-1, 31,0);
        tracep->declArray(c+503,"ascon_top lfst_inst genblk1 lfsr_data[92] mask", false,-1, 126,0);
        tracep->declBit(c+812,"ascon_top lfst_inst genblk1 lfsr_data[92] data_reg", false,-1);
        tracep->declBus(c+813,"ascon_top lfst_inst genblk1 lfsr_data[92] i", false,-1, 31,0);
        tracep->declArray(c+507,"ascon_top lfst_inst genblk1 lfsr_data[93] mask", false,-1, 126,0);
        tracep->declBit(c+814,"ascon_top lfst_inst genblk1 lfsr_data[93] data_reg", false,-1);
        tracep->declBus(c+815,"ascon_top lfst_inst genblk1 lfsr_data[93] i", false,-1, 31,0);
        tracep->declArray(c+511,"ascon_top lfst_inst genblk1 lfsr_data[94] mask", false,-1, 126,0);
        tracep->declBit(c+816,"ascon_top lfst_inst genblk1 lfsr_data[94] data_reg", false,-1);
        tracep->declBus(c+817,"ascon_top lfst_inst genblk1 lfsr_data[94] i", false,-1, 31,0);
        tracep->declArray(c+515,"ascon_top lfst_inst genblk1 lfsr_data[95] mask", false,-1, 126,0);
        tracep->declBit(c+818,"ascon_top lfst_inst genblk1 lfsr_data[95] data_reg", false,-1);
        tracep->declBus(c+819,"ascon_top lfst_inst genblk1 lfsr_data[95] i", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top mealy_fsm clk", false,-1);
        tracep->declBit(c+1420,"ascon_top mealy_fsm reset_n", false,-1);
        tracep->declBit(c+1421,"ascon_top mealy_fsm start", false,-1);
        tracep->declBit(c+1426,"ascon_top mealy_fsm key_valid", false,-1);
        tracep->declBit(c+1437,"ascon_top mealy_fsm valid_data_in", false,-1);
        tracep->declBit(c+1438,"ascon_top mealy_fsm last_block", false,-1);
        tracep->declBus(c+1439,"ascon_top mealy_fsm valid_bytes", false,-1, 4,0);
        tracep->declBit(c+1440,"ascon_top mealy_fsm EOT", false,-1);
        tracep->declBit(c+1456,"ascon_top mealy_fsm done", false,-1);
        tracep->declBit(c+1457,"ascon_top mealy_fsm tag_valid", false,-1);
        tracep->declBit(c+529,"ascon_top mealy_fsm shift_en", false,-1);
        tracep->declBit(c+1112,"ascon_top mealy_fsm write_en", false,-1);
        tracep->declBit(c+530,"ascon_top mealy_fsm shift_type", false,-1);
        tracep->declBit(c+531,"ascon_top mealy_fsm last_cycle", false,-1);
        tracep->declBit(c+532,"ascon_top mealy_fsm reg_key1_load", false,-1);
        tracep->declBit(c+533,"ascon_top mealy_fsm reg_key2_load", false,-1);
        tracep->declBit(c+534,"ascon_top mealy_fsm sel_mux_linear_diffusion_out_x3", false,-1);
        tracep->declBit(c+1113,"ascon_top mealy_fsm sel_mux_linear_diffusion_out_x4", false,-1);
        tracep->declBit(c+1114,"ascon_top mealy_fsm sel_init_load", false,-1);
        tracep->declBit(c+535,"ascon_top mealy_fsm sel_masked_round", false,-1);
        tracep->declBit(c+1115,"ascon_top mealy_fsm sel_padding", false,-1);
        tracep->declBit(c+536,"ascon_top mealy_fsm sel_xor_signal", false,-1);
        tracep->declBit(c+1116,"ascon_top mealy_fsm sel_absorb_data", false,-1);
        tracep->declBit(c+1451,"ascon_top mealy_fsm ciphertext_valid", false,-1);
        tracep->declBit(c+1462,"ascon_top mealy_fsm ready_for_data", false,-1);
        tracep->declBit(c+1463,"ascon_top mealy_fsm read_data", false,-1);
        tracep->declBit(c+528,"ascon_top mealy_fsm extra_padding_ff", false,-1);
        tracep->declBus(c+540,"ascon_top mealy_fsm bit_counter", false,-1, 3,0);
        tracep->declBus(c+539,"ascon_top mealy_fsm round_counter", false,-1, 3,0);
        tracep->declBus(c+1467,"ascon_top mealy_fsm debug_state", false,-1, 4,0);
        tracep->declBit(c+537,"ascon_top mealy_fsm shift_enable_sipo", false,-1);
        tracep->declBit(c+538,"ascon_top mealy_fsm last_cycle_sipo", false,-1);
        tracep->declBit(c+1136,"ascon_top mealy_fsm extra_padding", false,-1);
        tracep->declBus(c+820,"ascon_top mealy_fsm current_state", false,-1, 4,0);
        tracep->declBus(c+1137,"ascon_top mealy_fsm next_state", false,-1, 4,0);
        tracep->declBus(c+821,"ascon_top mealy_fsm number_bits", false,-1, 3,0);
        tracep->declBus(c+822,"ascon_top mealy_fsm number_round", false,-1, 3,0);
        tracep->declBit(c+1138,"ascon_top mealy_fsm last_block_process", false,-1);
        tracep->declBit(c+823,"ascon_top mealy_fsm last_block_process_ff", false,-1);
        tracep->declBit(c+1139,"ascon_top mealy_fsm last_block_process_load", false,-1);
        tracep->declBit(c+1140,"ascon_top mealy_fsm extra_padding_load", false,-1);
        tracep->declBit(c+824,"ascon_top mealy_fsm round_counter_enable", false,-1);
        tracep->declBit(c+1141,"ascon_top mealy_fsm rst_counter_round", false,-1);
        tracep->declBus(c+1514,"ascon_top mealy_fsm BYTE_W", false,-1, 31,0);
        tracep->declBus(c+1515,"ascon_top mealy_fsm unnamedblk1 BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+1516,"ascon_top mealy_fsm unnamedblk1 BIT_COUNTER_MAX", false,-1, 3,0);
        tracep->declBus(c+1515,"ascon_top mealy_fsm unnamedblk2 BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+1516,"ascon_top mealy_fsm unnamedblk2 BIT_COUNTER_MAX", false,-1, 3,0);
        tracep->declBit(c+1419,"ascon_top state_reg clk", false,-1);
        tracep->declBit(c+1112,"ascon_top state_reg write_en", false,-1);
        tracep->declBit(c+529,"ascon_top state_reg shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top state_reg shift_type", false,-1);
        tracep->declBit(c+531,"ascon_top state_reg last_cycle", false,-1);
        tracep->declArray(c+1117,"ascon_top state_reg data_in", false,-1, 319,0);
        tracep->declArray(c+1152,"ascon_top state_reg in_shifted_dplus1", false,-1, 119,0);
        tracep->declBus(c+1156,"ascon_top state_reg in_shifted_1bit", false,-1, 29,0);
        tracep->declArray(c+837,"ascon_top state_reg out_shifted_dplus1", false,-1, 119,0);
        tracep->declArray(c+1441,"ascon_top state_reg data_out", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+883+i*2,"ascon_top state_reg state", true,(i+0), 63,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1142+i*2,"ascon_top state_reg next_state", true,(i+0), 63,0);}}
        tracep->declBus(c+1517,"ascon_top state_reg gen_case1 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+893,"ascon_top state_reg unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top state_reg gen_caseNoPArMAx unnamedblk4 i", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top key1_reg clk", false,-1);
        tracep->declBit(c+1420,"ascon_top key1_reg reset_n", false,-1);
        tracep->declBit(c+532,"ascon_top key1_reg load", false,-1);
        tracep->declQuad(c+1422,"ascon_top key1_reg data_in", false,-1, 63,0);
        tracep->declQuad(c+541,"ascon_top key1_reg data_out", false,-1, 63,0);
        tracep->declQuad(c+541,"ascon_top key1_reg reg_q", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top key2_reg clk", false,-1);
        tracep->declBit(c+1420,"ascon_top key2_reg reset_n", false,-1);
        tracep->declBit(c+533,"ascon_top key2_reg load", false,-1);
        tracep->declQuad(c+1424,"ascon_top key2_reg data_in", false,-1, 63,0);
        tracep->declQuad(c+543,"ascon_top key2_reg data_out", false,-1, 63,0);
        tracep->declQuad(c+543,"ascon_top key2_reg reg_q", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top sipo_reg_x0_debug clk", false,-1);
        tracep->declBit(c+1420,"ascon_top sipo_reg_x0_debug reset_n", false,-1);
        tracep->declBit(c+537,"ascon_top sipo_reg_x0_debug shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top sipo_reg_x0_debug shift_type", false,-1);
        tracep->declBit(c+538,"ascon_top sipo_reg_x0_debug last_cycle", false,-1);
        tracep->declBus(c+846,"ascon_top sipo_reg_x0_debug in_shifted_dplus1", false,-1, 23,0);
        tracep->declBus(c+894,"ascon_top sipo_reg_x0_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+545,"ascon_top sipo_reg_x0_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+545,"ascon_top sipo_reg_x0_debug state", false,-1, 63,0);
        tracep->declQuad(c+1227,"ascon_top sipo_reg_x0_debug next_state", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top sipo_reg_x1_debug clk", false,-1);
        tracep->declBit(c+1420,"ascon_top sipo_reg_x1_debug reset_n", false,-1);
        tracep->declBit(c+537,"ascon_top sipo_reg_x1_debug shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top sipo_reg_x1_debug shift_type", false,-1);
        tracep->declBit(c+538,"ascon_top sipo_reg_x1_debug last_cycle", false,-1);
        tracep->declBus(c+847,"ascon_top sipo_reg_x1_debug in_shifted_dplus1", false,-1, 23,0);
        tracep->declBus(c+895,"ascon_top sipo_reg_x1_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+547,"ascon_top sipo_reg_x1_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+547,"ascon_top sipo_reg_x1_debug state", false,-1, 63,0);
        tracep->declQuad(c+1229,"ascon_top sipo_reg_x1_debug next_state", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top sipo_reg_x2_debug clk", false,-1);
        tracep->declBit(c+1420,"ascon_top sipo_reg_x2_debug reset_n", false,-1);
        tracep->declBit(c+537,"ascon_top sipo_reg_x2_debug shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top sipo_reg_x2_debug shift_type", false,-1);
        tracep->declBit(c+538,"ascon_top sipo_reg_x2_debug last_cycle", false,-1);
        tracep->declBus(c+1157,"ascon_top sipo_reg_x2_debug in_shifted_dplus1", false,-1, 23,0);
        tracep->declBus(c+1231,"ascon_top sipo_reg_x2_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+549,"ascon_top sipo_reg_x2_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+549,"ascon_top sipo_reg_x2_debug state", false,-1, 63,0);
        tracep->declQuad(c+1232,"ascon_top sipo_reg_x2_debug next_state", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top sipo_reg_x3_debug clk", false,-1);
        tracep->declBit(c+1420,"ascon_top sipo_reg_x3_debug reset_n", false,-1);
        tracep->declBit(c+537,"ascon_top sipo_reg_x3_debug shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top sipo_reg_x3_debug shift_type", false,-1);
        tracep->declBit(c+538,"ascon_top sipo_reg_x3_debug last_cycle", false,-1);
        tracep->declBus(c+848,"ascon_top sipo_reg_x3_debug in_shifted_dplus1", false,-1, 23,0);
        tracep->declBus(c+896,"ascon_top sipo_reg_x3_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+551,"ascon_top sipo_reg_x3_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+551,"ascon_top sipo_reg_x3_debug state", false,-1, 63,0);
        tracep->declQuad(c+1234,"ascon_top sipo_reg_x3_debug next_state", false,-1, 63,0);
        tracep->declBit(c+1419,"ascon_top sipo_reg_x4_debug clk", false,-1);
        tracep->declBit(c+1420,"ascon_top sipo_reg_x4_debug reset_n", false,-1);
        tracep->declBit(c+537,"ascon_top sipo_reg_x4_debug shift_en", false,-1);
        tracep->declBit(c+530,"ascon_top sipo_reg_x4_debug shift_type", false,-1);
        tracep->declBit(c+538,"ascon_top sipo_reg_x4_debug last_cycle", false,-1);
        tracep->declBus(c+849,"ascon_top sipo_reg_x4_debug in_shifted_dplus1", false,-1, 23,0);
        tracep->declBus(c+897,"ascon_top sipo_reg_x4_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+553,"ascon_top sipo_reg_x4_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+553,"ascon_top sipo_reg_x4_debug state", false,-1, 63,0);
        tracep->declQuad(c+1236,"ascon_top sipo_reg_x4_debug next_state", false,-1, 63,0);
        tracep->declBus(c+1492,"ascon_top share_creator data_in", false,-1, 29,0);
        tracep->declArray(c+524,"ascon_top share_creator random_masks", false,-1, 89,0);
        tracep->declArray(c+1158,"ascon_top share_creator shares_out", false,-1, 119,0);
        tracep->declBus(c+1238,"ascon_top share_creator temp", false,-1, 29,0);
        tracep->declBus(c+1518,"ascon_top share_creator unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top gen_unsupported gen_sbox[0] u_sbox clk", false,-1);
        tracep->declBus(c+898,"ascon_top gen_unsupported gen_sbox[0] u_sbox x_in", false,-1, 19,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[0] u_sbox fresh_r", false,-1, 5,0);
        tracep->declBit(c+535,"ascon_top gen_unsupported gen_sbox[0] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+899,"ascon_top gen_unsupported gen_sbox[0] u_sbox x_out", false,-1, 19,0);
        tracep->declBus(c+1239,"ascon_top gen_unsupported gen_sbox[0] u_sbox x_out_noMask", false,-1, 19,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+900+i*1,"ascon_top gen_unsupported gen_sbox[0] u_sbox x", true,(i+0), 3,0);}}
        tracep->declBus(c+1240,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1241,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1242,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1243,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1244,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1245,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1246,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1247,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1248,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1249,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1250,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1251,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1252,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1253,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1254,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1255,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1256,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1257,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1258,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1259,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(3)", false,-1, 3,0);
        tracep->declBus(c+905,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(0)", false,-1, 3,0);
        tracep->declBus(c+906,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(1)", false,-1, 3,0);
        tracep->declBus(c+907,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(2)", false,-1, 3,0);
        tracep->declBus(c+908,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(3)", false,-1, 3,0);
        tracep->declBus(c+909,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(0)", false,-1, 3,0);
        tracep->declBus(c+910,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(1)", false,-1, 3,0);
        tracep->declBus(c+911,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(2)", false,-1, 3,0);
        tracep->declBus(c+912,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(3)", false,-1, 3,0);
        tracep->declBus(c+913,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(0)", false,-1, 3,0);
        tracep->declBus(c+914,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(1)", false,-1, 3,0);
        tracep->declBus(c+915,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(2)", false,-1, 3,0);
        tracep->declBus(c+916,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(3)", false,-1, 3,0);
        tracep->declBus(c+917,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(0)", false,-1, 3,0);
        tracep->declBus(c+918,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(1)", false,-1, 3,0);
        tracep->declBus(c+919,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(2)", false,-1, 3,0);
        tracep->declBus(c+920,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(3)", false,-1, 3,0);
        tracep->declBus(c+921,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(0)", false,-1, 3,0);
        tracep->declBus(c+922,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(1)", false,-1, 3,0);
        tracep->declBus(c+923,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(2)", false,-1, 3,0);
        tracep->declBus(c+924,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(3)", false,-1, 3,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+925+i*1,"ascon_top gen_unsupported gen_sbox[0] u_sbox y", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1260+i*1,"ascon_top gen_unsupported gen_sbox[0] u_sbox y_noMask", true,(i+0), 3,0);}}
        tracep->declBus(c+1519,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1265,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 3,0);
        tracep->declBus(c+1266,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 3,0);
        tracep->declBus(c+1267,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 3,0);
        tracep->declBus(c+1268,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+930,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+931,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top gen_unsupported gen_sbox[1] u_sbox clk", false,-1);
        tracep->declBus(c+932,"ascon_top gen_unsupported gen_sbox[1] u_sbox x_in", false,-1, 19,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[1] u_sbox fresh_r", false,-1, 5,0);
        tracep->declBit(c+535,"ascon_top gen_unsupported gen_sbox[1] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+933,"ascon_top gen_unsupported gen_sbox[1] u_sbox x_out", false,-1, 19,0);
        tracep->declBus(c+1269,"ascon_top gen_unsupported gen_sbox[1] u_sbox x_out_noMask", false,-1, 19,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+934+i*1,"ascon_top gen_unsupported gen_sbox[1] u_sbox x", true,(i+0), 3,0);}}
        tracep->declBus(c+1270,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1271,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1272,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1273,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1274,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1275,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1276,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1277,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1278,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1279,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1280,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1281,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1282,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1283,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1284,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1285,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1286,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1287,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1288,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1289,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(3)", false,-1, 3,0);
        tracep->declBus(c+939,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(0)", false,-1, 3,0);
        tracep->declBus(c+940,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(1)", false,-1, 3,0);
        tracep->declBus(c+941,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(2)", false,-1, 3,0);
        tracep->declBus(c+942,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(3)", false,-1, 3,0);
        tracep->declBus(c+943,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(0)", false,-1, 3,0);
        tracep->declBus(c+944,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(1)", false,-1, 3,0);
        tracep->declBus(c+945,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(2)", false,-1, 3,0);
        tracep->declBus(c+946,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(3)", false,-1, 3,0);
        tracep->declBus(c+947,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(0)", false,-1, 3,0);
        tracep->declBus(c+948,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(1)", false,-1, 3,0);
        tracep->declBus(c+949,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(2)", false,-1, 3,0);
        tracep->declBus(c+950,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(3)", false,-1, 3,0);
        tracep->declBus(c+951,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(0)", false,-1, 3,0);
        tracep->declBus(c+952,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(1)", false,-1, 3,0);
        tracep->declBus(c+953,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(2)", false,-1, 3,0);
        tracep->declBus(c+954,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(3)", false,-1, 3,0);
        tracep->declBus(c+955,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(0)", false,-1, 3,0);
        tracep->declBus(c+956,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(1)", false,-1, 3,0);
        tracep->declBus(c+957,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(2)", false,-1, 3,0);
        tracep->declBus(c+958,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(3)", false,-1, 3,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+959+i*1,"ascon_top gen_unsupported gen_sbox[1] u_sbox y", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1290+i*1,"ascon_top gen_unsupported gen_sbox[1] u_sbox y_noMask", true,(i+0), 3,0);}}
        tracep->declBus(c+1519,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1295,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 3,0);
        tracep->declBus(c+1296,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 3,0);
        tracep->declBus(c+1297,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 3,0);
        tracep->declBus(c+1298,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+964,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+965,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top gen_unsupported gen_sbox[2] u_sbox clk", false,-1);
        tracep->declBus(c+966,"ascon_top gen_unsupported gen_sbox[2] u_sbox x_in", false,-1, 19,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[2] u_sbox fresh_r", false,-1, 5,0);
        tracep->declBit(c+535,"ascon_top gen_unsupported gen_sbox[2] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+967,"ascon_top gen_unsupported gen_sbox[2] u_sbox x_out", false,-1, 19,0);
        tracep->declBus(c+1299,"ascon_top gen_unsupported gen_sbox[2] u_sbox x_out_noMask", false,-1, 19,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+968+i*1,"ascon_top gen_unsupported gen_sbox[2] u_sbox x", true,(i+0), 3,0);}}
        tracep->declBus(c+1300,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1301,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1302,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1303,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1304,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1305,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1306,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1307,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1308,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1309,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1310,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1311,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1312,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1313,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1314,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1315,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1316,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1317,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1318,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1319,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(3)", false,-1, 3,0);
        tracep->declBus(c+973,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(0)", false,-1, 3,0);
        tracep->declBus(c+974,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(1)", false,-1, 3,0);
        tracep->declBus(c+975,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(2)", false,-1, 3,0);
        tracep->declBus(c+976,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(3)", false,-1, 3,0);
        tracep->declBus(c+977,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(0)", false,-1, 3,0);
        tracep->declBus(c+978,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(1)", false,-1, 3,0);
        tracep->declBus(c+979,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(2)", false,-1, 3,0);
        tracep->declBus(c+980,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(3)", false,-1, 3,0);
        tracep->declBus(c+981,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(0)", false,-1, 3,0);
        tracep->declBus(c+982,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(1)", false,-1, 3,0);
        tracep->declBus(c+983,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(2)", false,-1, 3,0);
        tracep->declBus(c+984,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(3)", false,-1, 3,0);
        tracep->declBus(c+985,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(0)", false,-1, 3,0);
        tracep->declBus(c+986,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(1)", false,-1, 3,0);
        tracep->declBus(c+987,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(2)", false,-1, 3,0);
        tracep->declBus(c+988,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(3)", false,-1, 3,0);
        tracep->declBus(c+989,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(0)", false,-1, 3,0);
        tracep->declBus(c+990,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(1)", false,-1, 3,0);
        tracep->declBus(c+991,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(2)", false,-1, 3,0);
        tracep->declBus(c+992,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(3)", false,-1, 3,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+993+i*1,"ascon_top gen_unsupported gen_sbox[2] u_sbox y", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1320+i*1,"ascon_top gen_unsupported gen_sbox[2] u_sbox y_noMask", true,(i+0), 3,0);}}
        tracep->declBus(c+1519,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1325,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 3,0);
        tracep->declBus(c+1326,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 3,0);
        tracep->declBus(c+1327,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 3,0);
        tracep->declBus(c+1328,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+998,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+999,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top gen_unsupported gen_sbox[3] u_sbox clk", false,-1);
        tracep->declBus(c+1000,"ascon_top gen_unsupported gen_sbox[3] u_sbox x_in", false,-1, 19,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[3] u_sbox fresh_r", false,-1, 5,0);
        tracep->declBit(c+535,"ascon_top gen_unsupported gen_sbox[3] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+1001,"ascon_top gen_unsupported gen_sbox[3] u_sbox x_out", false,-1, 19,0);
        tracep->declBus(c+1329,"ascon_top gen_unsupported gen_sbox[3] u_sbox x_out_noMask", false,-1, 19,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1002+i*1,"ascon_top gen_unsupported gen_sbox[3] u_sbox x", true,(i+0), 3,0);}}
        tracep->declBus(c+1330,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1331,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1332,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1333,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1334,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1335,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1336,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1337,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1338,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1339,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1340,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1341,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1342,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1343,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1344,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1345,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1346,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1347,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1348,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1349,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(3)", false,-1, 3,0);
        tracep->declBus(c+1007,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1008,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1009,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1010,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1011,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1012,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1013,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1014,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1015,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1016,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1017,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1018,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1019,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1020,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1021,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1022,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1023,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1024,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1025,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1026,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(3)", false,-1, 3,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1027+i*1,"ascon_top gen_unsupported gen_sbox[3] u_sbox y", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1350+i*1,"ascon_top gen_unsupported gen_sbox[3] u_sbox y_noMask", true,(i+0), 3,0);}}
        tracep->declBus(c+1519,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1355,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 3,0);
        tracep->declBus(c+1356,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 3,0);
        tracep->declBus(c+1357,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 3,0);
        tracep->declBus(c+1358,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+1032,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+1033,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top gen_unsupported gen_sbox[4] u_sbox clk", false,-1);
        tracep->declBus(c+1034,"ascon_top gen_unsupported gen_sbox[4] u_sbox x_in", false,-1, 19,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[4] u_sbox fresh_r", false,-1, 5,0);
        tracep->declBit(c+535,"ascon_top gen_unsupported gen_sbox[4] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+1035,"ascon_top gen_unsupported gen_sbox[4] u_sbox x_out", false,-1, 19,0);
        tracep->declBus(c+1359,"ascon_top gen_unsupported gen_sbox[4] u_sbox x_out_noMask", false,-1, 19,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1036+i*1,"ascon_top gen_unsupported gen_sbox[4] u_sbox x", true,(i+0), 3,0);}}
        tracep->declBus(c+1360,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1361,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1362,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1363,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1364,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1365,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1366,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1367,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1368,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1369,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1370,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1371,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1372,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1373,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1374,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1375,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1376,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1377,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1378,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1379,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(3)", false,-1, 3,0);
        tracep->declBus(c+1041,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1042,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1043,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1044,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1045,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1046,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1047,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1048,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1049,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1050,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1051,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1052,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1053,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1054,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1055,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1056,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1057,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1058,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1059,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1060,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(3)", false,-1, 3,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1061+i*1,"ascon_top gen_unsupported gen_sbox[4] u_sbox y", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1380+i*1,"ascon_top gen_unsupported gen_sbox[4] u_sbox y_noMask", true,(i+0), 3,0);}}
        tracep->declBus(c+1519,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1385,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 3,0);
        tracep->declBus(c+1386,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 3,0);
        tracep->declBus(c+1387,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 3,0);
        tracep->declBus(c+1388,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+1066,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+1067,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+1419,"ascon_top gen_unsupported gen_sbox[5] u_sbox clk", false,-1);
        tracep->declBus(c+1068,"ascon_top gen_unsupported gen_sbox[5] u_sbox x_in", false,-1, 19,0);
        tracep->declBus(c+527,"ascon_top gen_unsupported gen_sbox[5] u_sbox fresh_r", false,-1, 5,0);
        tracep->declBit(c+535,"ascon_top gen_unsupported gen_sbox[5] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+1069,"ascon_top gen_unsupported gen_sbox[5] u_sbox x_out", false,-1, 19,0);
        tracep->declBus(c+1389,"ascon_top gen_unsupported gen_sbox[5] u_sbox x_out_noMask", false,-1, 19,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1070+i*1,"ascon_top gen_unsupported gen_sbox[5] u_sbox x", true,(i+0), 3,0);}}
        tracep->declBus(c+1390,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1391,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1392,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1393,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1394,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1395,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1396,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1397,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1398,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1399,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1400,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1401,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1402,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1403,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1404,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1405,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1406,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1407,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1408,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1409,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(3)", false,-1, 3,0);
        tracep->declBus(c+1075,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(0)", false,-1, 3,0);
        tracep->declBus(c+1076,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(1)", false,-1, 3,0);
        tracep->declBus(c+1077,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(2)", false,-1, 3,0);
        tracep->declBus(c+1078,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(3)", false,-1, 3,0);
        tracep->declBus(c+1079,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(0)", false,-1, 3,0);
        tracep->declBus(c+1080,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(1)", false,-1, 3,0);
        tracep->declBus(c+1081,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(2)", false,-1, 3,0);
        tracep->declBus(c+1082,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(3)", false,-1, 3,0);
        tracep->declBus(c+1083,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(0)", false,-1, 3,0);
        tracep->declBus(c+1084,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(1)", false,-1, 3,0);
        tracep->declBus(c+1085,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(2)", false,-1, 3,0);
        tracep->declBus(c+1086,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(3)", false,-1, 3,0);
        tracep->declBus(c+1087,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(0)", false,-1, 3,0);
        tracep->declBus(c+1088,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(1)", false,-1, 3,0);
        tracep->declBus(c+1089,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(2)", false,-1, 3,0);
        tracep->declBus(c+1090,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(3)", false,-1, 3,0);
        tracep->declBus(c+1091,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(0)", false,-1, 3,0);
        tracep->declBus(c+1092,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(1)", false,-1, 3,0);
        tracep->declBus(c+1093,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(2)", false,-1, 3,0);
        tracep->declBus(c+1094,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(3)", false,-1, 3,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1095+i*1,"ascon_top gen_unsupported gen_sbox[5] u_sbox y", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1410+i*1,"ascon_top gen_unsupported gen_sbox[5] u_sbox y_noMask", true,(i+0), 3,0);}}
        tracep->declBus(c+1519,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1415,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 3,0);
        tracep->declBus(c+1416,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 3,0);
        tracep->declBus(c+1417,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 3,0);
        tracep->declBus(c+1418,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+1100,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+1517,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+1101,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 3,0);
        tracep->declBus(c+1509,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBus(c+1520,"ascon_params d", false,-1, 31,0);
        tracep->declBus(c+1521,"ascon_params PAR", false,-1, 31,0);
        tracep->declBus(c+1522,"ascon_params COL_SIZE", false,-1, 31,0);
        tracep->declBus(c+1523,"ascon_params WORD_SIZE", false,-1, 31,0);
        tracep->declBus(c+1524,"ascon_params STATE_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1525,"ascon_params num_shares", false,-1, 31,0);
        tracep->declBus(c+1521,"ascon_params SHIFT_PAR", false,-1, 31,0);
        tracep->declBus(c+1526,"ascon_params SHIFT_PAR_D_PLUS_1", false,-1, 31,0);
        tracep->declBus(c+1525,"ascon_params SHIFT_PAR_LAST", false,-1, 31,0);
        tracep->declBus(c+1514,"ascon_params SHIFT_PAR_D_PLUS_1_LAST", false,-1, 31,0);
        tracep->declBus(c+1527,"ascon_params NUMBER_BIT_MASK", false,-1, 31,0);
        tracep->declBus(c+1520,"ascon_params NUMBER_BIT_NOMASK", false,-1, 31,0);
        tracep->declBus(c+1526,"ascon_params SHIFT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1528,"ascon_params PADDED_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1529,"ascon_params RAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1529,"ascon_params DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1530,"ascon_params REVERSE", false,-1);
        tracep->declBus(c+1531,"ascon_params LFSR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1532,"ascon_params LFSR_POLY", false,-1, 30,0);
        tracep->declBus(c+1533,"ascon_params LFSR_FEED_FORWARD", false,-1, 31,0);
        tracep->declBus(c+1534,"ascon_params STYLE_AUTO", false,-1, 31,0);
        tracep->declBus(c+1535,"ascon_params STYLE_LOOP", false,-1, 31,0);
        tracep->declBus(c+1536,"ascon_params STYLE_REDUCTION", false,-1, 31,0);
        tracep->declBus(c+1534,"ascon_params CFG_FIBONACCI", false,-1, 31,0);
        tracep->declBus(c+1535,"ascon_params CFG_GALOIS", false,-1, 31,0);
        tracep->declBus(c+1535,"ascon_params STYLE", false,-1, 31,0);
        tracep->declBus(c+1534,"ascon_params LFSR_CONFIG", false,-1, 31,0);
    }
}

void Vascon_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vascon_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vascon_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vascon_top___024root__traceRegister(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vascon_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vascon_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vascon_top___024root__traceCleanup, vlSelf);
    }
}

void Vascon_top___024root__traceFullSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vascon_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vascon_top___024root* const __restrict vlSelf = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vascon_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vascon_top___024root__traceFullSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp19862;
    VlWide<3>/*95:0*/ __Vtemp19863;
    VlWide<10>/*319:0*/ __Vtemp19867;
    VlWide<10>/*319:0*/ __Vtemp19871;
    VlWide<3>/*95:0*/ __Vtemp19872;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ascon_top__DOT__rotations_a[0]),32);
        tracep->fullIData(oldp+2,(vlSelf->ascon_top__DOT__rotations_a[1]),32);
        tracep->fullIData(oldp+3,(vlSelf->ascon_top__DOT__rotations_a[2]),32);
        tracep->fullIData(oldp+4,(vlSelf->ascon_top__DOT__rotations_a[3]),32);
        tracep->fullIData(oldp+5,(vlSelf->ascon_top__DOT__rotations_a[4]),32);
        tracep->fullIData(oldp+6,(vlSelf->ascon_top__DOT__rotations_b[0]),32);
        tracep->fullIData(oldp+7,(vlSelf->ascon_top__DOT__rotations_b[1]),32);
        tracep->fullIData(oldp+8,(vlSelf->ascon_top__DOT__rotations_b[2]),32);
        tracep->fullIData(oldp+9,(vlSelf->ascon_top__DOT__rotations_b[3]),32);
        tracep->fullIData(oldp+10,(vlSelf->ascon_top__DOT__rotations_b[4]),32);
        tracep->fullWData(oldp+11,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),127);
        tracep->fullWData(oldp+15,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),127);
        tracep->fullWData(oldp+19,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),127);
        tracep->fullWData(oldp+23,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),127);
        tracep->fullWData(oldp+27,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),127);
        tracep->fullWData(oldp+31,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),127);
        tracep->fullWData(oldp+35,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),127);
        tracep->fullWData(oldp+39,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),127);
        tracep->fullWData(oldp+43,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),127);
        tracep->fullWData(oldp+47,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),127);
        tracep->fullWData(oldp+51,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),127);
        tracep->fullWData(oldp+55,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),127);
        tracep->fullWData(oldp+59,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),127);
        tracep->fullWData(oldp+63,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),127);
        tracep->fullWData(oldp+67,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),127);
        tracep->fullWData(oldp+71,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),127);
        tracep->fullWData(oldp+75,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),127);
        tracep->fullWData(oldp+79,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),127);
        tracep->fullWData(oldp+83,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),127);
        tracep->fullWData(oldp+87,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),127);
        tracep->fullWData(oldp+91,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),127);
        tracep->fullWData(oldp+95,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),127);
        tracep->fullWData(oldp+99,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),127);
        tracep->fullWData(oldp+103,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),127);
        tracep->fullWData(oldp+107,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),127);
        tracep->fullWData(oldp+111,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),127);
        tracep->fullWData(oldp+115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),127);
        tracep->fullWData(oldp+119,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),127);
        tracep->fullWData(oldp+123,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),127);
        tracep->fullWData(oldp+127,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),127);
        tracep->fullWData(oldp+131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),127);
        tracep->fullWData(oldp+135,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),127);
        tracep->fullWData(oldp+139,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),127);
        tracep->fullWData(oldp+143,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),127);
        tracep->fullWData(oldp+147,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),127);
        tracep->fullWData(oldp+151,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),127);
        tracep->fullWData(oldp+155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),127);
        tracep->fullWData(oldp+159,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),127);
        tracep->fullWData(oldp+163,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),127);
        tracep->fullWData(oldp+167,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),127);
        tracep->fullWData(oldp+171,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),127);
        tracep->fullWData(oldp+175,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),127);
        tracep->fullWData(oldp+179,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),127);
        tracep->fullWData(oldp+183,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),127);
        tracep->fullWData(oldp+187,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask),127);
        tracep->fullWData(oldp+191,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask),127);
        tracep->fullWData(oldp+195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask),127);
        tracep->fullWData(oldp+199,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask),127);
        tracep->fullWData(oldp+203,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask),127);
        tracep->fullWData(oldp+207,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask),127);
        tracep->fullWData(oldp+211,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask),127);
        tracep->fullWData(oldp+215,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask),127);
        tracep->fullWData(oldp+219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask),127);
        tracep->fullWData(oldp+223,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask),127);
        tracep->fullWData(oldp+227,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask),127);
        tracep->fullWData(oldp+231,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask),127);
        tracep->fullWData(oldp+235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask),127);
        tracep->fullWData(oldp+239,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask),127);
        tracep->fullWData(oldp+243,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask),127);
        tracep->fullWData(oldp+247,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask),127);
        tracep->fullWData(oldp+251,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask),127);
        tracep->fullWData(oldp+255,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask),127);
        tracep->fullWData(oldp+259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask),127);
        tracep->fullWData(oldp+263,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask),127);
        tracep->fullWData(oldp+267,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask),127);
        tracep->fullWData(oldp+271,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask),127);
        tracep->fullWData(oldp+275,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask),127);
        tracep->fullWData(oldp+279,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask),127);
        tracep->fullWData(oldp+283,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask),127);
        tracep->fullWData(oldp+287,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask),127);
        tracep->fullWData(oldp+291,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask),127);
        tracep->fullWData(oldp+295,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask),127);
        tracep->fullWData(oldp+299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask),127);
        tracep->fullWData(oldp+303,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask),127);
        tracep->fullWData(oldp+307,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask),127);
        tracep->fullWData(oldp+311,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask),127);
        tracep->fullWData(oldp+315,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask),127);
        tracep->fullWData(oldp+319,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask),127);
        tracep->fullWData(oldp+323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask),127);
        tracep->fullWData(oldp+327,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask),127);
        tracep->fullWData(oldp+331,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask),127);
        tracep->fullWData(oldp+335,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask),127);
        tracep->fullWData(oldp+339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask),127);
        tracep->fullWData(oldp+343,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask),127);
        tracep->fullWData(oldp+347,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask),127);
        tracep->fullWData(oldp+351,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask),127);
        tracep->fullWData(oldp+355,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask),127);
        tracep->fullWData(oldp+359,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask),127);
        tracep->fullWData(oldp+363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask),127);
        tracep->fullWData(oldp+367,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask),127);
        tracep->fullWData(oldp+371,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask),127);
        tracep->fullWData(oldp+375,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask),127);
        tracep->fullWData(oldp+379,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask),127);
        tracep->fullWData(oldp+383,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask),127);
        tracep->fullWData(oldp+387,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask),127);
        tracep->fullWData(oldp+391,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask),127);
        tracep->fullWData(oldp+395,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask),127);
        tracep->fullWData(oldp+399,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask),127);
        tracep->fullWData(oldp+403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask),127);
        tracep->fullWData(oldp+407,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask),127);
        tracep->fullWData(oldp+411,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask),127);
        tracep->fullWData(oldp+415,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask),127);
        tracep->fullWData(oldp+419,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask),127);
        tracep->fullWData(oldp+423,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask),127);
        tracep->fullWData(oldp+427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask),127);
        tracep->fullWData(oldp+431,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask),127);
        tracep->fullWData(oldp+435,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask),127);
        tracep->fullWData(oldp+439,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask),127);
        tracep->fullWData(oldp+443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask),127);
        tracep->fullWData(oldp+447,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask),127);
        tracep->fullWData(oldp+451,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask),127);
        tracep->fullWData(oldp+455,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask),127);
        tracep->fullWData(oldp+459,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask),127);
        tracep->fullWData(oldp+463,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask),127);
        tracep->fullWData(oldp+467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask),127);
        tracep->fullWData(oldp+471,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask),127);
        tracep->fullWData(oldp+475,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask),127);
        tracep->fullWData(oldp+479,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask),127);
        tracep->fullWData(oldp+483,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask),127);
        tracep->fullWData(oldp+487,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask),127);
        tracep->fullWData(oldp+491,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask),127);
        tracep->fullWData(oldp+495,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask),127);
        tracep->fullWData(oldp+499,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask),127);
        tracep->fullWData(oldp+503,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask),127);
        tracep->fullWData(oldp+507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask),127);
        tracep->fullWData(oldp+511,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask),127);
        tracep->fullWData(oldp+515,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask),127);
        tracep->fullWData(oldp+519,(vlSelf->ascon_top__DOT__lfsr_out),96);
        tracep->fullIData(oldp+522,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
        tracep->fullIData(oldp+523,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
        __Vtemp19862[0U] = vlSelf->ascon_top__DOT__lfsr_out[0U];
        __Vtemp19862[1U] = vlSelf->ascon_top__DOT__lfsr_out[1U];
        __Vtemp19862[2U] = (0x3ffffffU & vlSelf->ascon_top__DOT__lfsr_out[2U]);
        tracep->fullWData(oldp+524,(__Vtemp19862),90);
        tracep->fullCData(oldp+527,((vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                     >> 0x1aU)),6);
        tracep->fullBit(oldp+528,(vlSelf->ascon_top__DOT__extra_padding_ff));
        tracep->fullBit(oldp+529,(vlSelf->ascon_top__DOT__shift_en));
        tracep->fullBit(oldp+530,(vlSelf->ascon_top__DOT__shift_type));
        tracep->fullBit(oldp+531,(vlSelf->ascon_top__DOT__last_cycle));
        tracep->fullBit(oldp+532,(vlSelf->ascon_top__DOT__reg_key1_load));
        tracep->fullBit(oldp+533,(vlSelf->ascon_top__DOT__reg_key2_load));
        tracep->fullBit(oldp+534,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
        tracep->fullBit(oldp+535,(vlSelf->ascon_top__DOT__sel_masked_round));
        tracep->fullBit(oldp+536,(vlSelf->ascon_top__DOT__sel_xor_signal));
        tracep->fullBit(oldp+537,(vlSelf->ascon_top__DOT__shift_enable_sipo));
        tracep->fullBit(oldp+538,(vlSelf->ascon_top__DOT__last_cycle_sipo));
        tracep->fullCData(oldp+539,(vlSelf->ascon_top__DOT__round_counter),4);
        tracep->fullCData(oldp+540,(vlSelf->ascon_top__DOT__bit_counter),4);
        tracep->fullQData(oldp+541,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
        tracep->fullQData(oldp+543,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
        tracep->fullQData(oldp+545,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
        tracep->fullQData(oldp+547,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
        tracep->fullQData(oldp+549,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
        tracep->fullQData(oldp+551,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
        tracep->fullQData(oldp+553,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
        tracep->fullQData(oldp+555,((0xf0ULL - (0xfULL 
                                                * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
        VL_EXTEND_WQ(66,64, __Vtemp19863, (0xf0ULL 
                                           - (0xfULL 
                                              * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
        tracep->fullWData(oldp+557,(__Vtemp19863),66);
        tracep->fullCData(oldp+560,(vlSelf->ascon_top__DOT__rc_block[0]),6);
        tracep->fullCData(oldp+561,(vlSelf->ascon_top__DOT__rc_block[1]),6);
        tracep->fullCData(oldp+562,(vlSelf->ascon_top__DOT__rc_block[2]),6);
        tracep->fullCData(oldp+563,(vlSelf->ascon_top__DOT__rc_block[3]),6);
        tracep->fullQData(oldp+564,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                      ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                      : 0x8000000000000000ULL)),64);
        tracep->fullBit(oldp+566,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg));
        tracep->fullIData(oldp+567,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i),32);
        tracep->fullBit(oldp+568,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg));
        tracep->fullIData(oldp+569,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i),32);
        tracep->fullBit(oldp+570,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg));
        tracep->fullIData(oldp+571,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i),32);
        tracep->fullBit(oldp+572,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg));
        tracep->fullIData(oldp+573,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i),32);
        tracep->fullBit(oldp+574,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg));
        tracep->fullIData(oldp+575,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i),32);
        tracep->fullBit(oldp+576,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg));
        tracep->fullIData(oldp+577,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i),32);
        tracep->fullBit(oldp+578,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg));
        tracep->fullIData(oldp+579,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i),32);
        tracep->fullBit(oldp+580,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg));
        tracep->fullIData(oldp+581,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i),32);
        tracep->fullBit(oldp+582,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg));
        tracep->fullIData(oldp+583,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i),32);
        tracep->fullBit(oldp+584,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg));
        tracep->fullIData(oldp+585,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i),32);
        tracep->fullBit(oldp+586,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg));
        tracep->fullIData(oldp+587,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i),32);
        tracep->fullBit(oldp+588,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg));
        tracep->fullIData(oldp+589,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i),32);
        tracep->fullBit(oldp+590,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg));
        tracep->fullIData(oldp+591,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i),32);
        tracep->fullBit(oldp+592,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg));
        tracep->fullIData(oldp+593,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i),32);
        tracep->fullBit(oldp+594,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg));
        tracep->fullIData(oldp+595,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i),32);
        tracep->fullBit(oldp+596,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg));
        tracep->fullIData(oldp+597,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i),32);
        tracep->fullBit(oldp+598,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg));
        tracep->fullIData(oldp+599,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i),32);
        tracep->fullBit(oldp+600,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg));
        tracep->fullIData(oldp+601,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i),32);
        tracep->fullBit(oldp+602,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg));
        tracep->fullIData(oldp+603,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i),32);
        tracep->fullBit(oldp+604,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg));
        tracep->fullIData(oldp+605,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i),32);
        tracep->fullBit(oldp+606,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg));
        tracep->fullIData(oldp+607,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i),32);
        tracep->fullBit(oldp+608,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg));
        tracep->fullIData(oldp+609,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i),32);
        tracep->fullBit(oldp+610,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg));
        tracep->fullIData(oldp+611,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i),32);
        tracep->fullBit(oldp+612,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg));
        tracep->fullIData(oldp+613,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i),32);
        tracep->fullBit(oldp+614,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg));
        tracep->fullIData(oldp+615,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i),32);
        tracep->fullBit(oldp+616,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg));
        tracep->fullIData(oldp+617,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i),32);
        tracep->fullBit(oldp+618,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg));
        tracep->fullIData(oldp+619,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i),32);
        tracep->fullBit(oldp+620,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg));
        tracep->fullIData(oldp+621,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i),32);
        tracep->fullBit(oldp+622,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg));
        tracep->fullIData(oldp+623,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i),32);
        tracep->fullBit(oldp+624,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg));
        tracep->fullIData(oldp+625,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i),32);
        tracep->fullBit(oldp+626,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg));
        tracep->fullIData(oldp+627,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i),32);
        tracep->fullBit(oldp+628,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg));
        tracep->fullIData(oldp+629,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i),32);
        tracep->fullBit(oldp+630,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg));
        tracep->fullIData(oldp+631,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__i),32);
        tracep->fullBit(oldp+632,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg));
        tracep->fullIData(oldp+633,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__i),32);
        tracep->fullBit(oldp+634,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg));
        tracep->fullIData(oldp+635,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__i),32);
        tracep->fullBit(oldp+636,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg));
        tracep->fullIData(oldp+637,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__i),32);
        tracep->fullBit(oldp+638,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg));
        tracep->fullIData(oldp+639,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__i),32);
        tracep->fullBit(oldp+640,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg));
        tracep->fullIData(oldp+641,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__i),32);
        tracep->fullBit(oldp+642,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg));
        tracep->fullIData(oldp+643,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__i),32);
        tracep->fullBit(oldp+644,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg));
        tracep->fullIData(oldp+645,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__i),32);
        tracep->fullBit(oldp+646,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg));
        tracep->fullIData(oldp+647,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__i),32);
        tracep->fullBit(oldp+648,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg));
        tracep->fullIData(oldp+649,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__i),32);
        tracep->fullBit(oldp+650,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg));
        tracep->fullIData(oldp+651,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__i),32);
        tracep->fullBit(oldp+652,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg));
        tracep->fullIData(oldp+653,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__i),32);
        tracep->fullBit(oldp+654,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg));
        tracep->fullIData(oldp+655,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__i),32);
        tracep->fullBit(oldp+656,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg));
        tracep->fullIData(oldp+657,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__i),32);
        tracep->fullBit(oldp+658,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg));
        tracep->fullIData(oldp+659,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__i),32);
        tracep->fullBit(oldp+660,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg));
        tracep->fullIData(oldp+661,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__i),32);
        tracep->fullBit(oldp+662,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg));
        tracep->fullIData(oldp+663,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__i),32);
        tracep->fullBit(oldp+664,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg));
        tracep->fullIData(oldp+665,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__i),32);
        tracep->fullBit(oldp+666,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg));
        tracep->fullIData(oldp+667,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__i),32);
        tracep->fullBit(oldp+668,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg));
        tracep->fullIData(oldp+669,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__i),32);
        tracep->fullBit(oldp+670,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg));
        tracep->fullIData(oldp+671,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__i),32);
        tracep->fullBit(oldp+672,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg));
        tracep->fullIData(oldp+673,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__i),32);
        tracep->fullBit(oldp+674,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg));
        tracep->fullIData(oldp+675,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__i),32);
        tracep->fullBit(oldp+676,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg));
        tracep->fullIData(oldp+677,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__i),32);
        tracep->fullBit(oldp+678,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg));
        tracep->fullIData(oldp+679,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__i),32);
        tracep->fullBit(oldp+680,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg));
        tracep->fullIData(oldp+681,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__i),32);
        tracep->fullBit(oldp+682,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg));
        tracep->fullIData(oldp+683,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__i),32);
        tracep->fullBit(oldp+684,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg));
        tracep->fullIData(oldp+685,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__i),32);
        tracep->fullBit(oldp+686,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg));
        tracep->fullIData(oldp+687,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__i),32);
        tracep->fullBit(oldp+688,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg));
        tracep->fullIData(oldp+689,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__i),32);
        tracep->fullBit(oldp+690,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg));
        tracep->fullIData(oldp+691,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__i),32);
        tracep->fullBit(oldp+692,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg));
        tracep->fullIData(oldp+693,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__i),32);
        tracep->fullBit(oldp+694,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg));
        tracep->fullIData(oldp+695,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__i),32);
        tracep->fullBit(oldp+696,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg));
        tracep->fullIData(oldp+697,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__i),32);
        tracep->fullBit(oldp+698,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg));
        tracep->fullIData(oldp+699,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__i),32);
        tracep->fullBit(oldp+700,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg));
        tracep->fullIData(oldp+701,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__i),32);
        tracep->fullBit(oldp+702,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg));
        tracep->fullIData(oldp+703,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__i),32);
        tracep->fullBit(oldp+704,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg));
        tracep->fullIData(oldp+705,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__i),32);
        tracep->fullBit(oldp+706,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg));
        tracep->fullIData(oldp+707,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__i),32);
        tracep->fullBit(oldp+708,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg));
        tracep->fullIData(oldp+709,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__i),32);
        tracep->fullBit(oldp+710,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg));
        tracep->fullIData(oldp+711,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__i),32);
        tracep->fullBit(oldp+712,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg));
        tracep->fullIData(oldp+713,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__i),32);
        tracep->fullBit(oldp+714,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg));
        tracep->fullIData(oldp+715,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__i),32);
        tracep->fullBit(oldp+716,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg));
        tracep->fullIData(oldp+717,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__i),32);
        tracep->fullBit(oldp+718,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg));
        tracep->fullIData(oldp+719,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__i),32);
        tracep->fullBit(oldp+720,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg));
        tracep->fullIData(oldp+721,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__i),32);
        tracep->fullBit(oldp+722,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg));
        tracep->fullIData(oldp+723,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__i),32);
        tracep->fullBit(oldp+724,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg));
        tracep->fullIData(oldp+725,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__i),32);
        tracep->fullBit(oldp+726,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg));
        tracep->fullIData(oldp+727,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__i),32);
        tracep->fullBit(oldp+728,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg));
        tracep->fullIData(oldp+729,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__i),32);
        tracep->fullBit(oldp+730,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg));
        tracep->fullIData(oldp+731,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__i),32);
        tracep->fullBit(oldp+732,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg));
        tracep->fullIData(oldp+733,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__i),32);
        tracep->fullBit(oldp+734,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg));
        tracep->fullIData(oldp+735,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__i),32);
        tracep->fullBit(oldp+736,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg));
        tracep->fullIData(oldp+737,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__i),32);
        tracep->fullBit(oldp+738,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg));
        tracep->fullIData(oldp+739,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__i),32);
        tracep->fullBit(oldp+740,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg));
        tracep->fullIData(oldp+741,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__i),32);
        tracep->fullBit(oldp+742,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg));
        tracep->fullIData(oldp+743,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__i),32);
        tracep->fullBit(oldp+744,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg));
        tracep->fullIData(oldp+745,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__i),32);
        tracep->fullBit(oldp+746,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg));
        tracep->fullIData(oldp+747,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__i),32);
        tracep->fullBit(oldp+748,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg));
        tracep->fullIData(oldp+749,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__i),32);
        tracep->fullBit(oldp+750,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg));
        tracep->fullIData(oldp+751,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__i),32);
        tracep->fullBit(oldp+752,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg));
        tracep->fullIData(oldp+753,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__i),32);
        tracep->fullBit(oldp+754,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg));
        tracep->fullIData(oldp+755,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__i),32);
        tracep->fullBit(oldp+756,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg));
        tracep->fullIData(oldp+757,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__i),32);
        tracep->fullBit(oldp+758,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg));
        tracep->fullIData(oldp+759,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__i),32);
        tracep->fullBit(oldp+760,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg));
        tracep->fullIData(oldp+761,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__i),32);
        tracep->fullBit(oldp+762,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg));
        tracep->fullIData(oldp+763,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__i),32);
        tracep->fullBit(oldp+764,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg));
        tracep->fullIData(oldp+765,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__i),32);
        tracep->fullBit(oldp+766,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg));
        tracep->fullIData(oldp+767,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__i),32);
        tracep->fullBit(oldp+768,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg));
        tracep->fullIData(oldp+769,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__i),32);
        tracep->fullBit(oldp+770,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg));
        tracep->fullIData(oldp+771,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__i),32);
        tracep->fullBit(oldp+772,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg));
        tracep->fullIData(oldp+773,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__i),32);
        tracep->fullBit(oldp+774,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg));
        tracep->fullIData(oldp+775,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__i),32);
        tracep->fullBit(oldp+776,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg));
        tracep->fullIData(oldp+777,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__i),32);
        tracep->fullBit(oldp+778,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg));
        tracep->fullIData(oldp+779,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__i),32);
        tracep->fullBit(oldp+780,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg));
        tracep->fullIData(oldp+781,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__i),32);
        tracep->fullBit(oldp+782,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg));
        tracep->fullIData(oldp+783,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__i),32);
        tracep->fullBit(oldp+784,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg));
        tracep->fullIData(oldp+785,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__i),32);
        tracep->fullBit(oldp+786,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg));
        tracep->fullIData(oldp+787,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__i),32);
        tracep->fullBit(oldp+788,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg));
        tracep->fullIData(oldp+789,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__i),32);
        tracep->fullBit(oldp+790,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg));
        tracep->fullIData(oldp+791,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__i),32);
        tracep->fullBit(oldp+792,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg));
        tracep->fullIData(oldp+793,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__i),32);
        tracep->fullBit(oldp+794,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg));
        tracep->fullIData(oldp+795,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__i),32);
        tracep->fullBit(oldp+796,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg));
        tracep->fullIData(oldp+797,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__i),32);
        tracep->fullBit(oldp+798,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg));
        tracep->fullIData(oldp+799,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__i),32);
        tracep->fullBit(oldp+800,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg));
        tracep->fullIData(oldp+801,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__i),32);
        tracep->fullBit(oldp+802,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg));
        tracep->fullIData(oldp+803,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__i),32);
        tracep->fullBit(oldp+804,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg));
        tracep->fullIData(oldp+805,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__i),32);
        tracep->fullBit(oldp+806,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg));
        tracep->fullIData(oldp+807,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__i),32);
        tracep->fullBit(oldp+808,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg));
        tracep->fullIData(oldp+809,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__i),32);
        tracep->fullBit(oldp+810,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg));
        tracep->fullIData(oldp+811,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__i),32);
        tracep->fullBit(oldp+812,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg));
        tracep->fullIData(oldp+813,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__i),32);
        tracep->fullBit(oldp+814,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg));
        tracep->fullIData(oldp+815,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__i),32);
        tracep->fullBit(oldp+816,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg));
        tracep->fullIData(oldp+817,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__i),32);
        tracep->fullBit(oldp+818,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg));
        tracep->fullIData(oldp+819,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__i),32);
        tracep->fullCData(oldp+820,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
        tracep->fullCData(oldp+821,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),4);
        tracep->fullCData(oldp+822,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
        tracep->fullBit(oldp+823,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
        tracep->fullBit(oldp+824,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
        __Vtemp19867[0U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
        __Vtemp19867[1U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                    >> 0x20U));
        __Vtemp19867[2U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
        __Vtemp19867[3U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                    >> 0x20U));
        __Vtemp19867[4U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
        __Vtemp19867[5U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                    >> 0x20U));
        __Vtemp19867[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                     ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                     : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                    [3U]));
        __Vtemp19867[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [3U]) >> 0x20U));
        __Vtemp19867[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                     ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                 ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                 : 0x8000000000000000ULL))
                                     : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                    [4U]));
        __Vtemp19867[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                  ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                  : 0x8000000000000000ULL))
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [4U]) >> 0x20U));
        tracep->fullWData(oldp+825,(__Vtemp19867),320);
        tracep->fullQData(oldp+835,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                  ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                  : 0x8000000000000000ULL))
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [4U])),64);
        tracep->fullWData(oldp+837,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1),120);
        tracep->fullIData(oldp+841,((0xffffffU & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U])),24);
        tracep->fullIData(oldp+842,((0xffffffU & ((
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                     >> 0x18U)))),24);
        tracep->fullIData(oldp+843,((0xffffffU & ((
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                     >> 0x10U)))),24);
        tracep->fullIData(oldp+844,((vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                     >> 8U)),24);
        tracep->fullIData(oldp+845,((0xffffffU & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[3U])),24);
        tracep->fullIData(oldp+846,(vlSelf->ascon_top__DOT__mux_1st_x0),24);
        tracep->fullIData(oldp+847,(vlSelf->ascon_top__DOT__mux_1st_x1),24);
        tracep->fullIData(oldp+848,(vlSelf->ascon_top__DOT__mux_1st_x3),24);
        tracep->fullIData(oldp+849,(vlSelf->ascon_top__DOT__mux_1st_x4),24);
        tracep->fullIData(oldp+850,(vlSelf->ascon_top__DOT__sbox_input[0]),20);
        tracep->fullIData(oldp+851,(vlSelf->ascon_top__DOT__sbox_input[1]),20);
        tracep->fullIData(oldp+852,(vlSelf->ascon_top__DOT__sbox_input[2]),20);
        tracep->fullIData(oldp+853,(vlSelf->ascon_top__DOT__sbox_input[3]),20);
        tracep->fullIData(oldp+854,(vlSelf->ascon_top__DOT__sbox_input[4]),20);
        tracep->fullIData(oldp+855,(vlSelf->ascon_top__DOT__sbox_input[5]),20);
        tracep->fullIData(oldp+856,(vlSelf->ascon_top__DOT__sbox_output[0]),20);
        tracep->fullIData(oldp+857,(vlSelf->ascon_top__DOT__sbox_output[1]),20);
        tracep->fullIData(oldp+858,(vlSelf->ascon_top__DOT__sbox_output[2]),20);
        tracep->fullIData(oldp+859,(vlSelf->ascon_top__DOT__sbox_output[3]),20);
        tracep->fullIData(oldp+860,(vlSelf->ascon_top__DOT__sbox_output[4]),20);
        tracep->fullIData(oldp+861,(vlSelf->ascon_top__DOT__sbox_output[5]),20);
        tracep->fullWData(oldp+862,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
        tracep->fullQData(oldp+872,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
        tracep->fullQData(oldp+874,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
        tracep->fullQData(oldp+876,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
        tracep->fullQData(oldp+878,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
        tracep->fullQData(oldp+880,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
        tracep->fullIData(oldp+882,(vlSelf->ascon_top__DOT__unnamedblk1__DOT__p),32);
        tracep->fullQData(oldp+883,(vlSelf->ascon_top__DOT__state_reg__DOT__state[0]),64);
        tracep->fullQData(oldp+885,(vlSelf->ascon_top__DOT__state_reg__DOT__state[1]),64);
        tracep->fullQData(oldp+887,(vlSelf->ascon_top__DOT__state_reg__DOT__state[2]),64);
        tracep->fullQData(oldp+889,(vlSelf->ascon_top__DOT__state_reg__DOT__state[3]),64);
        tracep->fullQData(oldp+891,(vlSelf->ascon_top__DOT__state_reg__DOT__state[4]),64);
        tracep->fullIData(oldp+893,(vlSelf->ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
        tracep->fullCData(oldp+894,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x0)),6);
        tracep->fullCData(oldp+895,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x1)),6);
        tracep->fullCData(oldp+896,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x3)),6);
        tracep->fullCData(oldp+897,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x4)),6);
        tracep->fullIData(oldp+898,(vlSelf->ascon_top__DOT__sbox_input
                                    [0U]),20);
        tracep->fullIData(oldp+899,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                      [4U] << 0x10U) 
                                     | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                         [3U] << 0xcU) 
                                        | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                            [2U] << 8U) 
                                           | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                               [1U] 
                                               << 4U) 
                                              | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                              [0U]))))),20);
        tracep->fullCData(oldp+900,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),4);
        tracep->fullCData(oldp+901,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),4);
        tracep->fullCData(oldp+902,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),4);
        tracep->fullCData(oldp+903,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),4);
        tracep->fullCData(oldp+904,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),4);
        tracep->fullCData(oldp+905,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                     [0U])),4);
        tracep->fullCData(oldp+906,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 4U))),4);
        tracep->fullCData(oldp+907,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 8U))),4);
        tracep->fullCData(oldp+908,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 0xcU))),4);
        tracep->fullCData(oldp+909,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                     [1U])),4);
        tracep->fullCData(oldp+910,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 4U))),4);
        tracep->fullCData(oldp+911,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 8U))),4);
        tracep->fullCData(oldp+912,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 0xcU))),4);
        tracep->fullCData(oldp+913,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                     [2U])),4);
        tracep->fullCData(oldp+914,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 4U))),4);
        tracep->fullCData(oldp+915,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 8U))),4);
        tracep->fullCData(oldp+916,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 0xcU))),4);
        tracep->fullCData(oldp+917,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                     [3U])),4);
        tracep->fullCData(oldp+918,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 4U))),4);
        tracep->fullCData(oldp+919,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 8U))),4);
        tracep->fullCData(oldp+920,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 0xcU))),4);
        tracep->fullCData(oldp+921,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                     [4U])),4);
        tracep->fullCData(oldp+922,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 4U))),4);
        tracep->fullCData(oldp+923,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 8U))),4);
        tracep->fullCData(oldp+924,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 0xcU))),4);
        tracep->fullCData(oldp+925,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),4);
        tracep->fullCData(oldp+926,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),4);
        tracep->fullCData(oldp+927,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),4);
        tracep->fullCData(oldp+928,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),4);
        tracep->fullCData(oldp+929,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),4);
        tracep->fullIData(oldp+930,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+931,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        tracep->fullIData(oldp+932,(vlSelf->ascon_top__DOT__sbox_input
                                    [1U]),20);
        tracep->fullIData(oldp+933,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                      [4U] << 0x10U) 
                                     | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                         [3U] << 0xcU) 
                                        | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                            [2U] << 8U) 
                                           | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                               [1U] 
                                               << 4U) 
                                              | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                              [0U]))))),20);
        tracep->fullCData(oldp+934,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0]),4);
        tracep->fullCData(oldp+935,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1]),4);
        tracep->fullCData(oldp+936,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2]),4);
        tracep->fullCData(oldp+937,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3]),4);
        tracep->fullCData(oldp+938,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4]),4);
        tracep->fullCData(oldp+939,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                     [0U])),4);
        tracep->fullCData(oldp+940,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 4U))),4);
        tracep->fullCData(oldp+941,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 8U))),4);
        tracep->fullCData(oldp+942,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 0xcU))),4);
        tracep->fullCData(oldp+943,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                     [1U])),4);
        tracep->fullCData(oldp+944,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 4U))),4);
        tracep->fullCData(oldp+945,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 8U))),4);
        tracep->fullCData(oldp+946,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 0xcU))),4);
        tracep->fullCData(oldp+947,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                     [2U])),4);
        tracep->fullCData(oldp+948,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 4U))),4);
        tracep->fullCData(oldp+949,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 8U))),4);
        tracep->fullCData(oldp+950,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 0xcU))),4);
        tracep->fullCData(oldp+951,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                     [3U])),4);
        tracep->fullCData(oldp+952,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 4U))),4);
        tracep->fullCData(oldp+953,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 8U))),4);
        tracep->fullCData(oldp+954,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 0xcU))),4);
        tracep->fullCData(oldp+955,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                     [4U])),4);
        tracep->fullCData(oldp+956,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 4U))),4);
        tracep->fullCData(oldp+957,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 8U))),4);
        tracep->fullCData(oldp+958,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 0xcU))),4);
        tracep->fullCData(oldp+959,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0]),4);
        tracep->fullCData(oldp+960,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1]),4);
        tracep->fullCData(oldp+961,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2]),4);
        tracep->fullCData(oldp+962,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3]),4);
        tracep->fullCData(oldp+963,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4]),4);
        tracep->fullIData(oldp+964,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+965,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        tracep->fullIData(oldp+966,(vlSelf->ascon_top__DOT__sbox_input
                                    [2U]),20);
        tracep->fullIData(oldp+967,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                      [4U] << 0x10U) 
                                     | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                         [3U] << 0xcU) 
                                        | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                            [2U] << 8U) 
                                           | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                               [1U] 
                                               << 4U) 
                                              | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                              [0U]))))),20);
        tracep->fullCData(oldp+968,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0]),4);
        tracep->fullCData(oldp+969,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1]),4);
        tracep->fullCData(oldp+970,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2]),4);
        tracep->fullCData(oldp+971,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3]),4);
        tracep->fullCData(oldp+972,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4]),4);
        tracep->fullCData(oldp+973,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                     [0U])),4);
        tracep->fullCData(oldp+974,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 4U))),4);
        tracep->fullCData(oldp+975,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 8U))),4);
        tracep->fullCData(oldp+976,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U] >> 0xcU))),4);
        tracep->fullCData(oldp+977,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                     [1U])),4);
        tracep->fullCData(oldp+978,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 4U))),4);
        tracep->fullCData(oldp+979,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 8U))),4);
        tracep->fullCData(oldp+980,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U] >> 0xcU))),4);
        tracep->fullCData(oldp+981,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                     [2U])),4);
        tracep->fullCData(oldp+982,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 4U))),4);
        tracep->fullCData(oldp+983,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 8U))),4);
        tracep->fullCData(oldp+984,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U] >> 0xcU))),4);
        tracep->fullCData(oldp+985,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                     [3U])),4);
        tracep->fullCData(oldp+986,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 4U))),4);
        tracep->fullCData(oldp+987,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 8U))),4);
        tracep->fullCData(oldp+988,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U] >> 0xcU))),4);
        tracep->fullCData(oldp+989,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                     [4U])),4);
        tracep->fullCData(oldp+990,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 4U))),4);
        tracep->fullCData(oldp+991,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 8U))),4);
        tracep->fullCData(oldp+992,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U] >> 0xcU))),4);
        tracep->fullCData(oldp+993,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0]),4);
        tracep->fullCData(oldp+994,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1]),4);
        tracep->fullCData(oldp+995,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2]),4);
        tracep->fullCData(oldp+996,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3]),4);
        tracep->fullCData(oldp+997,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4]),4);
        tracep->fullIData(oldp+998,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+999,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        tracep->fullIData(oldp+1000,(vlSelf->ascon_top__DOT__sbox_input
                                     [3U]),20);
        tracep->fullIData(oldp+1001,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                               [0U]))))),20);
        tracep->fullCData(oldp+1002,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0]),4);
        tracep->fullCData(oldp+1003,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1]),4);
        tracep->fullCData(oldp+1004,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2]),4);
        tracep->fullCData(oldp+1005,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3]),4);
        tracep->fullCData(oldp+1006,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4]),4);
        tracep->fullCData(oldp+1007,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U])),4);
        tracep->fullCData(oldp+1008,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1009,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1010,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1011,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U])),4);
        tracep->fullCData(oldp+1012,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1013,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1014,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1015,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U])),4);
        tracep->fullCData(oldp+1016,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1017,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1018,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1019,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U])),4);
        tracep->fullCData(oldp+1020,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1021,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1022,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1023,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U])),4);
        tracep->fullCData(oldp+1024,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1025,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1026,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1027,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0]),4);
        tracep->fullCData(oldp+1028,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1]),4);
        tracep->fullCData(oldp+1029,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[2]),4);
        tracep->fullCData(oldp+1030,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[3]),4);
        tracep->fullCData(oldp+1031,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[4]),4);
        tracep->fullIData(oldp+1032,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+1033,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        tracep->fullIData(oldp+1034,(vlSelf->ascon_top__DOT__sbox_input
                                     [4U]),20);
        tracep->fullIData(oldp+1035,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                               [0U]))))),20);
        tracep->fullCData(oldp+1036,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0]),4);
        tracep->fullCData(oldp+1037,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1]),4);
        tracep->fullCData(oldp+1038,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2]),4);
        tracep->fullCData(oldp+1039,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3]),4);
        tracep->fullCData(oldp+1040,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4]),4);
        tracep->fullCData(oldp+1041,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U])),4);
        tracep->fullCData(oldp+1042,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1043,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1044,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1045,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U])),4);
        tracep->fullCData(oldp+1046,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1047,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1048,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1049,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U])),4);
        tracep->fullCData(oldp+1050,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1051,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1052,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1053,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U])),4);
        tracep->fullCData(oldp+1054,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1055,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1056,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1057,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U])),4);
        tracep->fullCData(oldp+1058,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1059,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1060,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1061,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[0]),4);
        tracep->fullCData(oldp+1062,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[1]),4);
        tracep->fullCData(oldp+1063,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[2]),4);
        tracep->fullCData(oldp+1064,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[3]),4);
        tracep->fullCData(oldp+1065,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[4]),4);
        tracep->fullIData(oldp+1066,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+1067,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        tracep->fullIData(oldp+1068,(vlSelf->ascon_top__DOT__sbox_input
                                     [5U]),20);
        tracep->fullIData(oldp+1069,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                               [0U]))))),20);
        tracep->fullCData(oldp+1070,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0]),4);
        tracep->fullCData(oldp+1071,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1]),4);
        tracep->fullCData(oldp+1072,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2]),4);
        tracep->fullCData(oldp+1073,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3]),4);
        tracep->fullCData(oldp+1074,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4]),4);
        tracep->fullCData(oldp+1075,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U])),4);
        tracep->fullCData(oldp+1076,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1077,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1078,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1079,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U])),4);
        tracep->fullCData(oldp+1080,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1081,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1082,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1083,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U])),4);
        tracep->fullCData(oldp+1084,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1085,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1086,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1087,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U])),4);
        tracep->fullCData(oldp+1088,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1089,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1090,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1091,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U])),4);
        tracep->fullCData(oldp+1092,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1093,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1094,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1095,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[0]),4);
        tracep->fullCData(oldp+1096,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[1]),4);
        tracep->fullCData(oldp+1097,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[2]),4);
        tracep->fullCData(oldp+1098,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[3]),4);
        tracep->fullCData(oldp+1099,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[4]),4);
        tracep->fullIData(oldp+1100,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+1101,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        tracep->fullQData(oldp+1102,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
        tracep->fullQData(oldp+1104,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
        tracep->fullQData(oldp+1106,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
        tracep->fullQData(oldp+1108,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
        tracep->fullQData(oldp+1110,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
        tracep->fullBit(oldp+1112,(vlSelf->ascon_top__DOT__write_en));
        tracep->fullBit(oldp+1113,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
        tracep->fullBit(oldp+1114,(vlSelf->ascon_top__DOT__sel_init_load));
        tracep->fullBit(oldp+1115,(vlSelf->ascon_top__DOT__sel_padding));
        tracep->fullBit(oldp+1116,(vlSelf->ascon_top__DOT__sel_absorb_data));
        tracep->fullWData(oldp+1117,(vlSelf->ascon_top__DOT__state_reg_in),320);
        tracep->fullWData(oldp+1127,(vlSelf->ascon_top__DOT__data_in_padded),128);
        tracep->fullWData(oldp+1131,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
        tracep->fullIData(oldp+1135,(vlSelf->ascon_top__DOT__unnamedblk5__DOT__i),32);
        tracep->fullBit(oldp+1136,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
        tracep->fullCData(oldp+1137,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
        tracep->fullBit(oldp+1138,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
        tracep->fullBit(oldp+1139,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
        tracep->fullBit(oldp+1140,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
        tracep->fullBit(oldp+1141,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
        tracep->fullQData(oldp+1142,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0]),64);
        tracep->fullQData(oldp+1144,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1]),64);
        tracep->fullQData(oldp+1146,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2]),64);
        tracep->fullQData(oldp+1148,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3]),64);
        tracep->fullQData(oldp+1150,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4]),64);
        tracep->fullWData(oldp+1152,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1),120);
        tracep->fullIData(oldp+1156,(vlSelf->ascon_top__DOT__recombine_shares),30);
        tracep->fullIData(oldp+1157,(vlSelf->ascon_top__DOT__mux_1st_x2),24);
        tracep->fullWData(oldp+1158,(vlSelf->ascon_top__DOT__shares_out),120);
        tracep->fullIData(oldp+1162,(vlSelf->ascon_top__DOT__affine_layer_in[0]),30);
        tracep->fullIData(oldp+1163,(vlSelf->ascon_top__DOT__affine_layer_in[1]),30);
        tracep->fullIData(oldp+1164,(vlSelf->ascon_top__DOT__affine_layer_in[2]),30);
        tracep->fullIData(oldp+1165,(vlSelf->ascon_top__DOT__affine_layer_in[3]),30);
        tracep->fullIData(oldp+1166,(vlSelf->ascon_top__DOT__affine_layer_out[0]),30);
        tracep->fullIData(oldp+1167,(vlSelf->ascon_top__DOT__affine_layer_out[1]),30);
        tracep->fullIData(oldp+1168,(vlSelf->ascon_top__DOT__affine_layer_out[2]),30);
        tracep->fullIData(oldp+1169,(vlSelf->ascon_top__DOT__affine_layer_out[3]),30);
        tracep->fullIData(oldp+1170,(vlSelf->ascon_top__DOT__next_sbox_input[0]),20);
        tracep->fullIData(oldp+1171,(vlSelf->ascon_top__DOT__next_sbox_input[1]),20);
        tracep->fullIData(oldp+1172,(vlSelf->ascon_top__DOT__next_sbox_input[2]),20);
        tracep->fullIData(oldp+1173,(vlSelf->ascon_top__DOT__next_sbox_input[3]),20);
        tracep->fullIData(oldp+1174,(vlSelf->ascon_top__DOT__next_sbox_input[4]),20);
        tracep->fullIData(oldp+1175,(vlSelf->ascon_top__DOT__next_sbox_input[5]),20);
        tracep->fullIData(oldp+1176,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),20);
        tracep->fullIData(oldp+1177,(vlSelf->ascon_top__DOT__sbox_output_unmasked[1]),20);
        tracep->fullIData(oldp+1178,(vlSelf->ascon_top__DOT__sbox_output_unmasked[2]),20);
        tracep->fullIData(oldp+1179,(vlSelf->ascon_top__DOT__sbox_output_unmasked[3]),20);
        tracep->fullIData(oldp+1180,(vlSelf->ascon_top__DOT__sbox_output_unmasked[4]),20);
        tracep->fullIData(oldp+1181,(vlSelf->ascon_top__DOT__sbox_output_unmasked[5]),20);
        tracep->fullIData(oldp+1182,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),20);
        tracep->fullIData(oldp+1183,(vlSelf->ascon_top__DOT__mux_sbox_out[1]),20);
        tracep->fullIData(oldp+1184,(vlSelf->ascon_top__DOT__mux_sbox_out[2]),20);
        tracep->fullIData(oldp+1185,(vlSelf->ascon_top__DOT__mux_sbox_out[3]),20);
        tracep->fullIData(oldp+1186,(vlSelf->ascon_top__DOT__mux_sbox_out[4]),20);
        tracep->fullIData(oldp+1187,(vlSelf->ascon_top__DOT__mux_sbox_out[5]),20);
        tracep->fullIData(oldp+1188,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),30);
        tracep->fullIData(oldp+1189,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),30);
        tracep->fullIData(oldp+1190,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),30);
        tracep->fullIData(oldp+1191,(vlSelf->ascon_top__DOT__affine_layer2nd_in[3]),30);
        tracep->fullIData(oldp+1192,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),30);
        tracep->fullIData(oldp+1193,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),30);
        tracep->fullIData(oldp+1194,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),30);
        tracep->fullIData(oldp+1195,(vlSelf->ascon_top__DOT__affine_layer2nd_out[3]),30);
        tracep->fullCData(oldp+1196,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [0U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+1197,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1198,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1199,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1200,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1201,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1202,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1203,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1204,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1205,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1206,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1207,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1208,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1209,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1210,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1211,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1212,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1213,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1214,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1215,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1216,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1217,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1218,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1219,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1220,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1221,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1222,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1223,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1224,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1225,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),4);
        tracep->fullCData(oldp+1226,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),4);
        tracep->fullQData(oldp+1227,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
        tracep->fullQData(oldp+1229,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
        tracep->fullCData(oldp+1231,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x2)),6);
        tracep->fullQData(oldp+1232,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
        tracep->fullQData(oldp+1234,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
        tracep->fullQData(oldp+1236,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
        tracep->fullIData(oldp+1238,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),30);
        tracep->fullIData(oldp+1239,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                               [0U]))))),20);
        tracep->fullCData(oldp+1240,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U])),4);
        tracep->fullCData(oldp+1241,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1242,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1243,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1244,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U])),4);
        tracep->fullCData(oldp+1245,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1246,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1247,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1248,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U])),4);
        tracep->fullCData(oldp+1249,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1250,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1251,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1252,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U])),4);
        tracep->fullCData(oldp+1253,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1254,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1255,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1256,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U])),4);
        tracep->fullCData(oldp+1257,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1258,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1259,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1260,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
        tracep->fullCData(oldp+1261,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
        tracep->fullCData(oldp+1262,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
        tracep->fullCData(oldp+1263,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
        tracep->fullCData(oldp+1264,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
        tracep->fullCData(oldp+1265,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
        tracep->fullCData(oldp+1266,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
        tracep->fullCData(oldp+1267,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
        tracep->fullCData(oldp+1268,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        tracep->fullIData(oldp+1269,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                               [0U]))))),20);
        tracep->fullCData(oldp+1270,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U])),4);
        tracep->fullCData(oldp+1271,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1272,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1273,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1274,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U])),4);
        tracep->fullCData(oldp+1275,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1276,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1277,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1278,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U])),4);
        tracep->fullCData(oldp+1279,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1280,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1281,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1282,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U])),4);
        tracep->fullCData(oldp+1283,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1284,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1285,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1286,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U])),4);
        tracep->fullCData(oldp+1287,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1288,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1289,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1290,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
        tracep->fullCData(oldp+1291,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
        tracep->fullCData(oldp+1292,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
        tracep->fullCData(oldp+1293,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
        tracep->fullCData(oldp+1294,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
        tracep->fullCData(oldp+1295,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
        tracep->fullCData(oldp+1296,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
        tracep->fullCData(oldp+1297,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
        tracep->fullCData(oldp+1298,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        tracep->fullIData(oldp+1299,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                               [0U]))))),20);
        tracep->fullCData(oldp+1300,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U])),4);
        tracep->fullCData(oldp+1301,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1302,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1303,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1304,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U])),4);
        tracep->fullCData(oldp+1305,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1306,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1307,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1308,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U])),4);
        tracep->fullCData(oldp+1309,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1310,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1311,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1312,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U])),4);
        tracep->fullCData(oldp+1313,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1314,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1315,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1316,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U])),4);
        tracep->fullCData(oldp+1317,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1318,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1319,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1320,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
        tracep->fullCData(oldp+1321,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
        tracep->fullCData(oldp+1322,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
        tracep->fullCData(oldp+1323,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
        tracep->fullCData(oldp+1324,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
        tracep->fullCData(oldp+1325,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
        tracep->fullCData(oldp+1326,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
        tracep->fullCData(oldp+1327,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
        tracep->fullCData(oldp+1328,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        tracep->fullIData(oldp+1329,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                               [0U]))))),20);
        tracep->fullCData(oldp+1330,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U])),4);
        tracep->fullCData(oldp+1331,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1332,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1333,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1334,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U])),4);
        tracep->fullCData(oldp+1335,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1336,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1337,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1338,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U])),4);
        tracep->fullCData(oldp+1339,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1340,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1341,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1342,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U])),4);
        tracep->fullCData(oldp+1343,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1344,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1345,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1346,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U])),4);
        tracep->fullCData(oldp+1347,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1348,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1349,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1350,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
        tracep->fullCData(oldp+1351,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
        tracep->fullCData(oldp+1352,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
        tracep->fullCData(oldp+1353,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
        tracep->fullCData(oldp+1354,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
        tracep->fullCData(oldp+1355,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
        tracep->fullCData(oldp+1356,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
        tracep->fullCData(oldp+1357,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
        tracep->fullCData(oldp+1358,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        tracep->fullIData(oldp+1359,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                               [0U]))))),20);
        tracep->fullCData(oldp+1360,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U])),4);
        tracep->fullCData(oldp+1361,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1362,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1363,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1364,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U])),4);
        tracep->fullCData(oldp+1365,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1366,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1367,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1368,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U])),4);
        tracep->fullCData(oldp+1369,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1370,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1371,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1372,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U])),4);
        tracep->fullCData(oldp+1373,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1374,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1375,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1376,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U])),4);
        tracep->fullCData(oldp+1377,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1378,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1379,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1380,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
        tracep->fullCData(oldp+1381,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
        tracep->fullCData(oldp+1382,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
        tracep->fullCData(oldp+1383,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
        tracep->fullCData(oldp+1384,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
        tracep->fullCData(oldp+1385,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
        tracep->fullCData(oldp+1386,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
        tracep->fullCData(oldp+1387,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
        tracep->fullCData(oldp+1388,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        tracep->fullIData(oldp+1389,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                       [4U] << 0x10U) 
                                      | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                          [3U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                             [2U] << 8U) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                [1U] 
                                                << 4U) 
                                               | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                               [0U]))))),20);
        tracep->fullCData(oldp+1390,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U])),4);
        tracep->fullCData(oldp+1391,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1392,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1393,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1394,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U])),4);
        tracep->fullCData(oldp+1395,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1396,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1397,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1398,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U])),4);
        tracep->fullCData(oldp+1399,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1400,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1401,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1402,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U])),4);
        tracep->fullCData(oldp+1403,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1404,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1405,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1406,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U])),4);
        tracep->fullCData(oldp+1407,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1408,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1409,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U] 
                                              >> 0xcU))),4);
        tracep->fullCData(oldp+1410,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
        tracep->fullCData(oldp+1411,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
        tracep->fullCData(oldp+1412,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
        tracep->fullCData(oldp+1413,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
        tracep->fullCData(oldp+1414,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
        tracep->fullCData(oldp+1415,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
        tracep->fullCData(oldp+1416,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
        tracep->fullCData(oldp+1417,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
        tracep->fullCData(oldp+1418,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        tracep->fullBit(oldp+1419,(vlSelf->clk));
        tracep->fullBit(oldp+1420,(vlSelf->reset_n));
        tracep->fullBit(oldp+1421,(vlSelf->start));
        tracep->fullQData(oldp+1422,(vlSelf->key1),64);
        tracep->fullQData(oldp+1424,(vlSelf->key2),64);
        tracep->fullBit(oldp+1426,(vlSelf->key_valid));
        tracep->fullQData(oldp+1427,(vlSelf->nonce1),64);
        tracep->fullQData(oldp+1429,(vlSelf->nonce2),64);
        tracep->fullQData(oldp+1431,(vlSelf->initialVector),64);
        tracep->fullWData(oldp+1433,(vlSelf->data_in),128);
        tracep->fullBit(oldp+1437,(vlSelf->valid_data_in));
        tracep->fullBit(oldp+1438,(vlSelf->last_block));
        tracep->fullCData(oldp+1439,(vlSelf->valid_bytes),5);
        tracep->fullBit(oldp+1440,(vlSelf->EOT));
        tracep->fullWData(oldp+1441,(vlSelf->state_reg_out),320);
        tracep->fullBit(oldp+1451,(vlSelf->ciphertext_valid));
        tracep->fullWData(oldp+1452,(vlSelf->ciphertext),128);
        tracep->fullBit(oldp+1456,(vlSelf->done));
        tracep->fullBit(oldp+1457,(vlSelf->ready_tag));
        tracep->fullQData(oldp+1458,(vlSelf->tag1),64);
        tracep->fullQData(oldp+1460,(vlSelf->tag2),64);
        tracep->fullBit(oldp+1462,(vlSelf->ready_for_data));
        tracep->fullBit(oldp+1463,(vlSelf->read_data));
        tracep->fullBit(oldp+1464,(vlSelf->debug_extra_padding_ff));
        tracep->fullCData(oldp+1465,(vlSelf->debug_bitcounter),4);
        tracep->fullCData(oldp+1466,(vlSelf->debug_roundcounter),4);
        tracep->fullCData(oldp+1467,(vlSelf->debug_state),5);
        tracep->fullQData(oldp+1468,(vlSelf->debug_state_0),64);
        tracep->fullQData(oldp+1470,(vlSelf->debug_state_1),64);
        tracep->fullQData(oldp+1472,(vlSelf->debug_state_2),64);
        tracep->fullQData(oldp+1474,(vlSelf->debug_state_3),64);
        tracep->fullQData(oldp+1476,(vlSelf->debug_state_4),64);
        tracep->fullQData(oldp+1478,(vlSelf->debug_round_state_0),64);
        tracep->fullQData(oldp+1480,(vlSelf->debug_round_state_1),64);
        tracep->fullQData(oldp+1482,(vlSelf->debug_round_state_2),64);
        tracep->fullQData(oldp+1484,(vlSelf->debug_round_state_3),64);
        tracep->fullQData(oldp+1486,(vlSelf->debug_round_state_4),64);
        tracep->fullQData(oldp+1488,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->fullQData(oldp+1490,(vlSelf->debug_linear_diffusion_state4),64);
        tracep->fullIData(oldp+1492,(((0x3f000000U 
                                       & (vlSelf->ascon_top__DOT__mux_1st_x4 
                                          << 0x18U)) 
                                      | ((0xfc0000U 
                                          & (vlSelf->ascon_top__DOT__mux_1st_x3 
                                             << 0x12U)) 
                                         | ((0x3f000U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x2 
                                                << 0xcU)) 
                                            | ((0xfc0U 
                                                & (vlSelf->ascon_top__DOT__mux_1st_x1 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & vlSelf->ascon_top__DOT__mux_1st_x0)))))),30);
        __Vtemp19871[0U] = (IData)(vlSelf->initialVector);
        __Vtemp19871[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp19871[2U] = (IData)(vlSelf->key1);
        __Vtemp19871[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp19871[4U] = (IData)(vlSelf->key2);
        __Vtemp19871[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp19871[6U] = (IData)(vlSelf->nonce1);
        __Vtemp19871[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp19871[8U] = (IData)(vlSelf->nonce2);
        __Vtemp19871[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->fullWData(oldp+1493,(__Vtemp19871),320);
        tracep->fullQData(oldp+1503,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                       ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                          [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                       : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                      [3U])),64);
        tracep->fullCData(oldp+1505,((0x3fU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                                ? (
                                                   vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [1U] 
                                                   >> 0xcU)
                                                : (~ 
                                                   (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [1U] 
                                                    >> 0xcU))))),6);
        tracep->fullCData(oldp+1506,((0x3fU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                                ? (
                                                   vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [2U] 
                                                   >> 0xcU)
                                                : (~ 
                                                   (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [2U] 
                                                    >> 0xcU))))),6);
        tracep->fullCData(oldp+1507,((0x3fU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                                ? (
                                                   vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [3U] 
                                                   >> 0xcU)
                                                : (~ 
                                                   (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [3U] 
                                                    >> 0xcU))))),6);
        tracep->fullIData(oldp+1508,(0x42U),32);
        tracep->fullIData(oldp+1509,(4U),32);
        __Vtemp19872[0U] = 0U;
        __Vtemp19872[1U] = 0U;
        __Vtemp19872[2U] = 0U;
        tracep->fullWData(oldp+1510,(__Vtemp19872),96);
        tracep->fullIData(oldp+1513,(1U),32);
        tracep->fullIData(oldp+1514,(0x10U),32);
        tracep->fullIData(oldp+1515,(0xbU),32);
        tracep->fullCData(oldp+1516,(0xbU),4);
        tracep->fullIData(oldp+1517,(5U),32);
        tracep->fullIData(oldp+1518,(3U),32);
        tracep->fullIData(oldp+1519,(6U),32);
        tracep->fullIData(oldp+1520,(3U),32);
        tracep->fullIData(oldp+1521,(6U),32);
        tracep->fullIData(oldp+1522,(5U),32);
        tracep->fullIData(oldp+1523,(0x40U),32);
        tracep->fullIData(oldp+1524,(0x140U),32);
        tracep->fullIData(oldp+1525,(4U),32);
        tracep->fullIData(oldp+1526,(0x18U),32);
        tracep->fullIData(oldp+1527,(0xcU),32);
        tracep->fullIData(oldp+1528,(0x48U),32);
        tracep->fullIData(oldp+1529,(0x60U),32);
        tracep->fullBit(oldp+1530,(0U));
        tracep->fullIData(oldp+1531,(0x1fU),32);
        tracep->fullIData(oldp+1532,(0x10000001U),31);
        tracep->fullIData(oldp+1533,(0U),32);
        tracep->fullIData(oldp+1534,(0U),32);
        tracep->fullIData(oldp+1535,(1U),32);
        tracep->fullIData(oldp+1536,(2U),32);
    }
}
