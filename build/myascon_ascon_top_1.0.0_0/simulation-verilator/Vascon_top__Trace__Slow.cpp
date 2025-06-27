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
        tracep->declBit(c+6295,"clk", false,-1);
        tracep->declBit(c+6296,"reset_n", false,-1);
        tracep->declBit(c+6297,"start", false,-1);
        tracep->declQuad(c+6298,"key1", false,-1, 63,0);
        tracep->declQuad(c+6300,"key2", false,-1, 63,0);
        tracep->declBit(c+6302,"key_valid", false,-1);
        tracep->declQuad(c+6303,"nonce1", false,-1, 63,0);
        tracep->declQuad(c+6305,"nonce2", false,-1, 63,0);
        tracep->declQuad(c+6307,"initialVector", false,-1, 63,0);
        tracep->declArray(c+6309,"data_in", false,-1, 127,0);
        tracep->declBit(c+6313,"valid_data_in", false,-1);
        tracep->declBit(c+6314,"last_block", false,-1);
        tracep->declBus(c+6315,"valid_bytes", false,-1, 4,0);
        tracep->declBit(c+6316,"EOT", false,-1);
        tracep->declBit(c+6317,"ciphertext_valid", false,-1);
        tracep->declArray(c+6318,"ciphertext", false,-1, 127,0);
        tracep->declBit(c+6322,"done", false,-1);
        tracep->declBit(c+6323,"ready_tag", false,-1);
        tracep->declQuad(c+6324,"tag1", false,-1, 63,0);
        tracep->declQuad(c+6326,"tag2", false,-1, 63,0);
        tracep->declBit(c+6328,"ready_for_data", false,-1);
        tracep->declBit(c+6329,"debug_extra_padding_ff", false,-1);
        tracep->declBus(c+6330,"debug_bitcounter", false,-1, 3,0);
        tracep->declBus(c+6331,"debug_roundcounter", false,-1, 3,0);
        tracep->declBus(c+6332,"debug_state", false,-1, 4,0);
        tracep->declQuad(c+6333,"debug_state_0", false,-1, 63,0);
        tracep->declQuad(c+6335,"debug_state_1", false,-1, 63,0);
        tracep->declQuad(c+6337,"debug_state_2", false,-1, 63,0);
        tracep->declQuad(c+6339,"debug_state_3", false,-1, 63,0);
        tracep->declQuad(c+6341,"debug_state_4", false,-1, 63,0);
        tracep->declQuad(c+6343,"debug_round_state_0", false,-1, 63,0);
        tracep->declQuad(c+6345,"debug_round_state_1", false,-1, 63,0);
        tracep->declQuad(c+6347,"debug_round_state_2", false,-1, 63,0);
        tracep->declQuad(c+6349,"debug_round_state_3", false,-1, 63,0);
        tracep->declQuad(c+6351,"debug_round_state_4", false,-1, 63,0);
        tracep->declQuad(c+6353,"debug_linear_diffusion_state3", false,-1, 63,0);
        tracep->declQuad(c+6355,"debug_linear_diffusion_state4", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top clk", false,-1);
        tracep->declBit(c+6296,"ascon_top reset_n", false,-1);
        tracep->declBit(c+6297,"ascon_top start", false,-1);
        tracep->declQuad(c+6298,"ascon_top key1", false,-1, 63,0);
        tracep->declQuad(c+6300,"ascon_top key2", false,-1, 63,0);
        tracep->declBit(c+6302,"ascon_top key_valid", false,-1);
        tracep->declQuad(c+6303,"ascon_top nonce1", false,-1, 63,0);
        tracep->declQuad(c+6305,"ascon_top nonce2", false,-1, 63,0);
        tracep->declQuad(c+6307,"ascon_top initialVector", false,-1, 63,0);
        tracep->declArray(c+6309,"ascon_top data_in", false,-1, 127,0);
        tracep->declBit(c+6313,"ascon_top valid_data_in", false,-1);
        tracep->declBit(c+6314,"ascon_top last_block", false,-1);
        tracep->declBus(c+6315,"ascon_top valid_bytes", false,-1, 4,0);
        tracep->declBit(c+6316,"ascon_top EOT", false,-1);
        tracep->declBit(c+6317,"ascon_top ciphertext_valid", false,-1);
        tracep->declArray(c+6318,"ascon_top ciphertext", false,-1, 127,0);
        tracep->declBit(c+6322,"ascon_top done", false,-1);
        tracep->declBit(c+6323,"ascon_top ready_tag", false,-1);
        tracep->declQuad(c+6324,"ascon_top tag1", false,-1, 63,0);
        tracep->declQuad(c+6326,"ascon_top tag2", false,-1, 63,0);
        tracep->declBit(c+6328,"ascon_top ready_for_data", false,-1);
        tracep->declBit(c+6329,"ascon_top debug_extra_padding_ff", false,-1);
        tracep->declBus(c+6330,"ascon_top debug_bitcounter", false,-1, 3,0);
        tracep->declBus(c+6331,"ascon_top debug_roundcounter", false,-1, 3,0);
        tracep->declBus(c+6332,"ascon_top debug_state", false,-1, 4,0);
        tracep->declQuad(c+6333,"ascon_top debug_state_0", false,-1, 63,0);
        tracep->declQuad(c+6335,"ascon_top debug_state_1", false,-1, 63,0);
        tracep->declQuad(c+6337,"ascon_top debug_state_2", false,-1, 63,0);
        tracep->declQuad(c+6339,"ascon_top debug_state_3", false,-1, 63,0);
        tracep->declQuad(c+6341,"ascon_top debug_state_4", false,-1, 63,0);
        tracep->declQuad(c+6343,"ascon_top debug_round_state_0", false,-1, 63,0);
        tracep->declQuad(c+6345,"ascon_top debug_round_state_1", false,-1, 63,0);
        tracep->declQuad(c+6347,"ascon_top debug_round_state_2", false,-1, 63,0);
        tracep->declQuad(c+6349,"ascon_top debug_round_state_3", false,-1, 63,0);
        tracep->declQuad(c+6351,"ascon_top debug_round_state_4", false,-1, 63,0);
        tracep->declQuad(c+6353,"ascon_top debug_linear_diffusion_state3", false,-1, 63,0);
        tracep->declQuad(c+6355,"ascon_top debug_linear_diffusion_state4", false,-1, 63,0);
        tracep->declArray(c+5029,"ascon_top lfsr_out", false,-1, 354,0);
        tracep->declBus(c+5041,"ascon_top lfsr_state_in", false,-1, 30,0);
        tracep->declBus(c+5042,"ascon_top lfsr_state_out", false,-1, 30,0);
        tracep->declArray(c+5043,"ascon_top random_masks", false,-1, 299,0);
        tracep->declQuad(c+5053,"ascon_top random_masks_sbox", false,-1, 54,0);
        tracep->declBit(c+5055,"ascon_top extra_padding_ff", false,-1);
        tracep->declBit(c+5056,"ascon_top shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top shift_type", false,-1);
        tracep->declBit(c+5681,"ascon_top write_en", false,-1);
        tracep->declBit(c+5058,"ascon_top last_cycle", false,-1);
        tracep->declBit(c+5059,"ascon_top reg_key1_load", false,-1);
        tracep->declBit(c+5060,"ascon_top reg_key2_load", false,-1);
        tracep->declBit(c+5061,"ascon_top sel_mux_linear_diffusion_out_x3", false,-1);
        tracep->declBit(c+5682,"ascon_top sel_mux_linear_diffusion_out_x4", false,-1);
        tracep->declBit(c+5683,"ascon_top sel_init_load", false,-1);
        tracep->declBit(c+5062,"ascon_top sel_masked_round", false,-1);
        tracep->declBit(c+5684,"ascon_top sel_padding", false,-1);
        tracep->declBit(c+5063,"ascon_top sel_xor_signal", false,-1);
        tracep->declBit(c+5685,"ascon_top sel_absorb_data", false,-1);
        tracep->declBit(c+5064,"ascon_top shift_enable_sipo", false,-1);
        tracep->declBit(c+5065,"ascon_top last_cycle_sipo", false,-1);
        tracep->declBus(c+5066,"ascon_top round_counter", false,-1, 3,0);
        tracep->declBus(c+5067,"ascon_top bit_counter", false,-1, 3,0);
        tracep->declArray(c+5117,"ascon_top state_reg_out", false,-1, 319,0);
        tracep->declArray(c+5686,"ascon_top state_reg_in", false,-1, 319,0);
        tracep->declArray(c+5127,"ascon_top state_reg_out_shiftdplus1", false,-1, 319,0);
        tracep->declArray(c+5721,"ascon_top state_reg_in_shiftdplus1", false,-1, 319,0);
        tracep->declBus(c+5731,"ascon_top state_reg_in_shift1", false,-1, 29,0);
        tracep->declQuad(c+5068,"ascon_top reg_key1_out", false,-1, 63,0);
        tracep->declQuad(c+5070,"ascon_top reg_key2_out", false,-1, 63,0);
        tracep->declQuad(c+5072,"ascon_top round_x0_debug", false,-1, 63,0);
        tracep->declQuad(c+5074,"ascon_top round_x1_debug", false,-1, 63,0);
        tracep->declQuad(c+5076,"ascon_top round_x2_debug", false,-1, 63,0);
        tracep->declQuad(c+5078,"ascon_top round_x3_debug", false,-1, 63,0);
        tracep->declQuad(c+5080,"ascon_top round_x4_debug", false,-1, 63,0);
        tracep->declQuad(c+5137,"ascon_top state_reg_out_x0", false,-1, 63,0);
        tracep->declQuad(c+5139,"ascon_top state_reg_out_x1", false,-1, 63,0);
        tracep->declQuad(c+5141,"ascon_top state_reg_out_x2", false,-1, 63,0);
        tracep->declQuad(c+5143,"ascon_top state_reg_out_x3", false,-1, 63,0);
        tracep->declQuad(c+5145,"ascon_top state_reg_out_x4", false,-1, 63,0);
        tracep->declArray(c+5147,"ascon_top mux_1st_x0", false,-1, 65,0);
        tracep->declArray(c+5150,"ascon_top mux_1st_x1", false,-1, 65,0);
        tracep->declArray(c+5732,"ascon_top mux_1st_x2", false,-1, 65,0);
        tracep->declArray(c+5153,"ascon_top mux_1st_x3", false,-1, 65,0);
        tracep->declArray(c+5156,"ascon_top mux_1st_x4", false,-1, 65,0);
        tracep->declQuad(c+5082,"ascon_top round_constant_full", false,-1, 63,0);
        tracep->declBus(c+6370,"ascon_top RC_PADDED_WIDTH", false,-1, 31,0);
        tracep->declArray(c+5084,"ascon_top round_constant_padded", false,-1, 65,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+5087+i*1,"ascon_top rc_block", true,(i+0), 5,0);}}
        tracep->declArray(c+5735,"ascon_top shares_out", false,-1, 329,0);
        tracep->declBus(c+6357,"ascon_top shares_in", false,-1, 29,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+5746+i*1,"ascon_top affine_layer_in", true,(i+0), 29,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+5757+i*1,"ascon_top affine_layer_out", true,(i+0), 29,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+5768+i*2,"ascon_top next_sbox_input", true,(i+0), 54,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+5159+i*2,"ascon_top sbox_input", true,(i+0), 54,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+5171+i*2,"ascon_top sbox_output", true,(i+0), 54,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+5780+i*2,"ascon_top sbox_output_unmasked", true,(i+0), 54,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+5792+i*2,"ascon_top mux_sbox_out", true,(i+0), 54,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+5804+i*1,"ascon_top affine_layer2nd_in", true,(i+0), 29,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+5815+i*1,"ascon_top affine_layer2nd_out", true,(i+0), 29,0);}}
        tracep->declBus(c+5731,"ascon_top recombine_shares", false,-1, 29,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+5671+i*2,"ascon_top state_reg_in_absorb", true,(i+0), 63,0);}}
        tracep->declArray(c+6358,"ascon_top init_data", false,-1, 319,0);
        tracep->declArray(c+5183,"ascon_top linear_diffusion_out", false,-1, 319,0);
        tracep->declArray(c+5696,"ascon_top data_in_padded", false,-1, 127,0);
        tracep->declArray(c+5700,"ascon_top reverse_reg_data_out", false,-1, 127,0);
        tracep->declArray(c+5105,"ascon_top input_state", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1+i*1,"ascon_top rotations_a", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6+i*1,"ascon_top rotations_b", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+5193+i*2,"ascon_top linear_diffusion_debug", true,(i+0), 63,0);}}
        tracep->declQuad(c+5115,"ascon_top mux_linear_diffusion_out_x4", false,-1, 63,0);
        tracep->declQuad(c+6368,"ascon_top mux_linear_diffusion_out_x3", false,-1, 63,0);
        tracep->declQuad(c+5098,"ascon_top xor_signal", false,-1, 63,0);
        tracep->declBus(c+6371,"ascon_top mux_logic[10] gen_padded gen_last LAST_PAR_USED", false,-1, 31,0);
        tracep->declBus(c+5203,"ascon_top unnamedblk1 p", false,-1, 31,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[0] fresh_r", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[1] fresh_r", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[2] fresh_r", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[3] fresh_r", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[4] fresh_r", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[5] fresh_r", false,-1, 54,0);
        tracep->declBus(c+5826,"ascon_top affine_layer[0] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5827,"ascon_top affine_layer[1] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5828,"ascon_top affine_layer[2] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5829,"ascon_top affine_layer[3] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5830,"ascon_top affine_layer[4] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5831,"ascon_top affine_layer[5] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5832,"ascon_top affine_layer[6] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5833,"ascon_top affine_layer[7] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5834,"ascon_top affine_layer[8] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5835,"ascon_top affine_layer[9] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5836,"ascon_top affine_layer[10] affine_layer2nd_in_temp", false,-1, 5,0);
        tracep->declBus(c+5837,"ascon_top recombine[0] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[0] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5838,"ascon_top recombine[1] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[1] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5839,"ascon_top recombine[2] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[2] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5840,"ascon_top recombine[3] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[3] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5841,"ascon_top recombine[4] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[4] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5842,"ascon_top recombine[5] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[5] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5843,"ascon_top recombine[6] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[6] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5844,"ascon_top recombine[7] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[7] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5845,"ascon_top recombine[8] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[8] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5846,"ascon_top recombine[9] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[9] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5847,"ascon_top recombine[10] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[10] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5848,"ascon_top recombine[11] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[11] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5849,"ascon_top recombine[12] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[12] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5850,"ascon_top recombine[13] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[13] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5851,"ascon_top recombine[14] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[14] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5852,"ascon_top recombine[15] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[15] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5853,"ascon_top recombine[16] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[16] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5854,"ascon_top recombine[17] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[17] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5855,"ascon_top recombine[18] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[18] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5856,"ascon_top recombine[19] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[19] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5857,"ascon_top recombine[20] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[20] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5858,"ascon_top recombine[21] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[21] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5859,"ascon_top recombine[22] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[22] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5860,"ascon_top recombine[23] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[23] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5861,"ascon_top recombine[24] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[24] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5862,"ascon_top recombine[25] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[25] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5863,"ascon_top recombine[26] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[26] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5864,"ascon_top recombine[27] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[27] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5865,"ascon_top recombine[28] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[28] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+5866,"ascon_top recombine[29] temp_bits", false,-1, 10,0);
        tracep->declBus(c+6372,"ascon_top recombine[29] unnamedblk4 s", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[3] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[4] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[5] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[6] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[7] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[8] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[9] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6371,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[10] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[3] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[4] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[5] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[6] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[7] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[8] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[9] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6371,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[10] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[3] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[4] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[5] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[6] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[7] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[8] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[9] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6371,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[10] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[3] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[4] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[5] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[6] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[7] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[8] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[9] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6371,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[10] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[3] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[4] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[5] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[6] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[7] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[8] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[9] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+6371,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[10] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5704,"ascon_top unnamedblk5 i", false,-1, 31,0);
        tracep->declArray(c+6374,"ascon_top lfst_inst data_in", false,-1, 354,0);
        tracep->declBus(c+5041,"ascon_top lfst_inst state_in", false,-1, 30,0);
        tracep->declArray(c+5029,"ascon_top lfst_inst data_out", false,-1, 354,0);
        tracep->declBus(c+5042,"ascon_top lfst_inst state_out", false,-1, 30,0);
        tracep->declBus(c+6386,"ascon_top lfst_inst STYLE_INT", false,-1, 31,0);
        tracep->declArray(c+11,"ascon_top lfst_inst genblk1 lfsr_state[0] mask", false,-1, 385,0);
        tracep->declArray(c+24,"ascon_top lfst_inst genblk1 lfsr_state[1] mask", false,-1, 385,0);
        tracep->declArray(c+37,"ascon_top lfst_inst genblk1 lfsr_state[2] mask", false,-1, 385,0);
        tracep->declArray(c+50,"ascon_top lfst_inst genblk1 lfsr_state[3] mask", false,-1, 385,0);
        tracep->declArray(c+63,"ascon_top lfst_inst genblk1 lfsr_state[4] mask", false,-1, 385,0);
        tracep->declArray(c+76,"ascon_top lfst_inst genblk1 lfsr_state[5] mask", false,-1, 385,0);
        tracep->declArray(c+89,"ascon_top lfst_inst genblk1 lfsr_state[6] mask", false,-1, 385,0);
        tracep->declArray(c+102,"ascon_top lfst_inst genblk1 lfsr_state[7] mask", false,-1, 385,0);
        tracep->declArray(c+115,"ascon_top lfst_inst genblk1 lfsr_state[8] mask", false,-1, 385,0);
        tracep->declArray(c+128,"ascon_top lfst_inst genblk1 lfsr_state[9] mask", false,-1, 385,0);
        tracep->declArray(c+141,"ascon_top lfst_inst genblk1 lfsr_state[10] mask", false,-1, 385,0);
        tracep->declArray(c+154,"ascon_top lfst_inst genblk1 lfsr_state[11] mask", false,-1, 385,0);
        tracep->declArray(c+167,"ascon_top lfst_inst genblk1 lfsr_state[12] mask", false,-1, 385,0);
        tracep->declArray(c+180,"ascon_top lfst_inst genblk1 lfsr_state[13] mask", false,-1, 385,0);
        tracep->declArray(c+193,"ascon_top lfst_inst genblk1 lfsr_state[14] mask", false,-1, 385,0);
        tracep->declArray(c+206,"ascon_top lfst_inst genblk1 lfsr_state[15] mask", false,-1, 385,0);
        tracep->declArray(c+219,"ascon_top lfst_inst genblk1 lfsr_state[16] mask", false,-1, 385,0);
        tracep->declArray(c+232,"ascon_top lfst_inst genblk1 lfsr_state[17] mask", false,-1, 385,0);
        tracep->declArray(c+245,"ascon_top lfst_inst genblk1 lfsr_state[18] mask", false,-1, 385,0);
        tracep->declArray(c+258,"ascon_top lfst_inst genblk1 lfsr_state[19] mask", false,-1, 385,0);
        tracep->declArray(c+271,"ascon_top lfst_inst genblk1 lfsr_state[20] mask", false,-1, 385,0);
        tracep->declArray(c+284,"ascon_top lfst_inst genblk1 lfsr_state[21] mask", false,-1, 385,0);
        tracep->declArray(c+297,"ascon_top lfst_inst genblk1 lfsr_state[22] mask", false,-1, 385,0);
        tracep->declArray(c+310,"ascon_top lfst_inst genblk1 lfsr_state[23] mask", false,-1, 385,0);
        tracep->declArray(c+323,"ascon_top lfst_inst genblk1 lfsr_state[24] mask", false,-1, 385,0);
        tracep->declArray(c+336,"ascon_top lfst_inst genblk1 lfsr_state[25] mask", false,-1, 385,0);
        tracep->declArray(c+349,"ascon_top lfst_inst genblk1 lfsr_state[26] mask", false,-1, 385,0);
        tracep->declArray(c+362,"ascon_top lfst_inst genblk1 lfsr_state[27] mask", false,-1, 385,0);
        tracep->declArray(c+375,"ascon_top lfst_inst genblk1 lfsr_state[28] mask", false,-1, 385,0);
        tracep->declArray(c+388,"ascon_top lfst_inst genblk1 lfsr_state[29] mask", false,-1, 385,0);
        tracep->declArray(c+401,"ascon_top lfst_inst genblk1 lfsr_state[30] mask", false,-1, 385,0);
        tracep->declArray(c+414,"ascon_top lfst_inst genblk1 lfsr_data[0] mask", false,-1, 385,0);
        tracep->declArray(c+427,"ascon_top lfst_inst genblk1 lfsr_data[1] mask", false,-1, 385,0);
        tracep->declArray(c+440,"ascon_top lfst_inst genblk1 lfsr_data[2] mask", false,-1, 385,0);
        tracep->declArray(c+453,"ascon_top lfst_inst genblk1 lfsr_data[3] mask", false,-1, 385,0);
        tracep->declArray(c+466,"ascon_top lfst_inst genblk1 lfsr_data[4] mask", false,-1, 385,0);
        tracep->declArray(c+479,"ascon_top lfst_inst genblk1 lfsr_data[5] mask", false,-1, 385,0);
        tracep->declArray(c+492,"ascon_top lfst_inst genblk1 lfsr_data[6] mask", false,-1, 385,0);
        tracep->declArray(c+505,"ascon_top lfst_inst genblk1 lfsr_data[7] mask", false,-1, 385,0);
        tracep->declArray(c+518,"ascon_top lfst_inst genblk1 lfsr_data[8] mask", false,-1, 385,0);
        tracep->declArray(c+531,"ascon_top lfst_inst genblk1 lfsr_data[9] mask", false,-1, 385,0);
        tracep->declArray(c+544,"ascon_top lfst_inst genblk1 lfsr_data[10] mask", false,-1, 385,0);
        tracep->declArray(c+557,"ascon_top lfst_inst genblk1 lfsr_data[11] mask", false,-1, 385,0);
        tracep->declArray(c+570,"ascon_top lfst_inst genblk1 lfsr_data[12] mask", false,-1, 385,0);
        tracep->declArray(c+583,"ascon_top lfst_inst genblk1 lfsr_data[13] mask", false,-1, 385,0);
        tracep->declArray(c+596,"ascon_top lfst_inst genblk1 lfsr_data[14] mask", false,-1, 385,0);
        tracep->declArray(c+609,"ascon_top lfst_inst genblk1 lfsr_data[15] mask", false,-1, 385,0);
        tracep->declArray(c+622,"ascon_top lfst_inst genblk1 lfsr_data[16] mask", false,-1, 385,0);
        tracep->declArray(c+635,"ascon_top lfst_inst genblk1 lfsr_data[17] mask", false,-1, 385,0);
        tracep->declArray(c+648,"ascon_top lfst_inst genblk1 lfsr_data[18] mask", false,-1, 385,0);
        tracep->declArray(c+661,"ascon_top lfst_inst genblk1 lfsr_data[19] mask", false,-1, 385,0);
        tracep->declArray(c+674,"ascon_top lfst_inst genblk1 lfsr_data[20] mask", false,-1, 385,0);
        tracep->declArray(c+687,"ascon_top lfst_inst genblk1 lfsr_data[21] mask", false,-1, 385,0);
        tracep->declArray(c+700,"ascon_top lfst_inst genblk1 lfsr_data[22] mask", false,-1, 385,0);
        tracep->declArray(c+713,"ascon_top lfst_inst genblk1 lfsr_data[23] mask", false,-1, 385,0);
        tracep->declArray(c+726,"ascon_top lfst_inst genblk1 lfsr_data[24] mask", false,-1, 385,0);
        tracep->declArray(c+739,"ascon_top lfst_inst genblk1 lfsr_data[25] mask", false,-1, 385,0);
        tracep->declArray(c+752,"ascon_top lfst_inst genblk1 lfsr_data[26] mask", false,-1, 385,0);
        tracep->declArray(c+765,"ascon_top lfst_inst genblk1 lfsr_data[27] mask", false,-1, 385,0);
        tracep->declArray(c+778,"ascon_top lfst_inst genblk1 lfsr_data[28] mask", false,-1, 385,0);
        tracep->declArray(c+791,"ascon_top lfst_inst genblk1 lfsr_data[29] mask", false,-1, 385,0);
        tracep->declArray(c+804,"ascon_top lfst_inst genblk1 lfsr_data[30] mask", false,-1, 385,0);
        tracep->declArray(c+817,"ascon_top lfst_inst genblk1 lfsr_data[31] mask", false,-1, 385,0);
        tracep->declArray(c+830,"ascon_top lfst_inst genblk1 lfsr_data[32] mask", false,-1, 385,0);
        tracep->declArray(c+843,"ascon_top lfst_inst genblk1 lfsr_data[33] mask", false,-1, 385,0);
        tracep->declArray(c+856,"ascon_top lfst_inst genblk1 lfsr_data[34] mask", false,-1, 385,0);
        tracep->declArray(c+869,"ascon_top lfst_inst genblk1 lfsr_data[35] mask", false,-1, 385,0);
        tracep->declArray(c+882,"ascon_top lfst_inst genblk1 lfsr_data[36] mask", false,-1, 385,0);
        tracep->declArray(c+895,"ascon_top lfst_inst genblk1 lfsr_data[37] mask", false,-1, 385,0);
        tracep->declArray(c+908,"ascon_top lfst_inst genblk1 lfsr_data[38] mask", false,-1, 385,0);
        tracep->declArray(c+921,"ascon_top lfst_inst genblk1 lfsr_data[39] mask", false,-1, 385,0);
        tracep->declArray(c+934,"ascon_top lfst_inst genblk1 lfsr_data[40] mask", false,-1, 385,0);
        tracep->declArray(c+947,"ascon_top lfst_inst genblk1 lfsr_data[41] mask", false,-1, 385,0);
        tracep->declArray(c+960,"ascon_top lfst_inst genblk1 lfsr_data[42] mask", false,-1, 385,0);
        tracep->declArray(c+973,"ascon_top lfst_inst genblk1 lfsr_data[43] mask", false,-1, 385,0);
        tracep->declArray(c+986,"ascon_top lfst_inst genblk1 lfsr_data[44] mask", false,-1, 385,0);
        tracep->declArray(c+999,"ascon_top lfst_inst genblk1 lfsr_data[45] mask", false,-1, 385,0);
        tracep->declArray(c+1012,"ascon_top lfst_inst genblk1 lfsr_data[46] mask", false,-1, 385,0);
        tracep->declArray(c+1025,"ascon_top lfst_inst genblk1 lfsr_data[47] mask", false,-1, 385,0);
        tracep->declArray(c+1038,"ascon_top lfst_inst genblk1 lfsr_data[48] mask", false,-1, 385,0);
        tracep->declArray(c+1051,"ascon_top lfst_inst genblk1 lfsr_data[49] mask", false,-1, 385,0);
        tracep->declArray(c+1064,"ascon_top lfst_inst genblk1 lfsr_data[50] mask", false,-1, 385,0);
        tracep->declArray(c+1077,"ascon_top lfst_inst genblk1 lfsr_data[51] mask", false,-1, 385,0);
        tracep->declArray(c+1090,"ascon_top lfst_inst genblk1 lfsr_data[52] mask", false,-1, 385,0);
        tracep->declArray(c+1103,"ascon_top lfst_inst genblk1 lfsr_data[53] mask", false,-1, 385,0);
        tracep->declArray(c+1116,"ascon_top lfst_inst genblk1 lfsr_data[54] mask", false,-1, 385,0);
        tracep->declArray(c+1129,"ascon_top lfst_inst genblk1 lfsr_data[55] mask", false,-1, 385,0);
        tracep->declArray(c+1142,"ascon_top lfst_inst genblk1 lfsr_data[56] mask", false,-1, 385,0);
        tracep->declArray(c+1155,"ascon_top lfst_inst genblk1 lfsr_data[57] mask", false,-1, 385,0);
        tracep->declArray(c+1168,"ascon_top lfst_inst genblk1 lfsr_data[58] mask", false,-1, 385,0);
        tracep->declArray(c+1181,"ascon_top lfst_inst genblk1 lfsr_data[59] mask", false,-1, 385,0);
        tracep->declArray(c+1194,"ascon_top lfst_inst genblk1 lfsr_data[60] mask", false,-1, 385,0);
        tracep->declArray(c+1207,"ascon_top lfst_inst genblk1 lfsr_data[61] mask", false,-1, 385,0);
        tracep->declArray(c+1220,"ascon_top lfst_inst genblk1 lfsr_data[62] mask", false,-1, 385,0);
        tracep->declArray(c+1233,"ascon_top lfst_inst genblk1 lfsr_data[63] mask", false,-1, 385,0);
        tracep->declArray(c+1246,"ascon_top lfst_inst genblk1 lfsr_data[64] mask", false,-1, 385,0);
        tracep->declArray(c+1259,"ascon_top lfst_inst genblk1 lfsr_data[65] mask", false,-1, 385,0);
        tracep->declArray(c+1272,"ascon_top lfst_inst genblk1 lfsr_data[66] mask", false,-1, 385,0);
        tracep->declArray(c+1285,"ascon_top lfst_inst genblk1 lfsr_data[67] mask", false,-1, 385,0);
        tracep->declArray(c+1298,"ascon_top lfst_inst genblk1 lfsr_data[68] mask", false,-1, 385,0);
        tracep->declArray(c+1311,"ascon_top lfst_inst genblk1 lfsr_data[69] mask", false,-1, 385,0);
        tracep->declArray(c+1324,"ascon_top lfst_inst genblk1 lfsr_data[70] mask", false,-1, 385,0);
        tracep->declArray(c+1337,"ascon_top lfst_inst genblk1 lfsr_data[71] mask", false,-1, 385,0);
        tracep->declArray(c+1350,"ascon_top lfst_inst genblk1 lfsr_data[72] mask", false,-1, 385,0);
        tracep->declArray(c+1363,"ascon_top lfst_inst genblk1 lfsr_data[73] mask", false,-1, 385,0);
        tracep->declArray(c+1376,"ascon_top lfst_inst genblk1 lfsr_data[74] mask", false,-1, 385,0);
        tracep->declArray(c+1389,"ascon_top lfst_inst genblk1 lfsr_data[75] mask", false,-1, 385,0);
        tracep->declArray(c+1402,"ascon_top lfst_inst genblk1 lfsr_data[76] mask", false,-1, 385,0);
        tracep->declArray(c+1415,"ascon_top lfst_inst genblk1 lfsr_data[77] mask", false,-1, 385,0);
        tracep->declArray(c+1428,"ascon_top lfst_inst genblk1 lfsr_data[78] mask", false,-1, 385,0);
        tracep->declArray(c+1441,"ascon_top lfst_inst genblk1 lfsr_data[79] mask", false,-1, 385,0);
        tracep->declArray(c+1454,"ascon_top lfst_inst genblk1 lfsr_data[80] mask", false,-1, 385,0);
        tracep->declArray(c+1467,"ascon_top lfst_inst genblk1 lfsr_data[81] mask", false,-1, 385,0);
        tracep->declArray(c+1480,"ascon_top lfst_inst genblk1 lfsr_data[82] mask", false,-1, 385,0);
        tracep->declArray(c+1493,"ascon_top lfst_inst genblk1 lfsr_data[83] mask", false,-1, 385,0);
        tracep->declArray(c+1506,"ascon_top lfst_inst genblk1 lfsr_data[84] mask", false,-1, 385,0);
        tracep->declArray(c+1519,"ascon_top lfst_inst genblk1 lfsr_data[85] mask", false,-1, 385,0);
        tracep->declArray(c+1532,"ascon_top lfst_inst genblk1 lfsr_data[86] mask", false,-1, 385,0);
        tracep->declArray(c+1545,"ascon_top lfst_inst genblk1 lfsr_data[87] mask", false,-1, 385,0);
        tracep->declArray(c+1558,"ascon_top lfst_inst genblk1 lfsr_data[88] mask", false,-1, 385,0);
        tracep->declArray(c+1571,"ascon_top lfst_inst genblk1 lfsr_data[89] mask", false,-1, 385,0);
        tracep->declArray(c+1584,"ascon_top lfst_inst genblk1 lfsr_data[90] mask", false,-1, 385,0);
        tracep->declArray(c+1597,"ascon_top lfst_inst genblk1 lfsr_data[91] mask", false,-1, 385,0);
        tracep->declArray(c+1610,"ascon_top lfst_inst genblk1 lfsr_data[92] mask", false,-1, 385,0);
        tracep->declArray(c+1623,"ascon_top lfst_inst genblk1 lfsr_data[93] mask", false,-1, 385,0);
        tracep->declArray(c+1636,"ascon_top lfst_inst genblk1 lfsr_data[94] mask", false,-1, 385,0);
        tracep->declArray(c+1649,"ascon_top lfst_inst genblk1 lfsr_data[95] mask", false,-1, 385,0);
        tracep->declArray(c+1662,"ascon_top lfst_inst genblk1 lfsr_data[96] mask", false,-1, 385,0);
        tracep->declArray(c+1675,"ascon_top lfst_inst genblk1 lfsr_data[97] mask", false,-1, 385,0);
        tracep->declArray(c+1688,"ascon_top lfst_inst genblk1 lfsr_data[98] mask", false,-1, 385,0);
        tracep->declArray(c+1701,"ascon_top lfst_inst genblk1 lfsr_data[99] mask", false,-1, 385,0);
        tracep->declArray(c+1714,"ascon_top lfst_inst genblk1 lfsr_data[100] mask", false,-1, 385,0);
        tracep->declArray(c+1727,"ascon_top lfst_inst genblk1 lfsr_data[101] mask", false,-1, 385,0);
        tracep->declArray(c+1740,"ascon_top lfst_inst genblk1 lfsr_data[102] mask", false,-1, 385,0);
        tracep->declArray(c+1753,"ascon_top lfst_inst genblk1 lfsr_data[103] mask", false,-1, 385,0);
        tracep->declArray(c+1766,"ascon_top lfst_inst genblk1 lfsr_data[104] mask", false,-1, 385,0);
        tracep->declArray(c+1779,"ascon_top lfst_inst genblk1 lfsr_data[105] mask", false,-1, 385,0);
        tracep->declArray(c+1792,"ascon_top lfst_inst genblk1 lfsr_data[106] mask", false,-1, 385,0);
        tracep->declArray(c+1805,"ascon_top lfst_inst genblk1 lfsr_data[107] mask", false,-1, 385,0);
        tracep->declArray(c+1818,"ascon_top lfst_inst genblk1 lfsr_data[108] mask", false,-1, 385,0);
        tracep->declArray(c+1831,"ascon_top lfst_inst genblk1 lfsr_data[109] mask", false,-1, 385,0);
        tracep->declArray(c+1844,"ascon_top lfst_inst genblk1 lfsr_data[110] mask", false,-1, 385,0);
        tracep->declArray(c+1857,"ascon_top lfst_inst genblk1 lfsr_data[111] mask", false,-1, 385,0);
        tracep->declArray(c+1870,"ascon_top lfst_inst genblk1 lfsr_data[112] mask", false,-1, 385,0);
        tracep->declArray(c+1883,"ascon_top lfst_inst genblk1 lfsr_data[113] mask", false,-1, 385,0);
        tracep->declArray(c+1896,"ascon_top lfst_inst genblk1 lfsr_data[114] mask", false,-1, 385,0);
        tracep->declArray(c+1909,"ascon_top lfst_inst genblk1 lfsr_data[115] mask", false,-1, 385,0);
        tracep->declArray(c+1922,"ascon_top lfst_inst genblk1 lfsr_data[116] mask", false,-1, 385,0);
        tracep->declArray(c+1935,"ascon_top lfst_inst genblk1 lfsr_data[117] mask", false,-1, 385,0);
        tracep->declArray(c+1948,"ascon_top lfst_inst genblk1 lfsr_data[118] mask", false,-1, 385,0);
        tracep->declArray(c+1961,"ascon_top lfst_inst genblk1 lfsr_data[119] mask", false,-1, 385,0);
        tracep->declArray(c+1974,"ascon_top lfst_inst genblk1 lfsr_data[120] mask", false,-1, 385,0);
        tracep->declArray(c+1987,"ascon_top lfst_inst genblk1 lfsr_data[121] mask", false,-1, 385,0);
        tracep->declArray(c+2000,"ascon_top lfst_inst genblk1 lfsr_data[122] mask", false,-1, 385,0);
        tracep->declArray(c+2013,"ascon_top lfst_inst genblk1 lfsr_data[123] mask", false,-1, 385,0);
        tracep->declArray(c+2026,"ascon_top lfst_inst genblk1 lfsr_data[124] mask", false,-1, 385,0);
        tracep->declArray(c+2039,"ascon_top lfst_inst genblk1 lfsr_data[125] mask", false,-1, 385,0);
        tracep->declArray(c+2052,"ascon_top lfst_inst genblk1 lfsr_data[126] mask", false,-1, 385,0);
        tracep->declArray(c+2065,"ascon_top lfst_inst genblk1 lfsr_data[127] mask", false,-1, 385,0);
        tracep->declArray(c+2078,"ascon_top lfst_inst genblk1 lfsr_data[128] mask", false,-1, 385,0);
        tracep->declArray(c+2091,"ascon_top lfst_inst genblk1 lfsr_data[129] mask", false,-1, 385,0);
        tracep->declArray(c+2104,"ascon_top lfst_inst genblk1 lfsr_data[130] mask", false,-1, 385,0);
        tracep->declArray(c+2117,"ascon_top lfst_inst genblk1 lfsr_data[131] mask", false,-1, 385,0);
        tracep->declArray(c+2130,"ascon_top lfst_inst genblk1 lfsr_data[132] mask", false,-1, 385,0);
        tracep->declArray(c+2143,"ascon_top lfst_inst genblk1 lfsr_data[133] mask", false,-1, 385,0);
        tracep->declArray(c+2156,"ascon_top lfst_inst genblk1 lfsr_data[134] mask", false,-1, 385,0);
        tracep->declArray(c+2169,"ascon_top lfst_inst genblk1 lfsr_data[135] mask", false,-1, 385,0);
        tracep->declArray(c+2182,"ascon_top lfst_inst genblk1 lfsr_data[136] mask", false,-1, 385,0);
        tracep->declArray(c+2195,"ascon_top lfst_inst genblk1 lfsr_data[137] mask", false,-1, 385,0);
        tracep->declArray(c+2208,"ascon_top lfst_inst genblk1 lfsr_data[138] mask", false,-1, 385,0);
        tracep->declArray(c+2221,"ascon_top lfst_inst genblk1 lfsr_data[139] mask", false,-1, 385,0);
        tracep->declArray(c+2234,"ascon_top lfst_inst genblk1 lfsr_data[140] mask", false,-1, 385,0);
        tracep->declArray(c+2247,"ascon_top lfst_inst genblk1 lfsr_data[141] mask", false,-1, 385,0);
        tracep->declArray(c+2260,"ascon_top lfst_inst genblk1 lfsr_data[142] mask", false,-1, 385,0);
        tracep->declArray(c+2273,"ascon_top lfst_inst genblk1 lfsr_data[143] mask", false,-1, 385,0);
        tracep->declArray(c+2286,"ascon_top lfst_inst genblk1 lfsr_data[144] mask", false,-1, 385,0);
        tracep->declArray(c+2299,"ascon_top lfst_inst genblk1 lfsr_data[145] mask", false,-1, 385,0);
        tracep->declArray(c+2312,"ascon_top lfst_inst genblk1 lfsr_data[146] mask", false,-1, 385,0);
        tracep->declArray(c+2325,"ascon_top lfst_inst genblk1 lfsr_data[147] mask", false,-1, 385,0);
        tracep->declArray(c+2338,"ascon_top lfst_inst genblk1 lfsr_data[148] mask", false,-1, 385,0);
        tracep->declArray(c+2351,"ascon_top lfst_inst genblk1 lfsr_data[149] mask", false,-1, 385,0);
        tracep->declArray(c+2364,"ascon_top lfst_inst genblk1 lfsr_data[150] mask", false,-1, 385,0);
        tracep->declArray(c+2377,"ascon_top lfst_inst genblk1 lfsr_data[151] mask", false,-1, 385,0);
        tracep->declArray(c+2390,"ascon_top lfst_inst genblk1 lfsr_data[152] mask", false,-1, 385,0);
        tracep->declArray(c+2403,"ascon_top lfst_inst genblk1 lfsr_data[153] mask", false,-1, 385,0);
        tracep->declArray(c+2416,"ascon_top lfst_inst genblk1 lfsr_data[154] mask", false,-1, 385,0);
        tracep->declArray(c+2429,"ascon_top lfst_inst genblk1 lfsr_data[155] mask", false,-1, 385,0);
        tracep->declArray(c+2442,"ascon_top lfst_inst genblk1 lfsr_data[156] mask", false,-1, 385,0);
        tracep->declArray(c+2455,"ascon_top lfst_inst genblk1 lfsr_data[157] mask", false,-1, 385,0);
        tracep->declArray(c+2468,"ascon_top lfst_inst genblk1 lfsr_data[158] mask", false,-1, 385,0);
        tracep->declArray(c+2481,"ascon_top lfst_inst genblk1 lfsr_data[159] mask", false,-1, 385,0);
        tracep->declArray(c+2494,"ascon_top lfst_inst genblk1 lfsr_data[160] mask", false,-1, 385,0);
        tracep->declArray(c+2507,"ascon_top lfst_inst genblk1 lfsr_data[161] mask", false,-1, 385,0);
        tracep->declArray(c+2520,"ascon_top lfst_inst genblk1 lfsr_data[162] mask", false,-1, 385,0);
        tracep->declArray(c+2533,"ascon_top lfst_inst genblk1 lfsr_data[163] mask", false,-1, 385,0);
        tracep->declArray(c+2546,"ascon_top lfst_inst genblk1 lfsr_data[164] mask", false,-1, 385,0);
        tracep->declArray(c+2559,"ascon_top lfst_inst genblk1 lfsr_data[165] mask", false,-1, 385,0);
        tracep->declArray(c+2572,"ascon_top lfst_inst genblk1 lfsr_data[166] mask", false,-1, 385,0);
        tracep->declArray(c+2585,"ascon_top lfst_inst genblk1 lfsr_data[167] mask", false,-1, 385,0);
        tracep->declArray(c+2598,"ascon_top lfst_inst genblk1 lfsr_data[168] mask", false,-1, 385,0);
        tracep->declArray(c+2611,"ascon_top lfst_inst genblk1 lfsr_data[169] mask", false,-1, 385,0);
        tracep->declArray(c+2624,"ascon_top lfst_inst genblk1 lfsr_data[170] mask", false,-1, 385,0);
        tracep->declArray(c+2637,"ascon_top lfst_inst genblk1 lfsr_data[171] mask", false,-1, 385,0);
        tracep->declArray(c+2650,"ascon_top lfst_inst genblk1 lfsr_data[172] mask", false,-1, 385,0);
        tracep->declArray(c+2663,"ascon_top lfst_inst genblk1 lfsr_data[173] mask", false,-1, 385,0);
        tracep->declArray(c+2676,"ascon_top lfst_inst genblk1 lfsr_data[174] mask", false,-1, 385,0);
        tracep->declArray(c+2689,"ascon_top lfst_inst genblk1 lfsr_data[175] mask", false,-1, 385,0);
        tracep->declArray(c+2702,"ascon_top lfst_inst genblk1 lfsr_data[176] mask", false,-1, 385,0);
        tracep->declArray(c+2715,"ascon_top lfst_inst genblk1 lfsr_data[177] mask", false,-1, 385,0);
        tracep->declArray(c+2728,"ascon_top lfst_inst genblk1 lfsr_data[178] mask", false,-1, 385,0);
        tracep->declArray(c+2741,"ascon_top lfst_inst genblk1 lfsr_data[179] mask", false,-1, 385,0);
        tracep->declArray(c+2754,"ascon_top lfst_inst genblk1 lfsr_data[180] mask", false,-1, 385,0);
        tracep->declArray(c+2767,"ascon_top lfst_inst genblk1 lfsr_data[181] mask", false,-1, 385,0);
        tracep->declArray(c+2780,"ascon_top lfst_inst genblk1 lfsr_data[182] mask", false,-1, 385,0);
        tracep->declArray(c+2793,"ascon_top lfst_inst genblk1 lfsr_data[183] mask", false,-1, 385,0);
        tracep->declArray(c+2806,"ascon_top lfst_inst genblk1 lfsr_data[184] mask", false,-1, 385,0);
        tracep->declArray(c+2819,"ascon_top lfst_inst genblk1 lfsr_data[185] mask", false,-1, 385,0);
        tracep->declArray(c+2832,"ascon_top lfst_inst genblk1 lfsr_data[186] mask", false,-1, 385,0);
        tracep->declArray(c+2845,"ascon_top lfst_inst genblk1 lfsr_data[187] mask", false,-1, 385,0);
        tracep->declArray(c+2858,"ascon_top lfst_inst genblk1 lfsr_data[188] mask", false,-1, 385,0);
        tracep->declArray(c+2871,"ascon_top lfst_inst genblk1 lfsr_data[189] mask", false,-1, 385,0);
        tracep->declArray(c+2884,"ascon_top lfst_inst genblk1 lfsr_data[190] mask", false,-1, 385,0);
        tracep->declArray(c+2897,"ascon_top lfst_inst genblk1 lfsr_data[191] mask", false,-1, 385,0);
        tracep->declArray(c+2910,"ascon_top lfst_inst genblk1 lfsr_data[192] mask", false,-1, 385,0);
        tracep->declArray(c+2923,"ascon_top lfst_inst genblk1 lfsr_data[193] mask", false,-1, 385,0);
        tracep->declArray(c+2936,"ascon_top lfst_inst genblk1 lfsr_data[194] mask", false,-1, 385,0);
        tracep->declArray(c+2949,"ascon_top lfst_inst genblk1 lfsr_data[195] mask", false,-1, 385,0);
        tracep->declArray(c+2962,"ascon_top lfst_inst genblk1 lfsr_data[196] mask", false,-1, 385,0);
        tracep->declArray(c+2975,"ascon_top lfst_inst genblk1 lfsr_data[197] mask", false,-1, 385,0);
        tracep->declArray(c+2988,"ascon_top lfst_inst genblk1 lfsr_data[198] mask", false,-1, 385,0);
        tracep->declArray(c+3001,"ascon_top lfst_inst genblk1 lfsr_data[199] mask", false,-1, 385,0);
        tracep->declArray(c+3014,"ascon_top lfst_inst genblk1 lfsr_data[200] mask", false,-1, 385,0);
        tracep->declArray(c+3027,"ascon_top lfst_inst genblk1 lfsr_data[201] mask", false,-1, 385,0);
        tracep->declArray(c+3040,"ascon_top lfst_inst genblk1 lfsr_data[202] mask", false,-1, 385,0);
        tracep->declArray(c+3053,"ascon_top lfst_inst genblk1 lfsr_data[203] mask", false,-1, 385,0);
        tracep->declArray(c+3066,"ascon_top lfst_inst genblk1 lfsr_data[204] mask", false,-1, 385,0);
        tracep->declArray(c+3079,"ascon_top lfst_inst genblk1 lfsr_data[205] mask", false,-1, 385,0);
        tracep->declArray(c+3092,"ascon_top lfst_inst genblk1 lfsr_data[206] mask", false,-1, 385,0);
        tracep->declArray(c+3105,"ascon_top lfst_inst genblk1 lfsr_data[207] mask", false,-1, 385,0);
        tracep->declArray(c+3118,"ascon_top lfst_inst genblk1 lfsr_data[208] mask", false,-1, 385,0);
        tracep->declArray(c+3131,"ascon_top lfst_inst genblk1 lfsr_data[209] mask", false,-1, 385,0);
        tracep->declArray(c+3144,"ascon_top lfst_inst genblk1 lfsr_data[210] mask", false,-1, 385,0);
        tracep->declArray(c+3157,"ascon_top lfst_inst genblk1 lfsr_data[211] mask", false,-1, 385,0);
        tracep->declArray(c+3170,"ascon_top lfst_inst genblk1 lfsr_data[212] mask", false,-1, 385,0);
        tracep->declArray(c+3183,"ascon_top lfst_inst genblk1 lfsr_data[213] mask", false,-1, 385,0);
        tracep->declArray(c+3196,"ascon_top lfst_inst genblk1 lfsr_data[214] mask", false,-1, 385,0);
        tracep->declArray(c+3209,"ascon_top lfst_inst genblk1 lfsr_data[215] mask", false,-1, 385,0);
        tracep->declArray(c+3222,"ascon_top lfst_inst genblk1 lfsr_data[216] mask", false,-1, 385,0);
        tracep->declArray(c+3235,"ascon_top lfst_inst genblk1 lfsr_data[217] mask", false,-1, 385,0);
        tracep->declArray(c+3248,"ascon_top lfst_inst genblk1 lfsr_data[218] mask", false,-1, 385,0);
        tracep->declArray(c+3261,"ascon_top lfst_inst genblk1 lfsr_data[219] mask", false,-1, 385,0);
        tracep->declArray(c+3274,"ascon_top lfst_inst genblk1 lfsr_data[220] mask", false,-1, 385,0);
        tracep->declArray(c+3287,"ascon_top lfst_inst genblk1 lfsr_data[221] mask", false,-1, 385,0);
        tracep->declArray(c+3300,"ascon_top lfst_inst genblk1 lfsr_data[222] mask", false,-1, 385,0);
        tracep->declArray(c+3313,"ascon_top lfst_inst genblk1 lfsr_data[223] mask", false,-1, 385,0);
        tracep->declArray(c+3326,"ascon_top lfst_inst genblk1 lfsr_data[224] mask", false,-1, 385,0);
        tracep->declArray(c+3339,"ascon_top lfst_inst genblk1 lfsr_data[225] mask", false,-1, 385,0);
        tracep->declArray(c+3352,"ascon_top lfst_inst genblk1 lfsr_data[226] mask", false,-1, 385,0);
        tracep->declArray(c+3365,"ascon_top lfst_inst genblk1 lfsr_data[227] mask", false,-1, 385,0);
        tracep->declArray(c+3378,"ascon_top lfst_inst genblk1 lfsr_data[228] mask", false,-1, 385,0);
        tracep->declArray(c+3391,"ascon_top lfst_inst genblk1 lfsr_data[229] mask", false,-1, 385,0);
        tracep->declArray(c+3404,"ascon_top lfst_inst genblk1 lfsr_data[230] mask", false,-1, 385,0);
        tracep->declArray(c+3417,"ascon_top lfst_inst genblk1 lfsr_data[231] mask", false,-1, 385,0);
        tracep->declArray(c+3430,"ascon_top lfst_inst genblk1 lfsr_data[232] mask", false,-1, 385,0);
        tracep->declArray(c+3443,"ascon_top lfst_inst genblk1 lfsr_data[233] mask", false,-1, 385,0);
        tracep->declArray(c+3456,"ascon_top lfst_inst genblk1 lfsr_data[234] mask", false,-1, 385,0);
        tracep->declArray(c+3469,"ascon_top lfst_inst genblk1 lfsr_data[235] mask", false,-1, 385,0);
        tracep->declArray(c+3482,"ascon_top lfst_inst genblk1 lfsr_data[236] mask", false,-1, 385,0);
        tracep->declArray(c+3495,"ascon_top lfst_inst genblk1 lfsr_data[237] mask", false,-1, 385,0);
        tracep->declArray(c+3508,"ascon_top lfst_inst genblk1 lfsr_data[238] mask", false,-1, 385,0);
        tracep->declArray(c+3521,"ascon_top lfst_inst genblk1 lfsr_data[239] mask", false,-1, 385,0);
        tracep->declArray(c+3534,"ascon_top lfst_inst genblk1 lfsr_data[240] mask", false,-1, 385,0);
        tracep->declArray(c+3547,"ascon_top lfst_inst genblk1 lfsr_data[241] mask", false,-1, 385,0);
        tracep->declArray(c+3560,"ascon_top lfst_inst genblk1 lfsr_data[242] mask", false,-1, 385,0);
        tracep->declArray(c+3573,"ascon_top lfst_inst genblk1 lfsr_data[243] mask", false,-1, 385,0);
        tracep->declArray(c+3586,"ascon_top lfst_inst genblk1 lfsr_data[244] mask", false,-1, 385,0);
        tracep->declArray(c+3599,"ascon_top lfst_inst genblk1 lfsr_data[245] mask", false,-1, 385,0);
        tracep->declArray(c+3612,"ascon_top lfst_inst genblk1 lfsr_data[246] mask", false,-1, 385,0);
        tracep->declArray(c+3625,"ascon_top lfst_inst genblk1 lfsr_data[247] mask", false,-1, 385,0);
        tracep->declArray(c+3638,"ascon_top lfst_inst genblk1 lfsr_data[248] mask", false,-1, 385,0);
        tracep->declArray(c+3651,"ascon_top lfst_inst genblk1 lfsr_data[249] mask", false,-1, 385,0);
        tracep->declArray(c+3664,"ascon_top lfst_inst genblk1 lfsr_data[250] mask", false,-1, 385,0);
        tracep->declArray(c+3677,"ascon_top lfst_inst genblk1 lfsr_data[251] mask", false,-1, 385,0);
        tracep->declArray(c+3690,"ascon_top lfst_inst genblk1 lfsr_data[252] mask", false,-1, 385,0);
        tracep->declArray(c+3703,"ascon_top lfst_inst genblk1 lfsr_data[253] mask", false,-1, 385,0);
        tracep->declArray(c+3716,"ascon_top lfst_inst genblk1 lfsr_data[254] mask", false,-1, 385,0);
        tracep->declArray(c+3729,"ascon_top lfst_inst genblk1 lfsr_data[255] mask", false,-1, 385,0);
        tracep->declArray(c+3742,"ascon_top lfst_inst genblk1 lfsr_data[256] mask", false,-1, 385,0);
        tracep->declArray(c+3755,"ascon_top lfst_inst genblk1 lfsr_data[257] mask", false,-1, 385,0);
        tracep->declArray(c+3768,"ascon_top lfst_inst genblk1 lfsr_data[258] mask", false,-1, 385,0);
        tracep->declArray(c+3781,"ascon_top lfst_inst genblk1 lfsr_data[259] mask", false,-1, 385,0);
        tracep->declArray(c+3794,"ascon_top lfst_inst genblk1 lfsr_data[260] mask", false,-1, 385,0);
        tracep->declArray(c+3807,"ascon_top lfst_inst genblk1 lfsr_data[261] mask", false,-1, 385,0);
        tracep->declArray(c+3820,"ascon_top lfst_inst genblk1 lfsr_data[262] mask", false,-1, 385,0);
        tracep->declArray(c+3833,"ascon_top lfst_inst genblk1 lfsr_data[263] mask", false,-1, 385,0);
        tracep->declArray(c+3846,"ascon_top lfst_inst genblk1 lfsr_data[264] mask", false,-1, 385,0);
        tracep->declArray(c+3859,"ascon_top lfst_inst genblk1 lfsr_data[265] mask", false,-1, 385,0);
        tracep->declArray(c+3872,"ascon_top lfst_inst genblk1 lfsr_data[266] mask", false,-1, 385,0);
        tracep->declArray(c+3885,"ascon_top lfst_inst genblk1 lfsr_data[267] mask", false,-1, 385,0);
        tracep->declArray(c+3898,"ascon_top lfst_inst genblk1 lfsr_data[268] mask", false,-1, 385,0);
        tracep->declArray(c+3911,"ascon_top lfst_inst genblk1 lfsr_data[269] mask", false,-1, 385,0);
        tracep->declArray(c+3924,"ascon_top lfst_inst genblk1 lfsr_data[270] mask", false,-1, 385,0);
        tracep->declArray(c+3937,"ascon_top lfst_inst genblk1 lfsr_data[271] mask", false,-1, 385,0);
        tracep->declArray(c+3950,"ascon_top lfst_inst genblk1 lfsr_data[272] mask", false,-1, 385,0);
        tracep->declArray(c+3963,"ascon_top lfst_inst genblk1 lfsr_data[273] mask", false,-1, 385,0);
        tracep->declArray(c+3976,"ascon_top lfst_inst genblk1 lfsr_data[274] mask", false,-1, 385,0);
        tracep->declArray(c+3989,"ascon_top lfst_inst genblk1 lfsr_data[275] mask", false,-1, 385,0);
        tracep->declArray(c+4002,"ascon_top lfst_inst genblk1 lfsr_data[276] mask", false,-1, 385,0);
        tracep->declArray(c+4015,"ascon_top lfst_inst genblk1 lfsr_data[277] mask", false,-1, 385,0);
        tracep->declArray(c+4028,"ascon_top lfst_inst genblk1 lfsr_data[278] mask", false,-1, 385,0);
        tracep->declArray(c+4041,"ascon_top lfst_inst genblk1 lfsr_data[279] mask", false,-1, 385,0);
        tracep->declArray(c+4054,"ascon_top lfst_inst genblk1 lfsr_data[280] mask", false,-1, 385,0);
        tracep->declArray(c+4067,"ascon_top lfst_inst genblk1 lfsr_data[281] mask", false,-1, 385,0);
        tracep->declArray(c+4080,"ascon_top lfst_inst genblk1 lfsr_data[282] mask", false,-1, 385,0);
        tracep->declArray(c+4093,"ascon_top lfst_inst genblk1 lfsr_data[283] mask", false,-1, 385,0);
        tracep->declArray(c+4106,"ascon_top lfst_inst genblk1 lfsr_data[284] mask", false,-1, 385,0);
        tracep->declArray(c+4119,"ascon_top lfst_inst genblk1 lfsr_data[285] mask", false,-1, 385,0);
        tracep->declArray(c+4132,"ascon_top lfst_inst genblk1 lfsr_data[286] mask", false,-1, 385,0);
        tracep->declArray(c+4145,"ascon_top lfst_inst genblk1 lfsr_data[287] mask", false,-1, 385,0);
        tracep->declArray(c+4158,"ascon_top lfst_inst genblk1 lfsr_data[288] mask", false,-1, 385,0);
        tracep->declArray(c+4171,"ascon_top lfst_inst genblk1 lfsr_data[289] mask", false,-1, 385,0);
        tracep->declArray(c+4184,"ascon_top lfst_inst genblk1 lfsr_data[290] mask", false,-1, 385,0);
        tracep->declArray(c+4197,"ascon_top lfst_inst genblk1 lfsr_data[291] mask", false,-1, 385,0);
        tracep->declArray(c+4210,"ascon_top lfst_inst genblk1 lfsr_data[292] mask", false,-1, 385,0);
        tracep->declArray(c+4223,"ascon_top lfst_inst genblk1 lfsr_data[293] mask", false,-1, 385,0);
        tracep->declArray(c+4236,"ascon_top lfst_inst genblk1 lfsr_data[294] mask", false,-1, 385,0);
        tracep->declArray(c+4249,"ascon_top lfst_inst genblk1 lfsr_data[295] mask", false,-1, 385,0);
        tracep->declArray(c+4262,"ascon_top lfst_inst genblk1 lfsr_data[296] mask", false,-1, 385,0);
        tracep->declArray(c+4275,"ascon_top lfst_inst genblk1 lfsr_data[297] mask", false,-1, 385,0);
        tracep->declArray(c+4288,"ascon_top lfst_inst genblk1 lfsr_data[298] mask", false,-1, 385,0);
        tracep->declArray(c+4301,"ascon_top lfst_inst genblk1 lfsr_data[299] mask", false,-1, 385,0);
        tracep->declArray(c+4314,"ascon_top lfst_inst genblk1 lfsr_data[300] mask", false,-1, 385,0);
        tracep->declArray(c+4327,"ascon_top lfst_inst genblk1 lfsr_data[301] mask", false,-1, 385,0);
        tracep->declArray(c+4340,"ascon_top lfst_inst genblk1 lfsr_data[302] mask", false,-1, 385,0);
        tracep->declArray(c+4353,"ascon_top lfst_inst genblk1 lfsr_data[303] mask", false,-1, 385,0);
        tracep->declArray(c+4366,"ascon_top lfst_inst genblk1 lfsr_data[304] mask", false,-1, 385,0);
        tracep->declArray(c+4379,"ascon_top lfst_inst genblk1 lfsr_data[305] mask", false,-1, 385,0);
        tracep->declArray(c+4392,"ascon_top lfst_inst genblk1 lfsr_data[306] mask", false,-1, 385,0);
        tracep->declArray(c+4405,"ascon_top lfst_inst genblk1 lfsr_data[307] mask", false,-1, 385,0);
        tracep->declArray(c+4418,"ascon_top lfst_inst genblk1 lfsr_data[308] mask", false,-1, 385,0);
        tracep->declArray(c+4431,"ascon_top lfst_inst genblk1 lfsr_data[309] mask", false,-1, 385,0);
        tracep->declArray(c+4444,"ascon_top lfst_inst genblk1 lfsr_data[310] mask", false,-1, 385,0);
        tracep->declArray(c+4457,"ascon_top lfst_inst genblk1 lfsr_data[311] mask", false,-1, 385,0);
        tracep->declArray(c+4470,"ascon_top lfst_inst genblk1 lfsr_data[312] mask", false,-1, 385,0);
        tracep->declArray(c+4483,"ascon_top lfst_inst genblk1 lfsr_data[313] mask", false,-1, 385,0);
        tracep->declArray(c+4496,"ascon_top lfst_inst genblk1 lfsr_data[314] mask", false,-1, 385,0);
        tracep->declArray(c+4509,"ascon_top lfst_inst genblk1 lfsr_data[315] mask", false,-1, 385,0);
        tracep->declArray(c+4522,"ascon_top lfst_inst genblk1 lfsr_data[316] mask", false,-1, 385,0);
        tracep->declArray(c+4535,"ascon_top lfst_inst genblk1 lfsr_data[317] mask", false,-1, 385,0);
        tracep->declArray(c+4548,"ascon_top lfst_inst genblk1 lfsr_data[318] mask", false,-1, 385,0);
        tracep->declArray(c+4561,"ascon_top lfst_inst genblk1 lfsr_data[319] mask", false,-1, 385,0);
        tracep->declArray(c+4574,"ascon_top lfst_inst genblk1 lfsr_data[320] mask", false,-1, 385,0);
        tracep->declArray(c+4587,"ascon_top lfst_inst genblk1 lfsr_data[321] mask", false,-1, 385,0);
        tracep->declArray(c+4600,"ascon_top lfst_inst genblk1 lfsr_data[322] mask", false,-1, 385,0);
        tracep->declArray(c+4613,"ascon_top lfst_inst genblk1 lfsr_data[323] mask", false,-1, 385,0);
        tracep->declArray(c+4626,"ascon_top lfst_inst genblk1 lfsr_data[324] mask", false,-1, 385,0);
        tracep->declArray(c+4639,"ascon_top lfst_inst genblk1 lfsr_data[325] mask", false,-1, 385,0);
        tracep->declArray(c+4652,"ascon_top lfst_inst genblk1 lfsr_data[326] mask", false,-1, 385,0);
        tracep->declArray(c+4665,"ascon_top lfst_inst genblk1 lfsr_data[327] mask", false,-1, 385,0);
        tracep->declArray(c+4678,"ascon_top lfst_inst genblk1 lfsr_data[328] mask", false,-1, 385,0);
        tracep->declArray(c+4691,"ascon_top lfst_inst genblk1 lfsr_data[329] mask", false,-1, 385,0);
        tracep->declArray(c+4704,"ascon_top lfst_inst genblk1 lfsr_data[330] mask", false,-1, 385,0);
        tracep->declArray(c+4717,"ascon_top lfst_inst genblk1 lfsr_data[331] mask", false,-1, 385,0);
        tracep->declArray(c+4730,"ascon_top lfst_inst genblk1 lfsr_data[332] mask", false,-1, 385,0);
        tracep->declArray(c+4743,"ascon_top lfst_inst genblk1 lfsr_data[333] mask", false,-1, 385,0);
        tracep->declArray(c+4756,"ascon_top lfst_inst genblk1 lfsr_data[334] mask", false,-1, 385,0);
        tracep->declArray(c+4769,"ascon_top lfst_inst genblk1 lfsr_data[335] mask", false,-1, 385,0);
        tracep->declArray(c+4782,"ascon_top lfst_inst genblk1 lfsr_data[336] mask", false,-1, 385,0);
        tracep->declArray(c+4795,"ascon_top lfst_inst genblk1 lfsr_data[337] mask", false,-1, 385,0);
        tracep->declArray(c+4808,"ascon_top lfst_inst genblk1 lfsr_data[338] mask", false,-1, 385,0);
        tracep->declArray(c+4821,"ascon_top lfst_inst genblk1 lfsr_data[339] mask", false,-1, 385,0);
        tracep->declArray(c+4834,"ascon_top lfst_inst genblk1 lfsr_data[340] mask", false,-1, 385,0);
        tracep->declArray(c+4847,"ascon_top lfst_inst genblk1 lfsr_data[341] mask", false,-1, 385,0);
        tracep->declArray(c+4860,"ascon_top lfst_inst genblk1 lfsr_data[342] mask", false,-1, 385,0);
        tracep->declArray(c+4873,"ascon_top lfst_inst genblk1 lfsr_data[343] mask", false,-1, 385,0);
        tracep->declArray(c+4886,"ascon_top lfst_inst genblk1 lfsr_data[344] mask", false,-1, 385,0);
        tracep->declArray(c+4899,"ascon_top lfst_inst genblk1 lfsr_data[345] mask", false,-1, 385,0);
        tracep->declArray(c+4912,"ascon_top lfst_inst genblk1 lfsr_data[346] mask", false,-1, 385,0);
        tracep->declArray(c+4925,"ascon_top lfst_inst genblk1 lfsr_data[347] mask", false,-1, 385,0);
        tracep->declArray(c+4938,"ascon_top lfst_inst genblk1 lfsr_data[348] mask", false,-1, 385,0);
        tracep->declArray(c+4951,"ascon_top lfst_inst genblk1 lfsr_data[349] mask", false,-1, 385,0);
        tracep->declArray(c+4964,"ascon_top lfst_inst genblk1 lfsr_data[350] mask", false,-1, 385,0);
        tracep->declArray(c+4977,"ascon_top lfst_inst genblk1 lfsr_data[351] mask", false,-1, 385,0);
        tracep->declArray(c+4990,"ascon_top lfst_inst genblk1 lfsr_data[352] mask", false,-1, 385,0);
        tracep->declArray(c+5003,"ascon_top lfst_inst genblk1 lfsr_data[353] mask", false,-1, 385,0);
        tracep->declArray(c+5016,"ascon_top lfst_inst genblk1 lfsr_data[354] mask", false,-1, 385,0);
        tracep->declBit(c+6295,"ascon_top mealy_fsm clk", false,-1);
        tracep->declBit(c+6296,"ascon_top mealy_fsm reset_n", false,-1);
        tracep->declBit(c+6297,"ascon_top mealy_fsm start", false,-1);
        tracep->declBit(c+6302,"ascon_top mealy_fsm key_valid", false,-1);
        tracep->declBit(c+6313,"ascon_top mealy_fsm valid_data_in", false,-1);
        tracep->declBit(c+6314,"ascon_top mealy_fsm last_block", false,-1);
        tracep->declBus(c+6315,"ascon_top mealy_fsm valid_bytes", false,-1, 4,0);
        tracep->declBit(c+6316,"ascon_top mealy_fsm EOT", false,-1);
        tracep->declBit(c+6322,"ascon_top mealy_fsm done", false,-1);
        tracep->declBit(c+6323,"ascon_top mealy_fsm tag_valid", false,-1);
        tracep->declBit(c+5056,"ascon_top mealy_fsm shift_en", false,-1);
        tracep->declBit(c+5681,"ascon_top mealy_fsm write_en", false,-1);
        tracep->declBit(c+5057,"ascon_top mealy_fsm shift_type", false,-1);
        tracep->declBit(c+5058,"ascon_top mealy_fsm last_cycle", false,-1);
        tracep->declBit(c+5059,"ascon_top mealy_fsm reg_key1_load", false,-1);
        tracep->declBit(c+5060,"ascon_top mealy_fsm reg_key2_load", false,-1);
        tracep->declBit(c+5061,"ascon_top mealy_fsm sel_mux_linear_diffusion_out_x3", false,-1);
        tracep->declBit(c+5682,"ascon_top mealy_fsm sel_mux_linear_diffusion_out_x4", false,-1);
        tracep->declBit(c+5683,"ascon_top mealy_fsm sel_init_load", false,-1);
        tracep->declBit(c+5062,"ascon_top mealy_fsm sel_masked_round", false,-1);
        tracep->declBit(c+5684,"ascon_top mealy_fsm sel_padding", false,-1);
        tracep->declBit(c+5063,"ascon_top mealy_fsm sel_xor_signal", false,-1);
        tracep->declBit(c+5685,"ascon_top mealy_fsm sel_absorb_data", false,-1);
        tracep->declBit(c+6317,"ascon_top mealy_fsm ciphertext_valid", false,-1);
        tracep->declBit(c+6328,"ascon_top mealy_fsm ready_for_data", false,-1);
        tracep->declBit(c+5055,"ascon_top mealy_fsm extra_padding_ff", false,-1);
        tracep->declBus(c+5067,"ascon_top mealy_fsm bit_counter", false,-1, 3,0);
        tracep->declBus(c+5066,"ascon_top mealy_fsm round_counter", false,-1, 3,0);
        tracep->declBus(c+6332,"ascon_top mealy_fsm debug_state", false,-1, 4,0);
        tracep->declBit(c+5064,"ascon_top mealy_fsm shift_enable_sipo", false,-1);
        tracep->declBit(c+5065,"ascon_top mealy_fsm last_cycle_sipo", false,-1);
        tracep->declBit(c+5705,"ascon_top mealy_fsm extra_padding", false,-1);
        tracep->declBus(c+5100,"ascon_top mealy_fsm current_state", false,-1, 4,0);
        tracep->declBus(c+5706,"ascon_top mealy_fsm next_state", false,-1, 4,0);
        tracep->declBus(c+5101,"ascon_top mealy_fsm number_bits", false,-1, 3,0);
        tracep->declBus(c+5102,"ascon_top mealy_fsm number_round", false,-1, 3,0);
        tracep->declBit(c+5707,"ascon_top mealy_fsm last_block_process", false,-1);
        tracep->declBit(c+5103,"ascon_top mealy_fsm last_block_process_ff", false,-1);
        tracep->declBit(c+5708,"ascon_top mealy_fsm last_block_process_load", false,-1);
        tracep->declBit(c+5709,"ascon_top mealy_fsm extra_padding_load", false,-1);
        tracep->declBit(c+5104,"ascon_top mealy_fsm round_counter_enable", false,-1);
        tracep->declBit(c+5710,"ascon_top mealy_fsm rst_counter_round", false,-1);
        tracep->declBus(c+6387,"ascon_top mealy_fsm BYTE_W", false,-1, 31,0);
        tracep->declBus(c+6388,"ascon_top mealy_fsm unnamedblk1 BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+6389,"ascon_top mealy_fsm unnamedblk1 BIT_COUNTER_MAX", false,-1, 3,0);
        tracep->declBus(c+6388,"ascon_top mealy_fsm unnamedblk2 BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+6389,"ascon_top mealy_fsm unnamedblk2 BIT_COUNTER_MAX", false,-1, 3,0);
        tracep->declBit(c+6295,"ascon_top state_reg clk", false,-1);
        tracep->declBit(c+5681,"ascon_top state_reg write_en", false,-1);
        tracep->declBit(c+5056,"ascon_top state_reg shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top state_reg shift_type", false,-1);
        tracep->declBit(c+5058,"ascon_top state_reg last_cycle", false,-1);
        tracep->declArray(c+5686,"ascon_top state_reg data_in", false,-1, 319,0);
        tracep->declArray(c+5721,"ascon_top state_reg in_shifted_dplus1", false,-1, 319,0);
        tracep->declBus(c+5731,"ascon_top state_reg in_shifted_1bit", false,-1, 29,0);
        tracep->declArray(c+5127,"ascon_top state_reg out_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+5117,"ascon_top state_reg data_out", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+5204+i*2,"ascon_top state_reg state", true,(i+0), 63,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+5711+i*2,"ascon_top state_reg next_state", true,(i+0), 63,0);}}
        tracep->declBus(c+6390,"ascon_top state_reg gen_case2 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+5214,"ascon_top state_reg unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top state_reg gen_caseNoPArMAx unnamedblk5 i", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top key1_reg clk", false,-1);
        tracep->declBit(c+6296,"ascon_top key1_reg reset_n", false,-1);
        tracep->declBit(c+5059,"ascon_top key1_reg load", false,-1);
        tracep->declQuad(c+6298,"ascon_top key1_reg data_in", false,-1, 63,0);
        tracep->declQuad(c+5068,"ascon_top key1_reg data_out", false,-1, 63,0);
        tracep->declQuad(c+5068,"ascon_top key1_reg reg_q", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top key2_reg clk", false,-1);
        tracep->declBit(c+6296,"ascon_top key2_reg reset_n", false,-1);
        tracep->declBit(c+5060,"ascon_top key2_reg load", false,-1);
        tracep->declQuad(c+6300,"ascon_top key2_reg data_in", false,-1, 63,0);
        tracep->declQuad(c+5070,"ascon_top key2_reg data_out", false,-1, 63,0);
        tracep->declQuad(c+5070,"ascon_top key2_reg reg_q", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top sipo_reg_x0_debug clk", false,-1);
        tracep->declBit(c+6296,"ascon_top sipo_reg_x0_debug reset_n", false,-1);
        tracep->declBit(c+5064,"ascon_top sipo_reg_x0_debug shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top sipo_reg_x0_debug shift_type", false,-1);
        tracep->declBit(c+5065,"ascon_top sipo_reg_x0_debug last_cycle", false,-1);
        tracep->declQuad(c+5215,"ascon_top sipo_reg_x0_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+5217,"ascon_top sipo_reg_x0_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+5072,"ascon_top sipo_reg_x0_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+5072,"ascon_top sipo_reg_x0_debug state", false,-1, 63,0);
        tracep->declQuad(c+5867,"ascon_top sipo_reg_x0_debug next_state", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top sipo_reg_x1_debug clk", false,-1);
        tracep->declBit(c+6296,"ascon_top sipo_reg_x1_debug reset_n", false,-1);
        tracep->declBit(c+5064,"ascon_top sipo_reg_x1_debug shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top sipo_reg_x1_debug shift_type", false,-1);
        tracep->declBit(c+5065,"ascon_top sipo_reg_x1_debug last_cycle", false,-1);
        tracep->declQuad(c+5218,"ascon_top sipo_reg_x1_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+5220,"ascon_top sipo_reg_x1_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+5074,"ascon_top sipo_reg_x1_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+5074,"ascon_top sipo_reg_x1_debug state", false,-1, 63,0);
        tracep->declQuad(c+5869,"ascon_top sipo_reg_x1_debug next_state", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top sipo_reg_x2_debug clk", false,-1);
        tracep->declBit(c+6296,"ascon_top sipo_reg_x2_debug reset_n", false,-1);
        tracep->declBit(c+5064,"ascon_top sipo_reg_x2_debug shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top sipo_reg_x2_debug shift_type", false,-1);
        tracep->declBit(c+5065,"ascon_top sipo_reg_x2_debug last_cycle", false,-1);
        tracep->declQuad(c+5871,"ascon_top sipo_reg_x2_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+5873,"ascon_top sipo_reg_x2_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+5076,"ascon_top sipo_reg_x2_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+5076,"ascon_top sipo_reg_x2_debug state", false,-1, 63,0);
        tracep->declQuad(c+5874,"ascon_top sipo_reg_x2_debug next_state", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top sipo_reg_x3_debug clk", false,-1);
        tracep->declBit(c+6296,"ascon_top sipo_reg_x3_debug reset_n", false,-1);
        tracep->declBit(c+5064,"ascon_top sipo_reg_x3_debug shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top sipo_reg_x3_debug shift_type", false,-1);
        tracep->declBit(c+5065,"ascon_top sipo_reg_x3_debug last_cycle", false,-1);
        tracep->declQuad(c+5221,"ascon_top sipo_reg_x3_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+5223,"ascon_top sipo_reg_x3_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+5078,"ascon_top sipo_reg_x3_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+5078,"ascon_top sipo_reg_x3_debug state", false,-1, 63,0);
        tracep->declQuad(c+5876,"ascon_top sipo_reg_x3_debug next_state", false,-1, 63,0);
        tracep->declBit(c+6295,"ascon_top sipo_reg_x4_debug clk", false,-1);
        tracep->declBit(c+6296,"ascon_top sipo_reg_x4_debug reset_n", false,-1);
        tracep->declBit(c+5064,"ascon_top sipo_reg_x4_debug shift_en", false,-1);
        tracep->declBit(c+5057,"ascon_top sipo_reg_x4_debug shift_type", false,-1);
        tracep->declBit(c+5065,"ascon_top sipo_reg_x4_debug last_cycle", false,-1);
        tracep->declQuad(c+5224,"ascon_top sipo_reg_x4_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+5226,"ascon_top sipo_reg_x4_debug in_shifted_1bit", false,-1, 5,0);
        tracep->declQuad(c+5080,"ascon_top sipo_reg_x4_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+5080,"ascon_top sipo_reg_x4_debug state", false,-1, 63,0);
        tracep->declQuad(c+5878,"ascon_top sipo_reg_x4_debug next_state", false,-1, 63,0);
        tracep->declBus(c+6357,"ascon_top share_creator data_in", false,-1, 29,0);
        tracep->declArray(c+5043,"ascon_top share_creator random_masks", false,-1, 299,0);
        tracep->declArray(c+5735,"ascon_top share_creator shares_out", false,-1, 329,0);
        tracep->declBus(c+5880,"ascon_top share_creator temp", false,-1, 29,0);
        tracep->declBus(c+6391,"ascon_top share_creator unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top gen_unsupported gen_sbox[0] u_sbox clk", false,-1);
        tracep->declQuad(c+5227,"ascon_top gen_unsupported gen_sbox[0] u_sbox x_in", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[0] u_sbox fresh_r", false,-1, 54,0);
        tracep->declBit(c+5062,"ascon_top gen_unsupported gen_sbox[0] u_sbox sel_masked_round", false,-1);
        tracep->declQuad(c+5229,"ascon_top gen_unsupported gen_sbox[0] u_sbox x_out", false,-1, 54,0);
        tracep->declQuad(c+5881,"ascon_top gen_unsupported gen_sbox[0] u_sbox x_out_noMask", false,-1, 54,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5231+i*1,"ascon_top gen_unsupported gen_sbox[0] u_sbox x", true,(i+0), 10,0);}}
        tracep->declBus(c+5883,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5884,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5885,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5886,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5887,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5888,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5889,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5890,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5891,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5892,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5893,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5894,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5895,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5896,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5897,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5898,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5899,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5900,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5901,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5902,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5903,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5904,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5905,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5906,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5907,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5908,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5909,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5910,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5911,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5912,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5913,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5914,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5915,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5916,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5917,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5918,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5919,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5920,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5921,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5922,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5923,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5924,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5925,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5926,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5927,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5928,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5929,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5930,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5931,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5932,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5933,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5934,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5935,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5936,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5937,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_bank(4)(10)", false,-1, 10,0);
        tracep->declBus(c+5236,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5237,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5238,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5239,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5240,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5241,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5242,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5243,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5244,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5245,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5246,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5247,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5248,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5249,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5250,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5251,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5252,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5253,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5254,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5255,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5256,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5257,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5258,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5259,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5260,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5261,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5262,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5263,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5264,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5265,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5266,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5267,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5268,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5269,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5270,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5271,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5272,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5273,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5274,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5275,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5276,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5277,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5278,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5279,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5280,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5281,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5282,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5283,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5284,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5285,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5286,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5287,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5288,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5289,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5290,"ascon_top gen_unsupported gen_sbox[0] u_sbox and_result_reg(4)(10)", false,-1, 10,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5291+i*1,"ascon_top gen_unsupported gen_sbox[0] u_sbox y", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5938+i*1,"ascon_top gen_unsupported gen_sbox[0] u_sbox y_noMask", true,(i+0), 10,0);}}
        tracep->declBus(c+5943,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+5944,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 10,0);
        tracep->declBus(c+5945,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 10,0);
        tracep->declBus(c+5946,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 10,0);
        tracep->declBus(c+5947,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 10,0);
        tracep->declBus(c+5948,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5949,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+5296,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5297,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5298,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+5299,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 10,0);
        tracep->declBus(c+5300,"ascon_top gen_unsupported gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top gen_unsupported gen_sbox[1] u_sbox clk", false,-1);
        tracep->declQuad(c+5301,"ascon_top gen_unsupported gen_sbox[1] u_sbox x_in", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[1] u_sbox fresh_r", false,-1, 54,0);
        tracep->declBit(c+5062,"ascon_top gen_unsupported gen_sbox[1] u_sbox sel_masked_round", false,-1);
        tracep->declQuad(c+5303,"ascon_top gen_unsupported gen_sbox[1] u_sbox x_out", false,-1, 54,0);
        tracep->declQuad(c+5950,"ascon_top gen_unsupported gen_sbox[1] u_sbox x_out_noMask", false,-1, 54,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5305+i*1,"ascon_top gen_unsupported gen_sbox[1] u_sbox x", true,(i+0), 10,0);}}
        tracep->declBus(c+5952,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5953,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5954,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5955,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5956,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5957,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5958,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5959,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5960,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5961,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5962,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5963,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5964,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5965,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5966,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5967,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5968,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5969,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5970,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5971,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5972,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5973,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5974,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5975,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5976,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5977,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5978,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5979,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5980,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5981,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5982,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5983,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5984,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5985,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5986,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5987,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5988,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5989,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5990,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5991,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5992,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5993,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5994,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5995,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5996,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5997,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5998,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5999,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(3)", false,-1, 10,0);
        tracep->declBus(c+6000,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(4)", false,-1, 10,0);
        tracep->declBus(c+6001,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(5)", false,-1, 10,0);
        tracep->declBus(c+6002,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(6)", false,-1, 10,0);
        tracep->declBus(c+6003,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(7)", false,-1, 10,0);
        tracep->declBus(c+6004,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(8)", false,-1, 10,0);
        tracep->declBus(c+6005,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(9)", false,-1, 10,0);
        tracep->declBus(c+6006,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_bank(4)(10)", false,-1, 10,0);
        tracep->declBus(c+5310,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5311,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5312,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5313,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5314,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5315,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5316,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5317,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5318,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5319,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5320,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5321,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5322,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5323,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5324,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5325,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5326,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5327,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5328,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5329,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5330,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5331,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5332,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5333,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5334,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5335,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5336,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5337,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5338,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5339,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5340,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5341,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5342,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5343,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5344,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5345,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5346,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5347,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5348,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5349,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5350,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5351,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5352,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5353,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5354,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5355,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5356,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5357,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5358,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5359,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5360,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5361,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5362,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5363,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5364,"ascon_top gen_unsupported gen_sbox[1] u_sbox and_result_reg(4)(10)", false,-1, 10,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5365+i*1,"ascon_top gen_unsupported gen_sbox[1] u_sbox y", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6007+i*1,"ascon_top gen_unsupported gen_sbox[1] u_sbox y_noMask", true,(i+0), 10,0);}}
        tracep->declBus(c+6012,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+6013,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 10,0);
        tracep->declBus(c+6014,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 10,0);
        tracep->declBus(c+6015,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 10,0);
        tracep->declBus(c+6016,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 10,0);
        tracep->declBus(c+6017,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+6018,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+5370,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5371,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5372,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+5373,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 10,0);
        tracep->declBus(c+5374,"ascon_top gen_unsupported gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top gen_unsupported gen_sbox[2] u_sbox clk", false,-1);
        tracep->declQuad(c+5375,"ascon_top gen_unsupported gen_sbox[2] u_sbox x_in", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[2] u_sbox fresh_r", false,-1, 54,0);
        tracep->declBit(c+5062,"ascon_top gen_unsupported gen_sbox[2] u_sbox sel_masked_round", false,-1);
        tracep->declQuad(c+5377,"ascon_top gen_unsupported gen_sbox[2] u_sbox x_out", false,-1, 54,0);
        tracep->declQuad(c+6019,"ascon_top gen_unsupported gen_sbox[2] u_sbox x_out_noMask", false,-1, 54,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5379+i*1,"ascon_top gen_unsupported gen_sbox[2] u_sbox x", true,(i+0), 10,0);}}
        tracep->declBus(c+6021,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(0)", false,-1, 10,0);
        tracep->declBus(c+6022,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(1)", false,-1, 10,0);
        tracep->declBus(c+6023,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(2)", false,-1, 10,0);
        tracep->declBus(c+6024,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(3)", false,-1, 10,0);
        tracep->declBus(c+6025,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(4)", false,-1, 10,0);
        tracep->declBus(c+6026,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(5)", false,-1, 10,0);
        tracep->declBus(c+6027,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(6)", false,-1, 10,0);
        tracep->declBus(c+6028,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(7)", false,-1, 10,0);
        tracep->declBus(c+6029,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(8)", false,-1, 10,0);
        tracep->declBus(c+6030,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(9)", false,-1, 10,0);
        tracep->declBus(c+6031,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(0)(10)", false,-1, 10,0);
        tracep->declBus(c+6032,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(0)", false,-1, 10,0);
        tracep->declBus(c+6033,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(1)", false,-1, 10,0);
        tracep->declBus(c+6034,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(2)", false,-1, 10,0);
        tracep->declBus(c+6035,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(3)", false,-1, 10,0);
        tracep->declBus(c+6036,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(4)", false,-1, 10,0);
        tracep->declBus(c+6037,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(5)", false,-1, 10,0);
        tracep->declBus(c+6038,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(6)", false,-1, 10,0);
        tracep->declBus(c+6039,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(7)", false,-1, 10,0);
        tracep->declBus(c+6040,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(8)", false,-1, 10,0);
        tracep->declBus(c+6041,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(9)", false,-1, 10,0);
        tracep->declBus(c+6042,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(1)(10)", false,-1, 10,0);
        tracep->declBus(c+6043,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(0)", false,-1, 10,0);
        tracep->declBus(c+6044,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(1)", false,-1, 10,0);
        tracep->declBus(c+6045,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(2)", false,-1, 10,0);
        tracep->declBus(c+6046,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(3)", false,-1, 10,0);
        tracep->declBus(c+6047,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(4)", false,-1, 10,0);
        tracep->declBus(c+6048,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(5)", false,-1, 10,0);
        tracep->declBus(c+6049,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(6)", false,-1, 10,0);
        tracep->declBus(c+6050,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(7)", false,-1, 10,0);
        tracep->declBus(c+6051,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(8)", false,-1, 10,0);
        tracep->declBus(c+6052,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(9)", false,-1, 10,0);
        tracep->declBus(c+6053,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(2)(10)", false,-1, 10,0);
        tracep->declBus(c+6054,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(0)", false,-1, 10,0);
        tracep->declBus(c+6055,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(1)", false,-1, 10,0);
        tracep->declBus(c+6056,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(2)", false,-1, 10,0);
        tracep->declBus(c+6057,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(3)", false,-1, 10,0);
        tracep->declBus(c+6058,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(4)", false,-1, 10,0);
        tracep->declBus(c+6059,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(5)", false,-1, 10,0);
        tracep->declBus(c+6060,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(6)", false,-1, 10,0);
        tracep->declBus(c+6061,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(7)", false,-1, 10,0);
        tracep->declBus(c+6062,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(8)", false,-1, 10,0);
        tracep->declBus(c+6063,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(9)", false,-1, 10,0);
        tracep->declBus(c+6064,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(3)(10)", false,-1, 10,0);
        tracep->declBus(c+6065,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(0)", false,-1, 10,0);
        tracep->declBus(c+6066,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(1)", false,-1, 10,0);
        tracep->declBus(c+6067,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(2)", false,-1, 10,0);
        tracep->declBus(c+6068,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(3)", false,-1, 10,0);
        tracep->declBus(c+6069,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(4)", false,-1, 10,0);
        tracep->declBus(c+6070,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(5)", false,-1, 10,0);
        tracep->declBus(c+6071,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(6)", false,-1, 10,0);
        tracep->declBus(c+6072,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(7)", false,-1, 10,0);
        tracep->declBus(c+6073,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(8)", false,-1, 10,0);
        tracep->declBus(c+6074,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(9)", false,-1, 10,0);
        tracep->declBus(c+6075,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_bank(4)(10)", false,-1, 10,0);
        tracep->declBus(c+5384,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5385,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5386,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5387,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5388,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5389,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5390,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5391,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5392,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5393,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5394,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5395,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5396,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5397,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5398,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5399,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5400,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5401,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5402,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5403,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5404,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5405,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5406,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5407,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5408,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5409,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5410,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5411,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5412,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5413,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5414,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5415,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5416,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5417,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5418,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5419,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5420,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5421,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5422,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5423,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5424,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5425,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5426,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5427,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5428,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5429,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5430,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5431,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5432,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5433,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5434,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5435,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5436,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5437,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5438,"ascon_top gen_unsupported gen_sbox[2] u_sbox and_result_reg(4)(10)", false,-1, 10,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5439+i*1,"ascon_top gen_unsupported gen_sbox[2] u_sbox y", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6076+i*1,"ascon_top gen_unsupported gen_sbox[2] u_sbox y_noMask", true,(i+0), 10,0);}}
        tracep->declBus(c+6081,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+6082,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 10,0);
        tracep->declBus(c+6083,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 10,0);
        tracep->declBus(c+6084,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 10,0);
        tracep->declBus(c+6085,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 10,0);
        tracep->declBus(c+6086,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+6087,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+5444,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5445,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5446,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+5447,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 10,0);
        tracep->declBus(c+5448,"ascon_top gen_unsupported gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top gen_unsupported gen_sbox[3] u_sbox clk", false,-1);
        tracep->declQuad(c+5449,"ascon_top gen_unsupported gen_sbox[3] u_sbox x_in", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[3] u_sbox fresh_r", false,-1, 54,0);
        tracep->declBit(c+5062,"ascon_top gen_unsupported gen_sbox[3] u_sbox sel_masked_round", false,-1);
        tracep->declQuad(c+5451,"ascon_top gen_unsupported gen_sbox[3] u_sbox x_out", false,-1, 54,0);
        tracep->declQuad(c+6088,"ascon_top gen_unsupported gen_sbox[3] u_sbox x_out_noMask", false,-1, 54,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5453+i*1,"ascon_top gen_unsupported gen_sbox[3] u_sbox x", true,(i+0), 10,0);}}
        tracep->declBus(c+6090,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(0)", false,-1, 10,0);
        tracep->declBus(c+6091,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(1)", false,-1, 10,0);
        tracep->declBus(c+6092,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(2)", false,-1, 10,0);
        tracep->declBus(c+6093,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(3)", false,-1, 10,0);
        tracep->declBus(c+6094,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(4)", false,-1, 10,0);
        tracep->declBus(c+6095,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(5)", false,-1, 10,0);
        tracep->declBus(c+6096,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(6)", false,-1, 10,0);
        tracep->declBus(c+6097,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(7)", false,-1, 10,0);
        tracep->declBus(c+6098,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(8)", false,-1, 10,0);
        tracep->declBus(c+6099,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(9)", false,-1, 10,0);
        tracep->declBus(c+6100,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(0)(10)", false,-1, 10,0);
        tracep->declBus(c+6101,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(0)", false,-1, 10,0);
        tracep->declBus(c+6102,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(1)", false,-1, 10,0);
        tracep->declBus(c+6103,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(2)", false,-1, 10,0);
        tracep->declBus(c+6104,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(3)", false,-1, 10,0);
        tracep->declBus(c+6105,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(4)", false,-1, 10,0);
        tracep->declBus(c+6106,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(5)", false,-1, 10,0);
        tracep->declBus(c+6107,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(6)", false,-1, 10,0);
        tracep->declBus(c+6108,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(7)", false,-1, 10,0);
        tracep->declBus(c+6109,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(8)", false,-1, 10,0);
        tracep->declBus(c+6110,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(9)", false,-1, 10,0);
        tracep->declBus(c+6111,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(1)(10)", false,-1, 10,0);
        tracep->declBus(c+6112,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(0)", false,-1, 10,0);
        tracep->declBus(c+6113,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(1)", false,-1, 10,0);
        tracep->declBus(c+6114,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(2)", false,-1, 10,0);
        tracep->declBus(c+6115,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(3)", false,-1, 10,0);
        tracep->declBus(c+6116,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(4)", false,-1, 10,0);
        tracep->declBus(c+6117,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(5)", false,-1, 10,0);
        tracep->declBus(c+6118,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(6)", false,-1, 10,0);
        tracep->declBus(c+6119,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(7)", false,-1, 10,0);
        tracep->declBus(c+6120,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(8)", false,-1, 10,0);
        tracep->declBus(c+6121,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(9)", false,-1, 10,0);
        tracep->declBus(c+6122,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(2)(10)", false,-1, 10,0);
        tracep->declBus(c+6123,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(0)", false,-1, 10,0);
        tracep->declBus(c+6124,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(1)", false,-1, 10,0);
        tracep->declBus(c+6125,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(2)", false,-1, 10,0);
        tracep->declBus(c+6126,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(3)", false,-1, 10,0);
        tracep->declBus(c+6127,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(4)", false,-1, 10,0);
        tracep->declBus(c+6128,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(5)", false,-1, 10,0);
        tracep->declBus(c+6129,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(6)", false,-1, 10,0);
        tracep->declBus(c+6130,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(7)", false,-1, 10,0);
        tracep->declBus(c+6131,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(8)", false,-1, 10,0);
        tracep->declBus(c+6132,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(9)", false,-1, 10,0);
        tracep->declBus(c+6133,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(3)(10)", false,-1, 10,0);
        tracep->declBus(c+6134,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(0)", false,-1, 10,0);
        tracep->declBus(c+6135,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(1)", false,-1, 10,0);
        tracep->declBus(c+6136,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(2)", false,-1, 10,0);
        tracep->declBus(c+6137,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(3)", false,-1, 10,0);
        tracep->declBus(c+6138,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(4)", false,-1, 10,0);
        tracep->declBus(c+6139,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(5)", false,-1, 10,0);
        tracep->declBus(c+6140,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(6)", false,-1, 10,0);
        tracep->declBus(c+6141,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(7)", false,-1, 10,0);
        tracep->declBus(c+6142,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(8)", false,-1, 10,0);
        tracep->declBus(c+6143,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(9)", false,-1, 10,0);
        tracep->declBus(c+6144,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_bank(4)(10)", false,-1, 10,0);
        tracep->declBus(c+5458,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5459,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5460,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5461,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5462,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5463,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5464,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5465,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5466,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5467,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5468,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5469,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5470,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5471,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5472,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5473,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5474,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5475,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5476,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5477,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5478,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5479,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5480,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5481,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5482,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5483,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5484,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5485,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5486,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5487,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5488,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5489,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5490,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5491,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5492,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5493,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5494,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5495,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5496,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5497,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5498,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5499,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5500,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5501,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5502,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5503,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5504,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5505,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5506,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5507,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5508,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5509,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5510,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5511,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5512,"ascon_top gen_unsupported gen_sbox[3] u_sbox and_result_reg(4)(10)", false,-1, 10,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5513+i*1,"ascon_top gen_unsupported gen_sbox[3] u_sbox y", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6145+i*1,"ascon_top gen_unsupported gen_sbox[3] u_sbox y_noMask", true,(i+0), 10,0);}}
        tracep->declBus(c+6150,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+6151,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 10,0);
        tracep->declBus(c+6152,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 10,0);
        tracep->declBus(c+6153,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 10,0);
        tracep->declBus(c+6154,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 10,0);
        tracep->declBus(c+6155,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+6156,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+5518,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5519,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5520,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+5521,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 10,0);
        tracep->declBus(c+5522,"ascon_top gen_unsupported gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top gen_unsupported gen_sbox[4] u_sbox clk", false,-1);
        tracep->declQuad(c+5523,"ascon_top gen_unsupported gen_sbox[4] u_sbox x_in", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[4] u_sbox fresh_r", false,-1, 54,0);
        tracep->declBit(c+5062,"ascon_top gen_unsupported gen_sbox[4] u_sbox sel_masked_round", false,-1);
        tracep->declQuad(c+5525,"ascon_top gen_unsupported gen_sbox[4] u_sbox x_out", false,-1, 54,0);
        tracep->declQuad(c+6157,"ascon_top gen_unsupported gen_sbox[4] u_sbox x_out_noMask", false,-1, 54,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5527+i*1,"ascon_top gen_unsupported gen_sbox[4] u_sbox x", true,(i+0), 10,0);}}
        tracep->declBus(c+6159,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(0)", false,-1, 10,0);
        tracep->declBus(c+6160,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(1)", false,-1, 10,0);
        tracep->declBus(c+6161,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(2)", false,-1, 10,0);
        tracep->declBus(c+6162,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(3)", false,-1, 10,0);
        tracep->declBus(c+6163,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(4)", false,-1, 10,0);
        tracep->declBus(c+6164,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(5)", false,-1, 10,0);
        tracep->declBus(c+6165,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(6)", false,-1, 10,0);
        tracep->declBus(c+6166,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(7)", false,-1, 10,0);
        tracep->declBus(c+6167,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(8)", false,-1, 10,0);
        tracep->declBus(c+6168,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(9)", false,-1, 10,0);
        tracep->declBus(c+6169,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(0)(10)", false,-1, 10,0);
        tracep->declBus(c+6170,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(0)", false,-1, 10,0);
        tracep->declBus(c+6171,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(1)", false,-1, 10,0);
        tracep->declBus(c+6172,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(2)", false,-1, 10,0);
        tracep->declBus(c+6173,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(3)", false,-1, 10,0);
        tracep->declBus(c+6174,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(4)", false,-1, 10,0);
        tracep->declBus(c+6175,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(5)", false,-1, 10,0);
        tracep->declBus(c+6176,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(6)", false,-1, 10,0);
        tracep->declBus(c+6177,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(7)", false,-1, 10,0);
        tracep->declBus(c+6178,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(8)", false,-1, 10,0);
        tracep->declBus(c+6179,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(9)", false,-1, 10,0);
        tracep->declBus(c+6180,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(1)(10)", false,-1, 10,0);
        tracep->declBus(c+6181,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(0)", false,-1, 10,0);
        tracep->declBus(c+6182,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(1)", false,-1, 10,0);
        tracep->declBus(c+6183,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(2)", false,-1, 10,0);
        tracep->declBus(c+6184,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(3)", false,-1, 10,0);
        tracep->declBus(c+6185,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(4)", false,-1, 10,0);
        tracep->declBus(c+6186,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(5)", false,-1, 10,0);
        tracep->declBus(c+6187,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(6)", false,-1, 10,0);
        tracep->declBus(c+6188,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(7)", false,-1, 10,0);
        tracep->declBus(c+6189,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(8)", false,-1, 10,0);
        tracep->declBus(c+6190,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(9)", false,-1, 10,0);
        tracep->declBus(c+6191,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(2)(10)", false,-1, 10,0);
        tracep->declBus(c+6192,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(0)", false,-1, 10,0);
        tracep->declBus(c+6193,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(1)", false,-1, 10,0);
        tracep->declBus(c+6194,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(2)", false,-1, 10,0);
        tracep->declBus(c+6195,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(3)", false,-1, 10,0);
        tracep->declBus(c+6196,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(4)", false,-1, 10,0);
        tracep->declBus(c+6197,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(5)", false,-1, 10,0);
        tracep->declBus(c+6198,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(6)", false,-1, 10,0);
        tracep->declBus(c+6199,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(7)", false,-1, 10,0);
        tracep->declBus(c+6200,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(8)", false,-1, 10,0);
        tracep->declBus(c+6201,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(9)", false,-1, 10,0);
        tracep->declBus(c+6202,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(3)(10)", false,-1, 10,0);
        tracep->declBus(c+6203,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(0)", false,-1, 10,0);
        tracep->declBus(c+6204,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(1)", false,-1, 10,0);
        tracep->declBus(c+6205,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(2)", false,-1, 10,0);
        tracep->declBus(c+6206,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(3)", false,-1, 10,0);
        tracep->declBus(c+6207,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(4)", false,-1, 10,0);
        tracep->declBus(c+6208,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(5)", false,-1, 10,0);
        tracep->declBus(c+6209,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(6)", false,-1, 10,0);
        tracep->declBus(c+6210,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(7)", false,-1, 10,0);
        tracep->declBus(c+6211,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(8)", false,-1, 10,0);
        tracep->declBus(c+6212,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(9)", false,-1, 10,0);
        tracep->declBus(c+6213,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_bank(4)(10)", false,-1, 10,0);
        tracep->declBus(c+5532,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5533,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5534,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5535,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5536,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5537,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5538,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5539,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5540,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5541,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5542,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5543,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5544,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5545,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5546,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5547,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5548,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5549,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5550,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5551,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5552,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5553,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5554,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5555,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5556,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5557,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5558,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5559,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5560,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5561,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5562,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5563,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5564,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5565,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5566,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5567,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5568,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5569,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5570,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5571,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5572,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5573,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5574,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5575,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5576,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5577,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5578,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5579,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5580,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5581,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5582,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5583,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5584,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5585,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5586,"ascon_top gen_unsupported gen_sbox[4] u_sbox and_result_reg(4)(10)", false,-1, 10,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5587+i*1,"ascon_top gen_unsupported gen_sbox[4] u_sbox y", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6214+i*1,"ascon_top gen_unsupported gen_sbox[4] u_sbox y_noMask", true,(i+0), 10,0);}}
        tracep->declBus(c+6219,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+6220,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 10,0);
        tracep->declBus(c+6221,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 10,0);
        tracep->declBus(c+6222,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 10,0);
        tracep->declBus(c+6223,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 10,0);
        tracep->declBus(c+6224,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+6225,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+5592,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5593,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5594,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+5595,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 10,0);
        tracep->declBus(c+5596,"ascon_top gen_unsupported gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+6295,"ascon_top gen_unsupported gen_sbox[5] u_sbox clk", false,-1);
        tracep->declQuad(c+5597,"ascon_top gen_unsupported gen_sbox[5] u_sbox x_in", false,-1, 54,0);
        tracep->declQuad(c+5053,"ascon_top gen_unsupported gen_sbox[5] u_sbox fresh_r", false,-1, 54,0);
        tracep->declBit(c+5062,"ascon_top gen_unsupported gen_sbox[5] u_sbox sel_masked_round", false,-1);
        tracep->declQuad(c+5599,"ascon_top gen_unsupported gen_sbox[5] u_sbox x_out", false,-1, 54,0);
        tracep->declQuad(c+6226,"ascon_top gen_unsupported gen_sbox[5] u_sbox x_out_noMask", false,-1, 54,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5601+i*1,"ascon_top gen_unsupported gen_sbox[5] u_sbox x", true,(i+0), 10,0);}}
        tracep->declBus(c+6228,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(0)", false,-1, 10,0);
        tracep->declBus(c+6229,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(1)", false,-1, 10,0);
        tracep->declBus(c+6230,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(2)", false,-1, 10,0);
        tracep->declBus(c+6231,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(3)", false,-1, 10,0);
        tracep->declBus(c+6232,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(4)", false,-1, 10,0);
        tracep->declBus(c+6233,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(5)", false,-1, 10,0);
        tracep->declBus(c+6234,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(6)", false,-1, 10,0);
        tracep->declBus(c+6235,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(7)", false,-1, 10,0);
        tracep->declBus(c+6236,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(8)", false,-1, 10,0);
        tracep->declBus(c+6237,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(9)", false,-1, 10,0);
        tracep->declBus(c+6238,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(0)(10)", false,-1, 10,0);
        tracep->declBus(c+6239,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(0)", false,-1, 10,0);
        tracep->declBus(c+6240,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(1)", false,-1, 10,0);
        tracep->declBus(c+6241,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(2)", false,-1, 10,0);
        tracep->declBus(c+6242,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(3)", false,-1, 10,0);
        tracep->declBus(c+6243,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(4)", false,-1, 10,0);
        tracep->declBus(c+6244,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(5)", false,-1, 10,0);
        tracep->declBus(c+6245,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(6)", false,-1, 10,0);
        tracep->declBus(c+6246,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(7)", false,-1, 10,0);
        tracep->declBus(c+6247,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(8)", false,-1, 10,0);
        tracep->declBus(c+6248,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(9)", false,-1, 10,0);
        tracep->declBus(c+6249,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(1)(10)", false,-1, 10,0);
        tracep->declBus(c+6250,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(0)", false,-1, 10,0);
        tracep->declBus(c+6251,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(1)", false,-1, 10,0);
        tracep->declBus(c+6252,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(2)", false,-1, 10,0);
        tracep->declBus(c+6253,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(3)", false,-1, 10,0);
        tracep->declBus(c+6254,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(4)", false,-1, 10,0);
        tracep->declBus(c+6255,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(5)", false,-1, 10,0);
        tracep->declBus(c+6256,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(6)", false,-1, 10,0);
        tracep->declBus(c+6257,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(7)", false,-1, 10,0);
        tracep->declBus(c+6258,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(8)", false,-1, 10,0);
        tracep->declBus(c+6259,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(9)", false,-1, 10,0);
        tracep->declBus(c+6260,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(2)(10)", false,-1, 10,0);
        tracep->declBus(c+6261,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(0)", false,-1, 10,0);
        tracep->declBus(c+6262,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(1)", false,-1, 10,0);
        tracep->declBus(c+6263,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(2)", false,-1, 10,0);
        tracep->declBus(c+6264,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(3)", false,-1, 10,0);
        tracep->declBus(c+6265,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(4)", false,-1, 10,0);
        tracep->declBus(c+6266,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(5)", false,-1, 10,0);
        tracep->declBus(c+6267,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(6)", false,-1, 10,0);
        tracep->declBus(c+6268,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(7)", false,-1, 10,0);
        tracep->declBus(c+6269,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(8)", false,-1, 10,0);
        tracep->declBus(c+6270,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(9)", false,-1, 10,0);
        tracep->declBus(c+6271,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(3)(10)", false,-1, 10,0);
        tracep->declBus(c+6272,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(0)", false,-1, 10,0);
        tracep->declBus(c+6273,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(1)", false,-1, 10,0);
        tracep->declBus(c+6274,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(2)", false,-1, 10,0);
        tracep->declBus(c+6275,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(3)", false,-1, 10,0);
        tracep->declBus(c+6276,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(4)", false,-1, 10,0);
        tracep->declBus(c+6277,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(5)", false,-1, 10,0);
        tracep->declBus(c+6278,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(6)", false,-1, 10,0);
        tracep->declBus(c+6279,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(7)", false,-1, 10,0);
        tracep->declBus(c+6280,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(8)", false,-1, 10,0);
        tracep->declBus(c+6281,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(9)", false,-1, 10,0);
        tracep->declBus(c+6282,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_bank(4)(10)", false,-1, 10,0);
        tracep->declBus(c+5606,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(0)", false,-1, 10,0);
        tracep->declBus(c+5607,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(1)", false,-1, 10,0);
        tracep->declBus(c+5608,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(2)", false,-1, 10,0);
        tracep->declBus(c+5609,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(3)", false,-1, 10,0);
        tracep->declBus(c+5610,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(4)", false,-1, 10,0);
        tracep->declBus(c+5611,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(5)", false,-1, 10,0);
        tracep->declBus(c+5612,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(6)", false,-1, 10,0);
        tracep->declBus(c+5613,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(7)", false,-1, 10,0);
        tracep->declBus(c+5614,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(8)", false,-1, 10,0);
        tracep->declBus(c+5615,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(9)", false,-1, 10,0);
        tracep->declBus(c+5616,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(0)(10)", false,-1, 10,0);
        tracep->declBus(c+5617,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(0)", false,-1, 10,0);
        tracep->declBus(c+5618,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(1)", false,-1, 10,0);
        tracep->declBus(c+5619,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(2)", false,-1, 10,0);
        tracep->declBus(c+5620,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(3)", false,-1, 10,0);
        tracep->declBus(c+5621,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(4)", false,-1, 10,0);
        tracep->declBus(c+5622,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(5)", false,-1, 10,0);
        tracep->declBus(c+5623,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(6)", false,-1, 10,0);
        tracep->declBus(c+5624,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(7)", false,-1, 10,0);
        tracep->declBus(c+5625,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(8)", false,-1, 10,0);
        tracep->declBus(c+5626,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(9)", false,-1, 10,0);
        tracep->declBus(c+5627,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(1)(10)", false,-1, 10,0);
        tracep->declBus(c+5628,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(0)", false,-1, 10,0);
        tracep->declBus(c+5629,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(1)", false,-1, 10,0);
        tracep->declBus(c+5630,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(2)", false,-1, 10,0);
        tracep->declBus(c+5631,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(3)", false,-1, 10,0);
        tracep->declBus(c+5632,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(4)", false,-1, 10,0);
        tracep->declBus(c+5633,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(5)", false,-1, 10,0);
        tracep->declBus(c+5634,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(6)", false,-1, 10,0);
        tracep->declBus(c+5635,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(7)", false,-1, 10,0);
        tracep->declBus(c+5636,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(8)", false,-1, 10,0);
        tracep->declBus(c+5637,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(9)", false,-1, 10,0);
        tracep->declBus(c+5638,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(2)(10)", false,-1, 10,0);
        tracep->declBus(c+5639,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(0)", false,-1, 10,0);
        tracep->declBus(c+5640,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(1)", false,-1, 10,0);
        tracep->declBus(c+5641,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(2)", false,-1, 10,0);
        tracep->declBus(c+5642,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(3)", false,-1, 10,0);
        tracep->declBus(c+5643,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(4)", false,-1, 10,0);
        tracep->declBus(c+5644,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(5)", false,-1, 10,0);
        tracep->declBus(c+5645,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(6)", false,-1, 10,0);
        tracep->declBus(c+5646,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(7)", false,-1, 10,0);
        tracep->declBus(c+5647,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(8)", false,-1, 10,0);
        tracep->declBus(c+5648,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(9)", false,-1, 10,0);
        tracep->declBus(c+5649,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(3)(10)", false,-1, 10,0);
        tracep->declBus(c+5650,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(0)", false,-1, 10,0);
        tracep->declBus(c+5651,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(1)", false,-1, 10,0);
        tracep->declBus(c+5652,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(2)", false,-1, 10,0);
        tracep->declBus(c+5653,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(3)", false,-1, 10,0);
        tracep->declBus(c+5654,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(4)", false,-1, 10,0);
        tracep->declBus(c+5655,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(5)", false,-1, 10,0);
        tracep->declBus(c+5656,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(6)", false,-1, 10,0);
        tracep->declBus(c+5657,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(7)", false,-1, 10,0);
        tracep->declBus(c+5658,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(8)", false,-1, 10,0);
        tracep->declBus(c+5659,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(9)", false,-1, 10,0);
        tracep->declBus(c+5660,"ascon_top gen_unsupported gen_sbox[5] u_sbox and_result_reg(4)(10)", false,-1, 10,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5661+i*1,"ascon_top gen_unsupported gen_sbox[5] u_sbox y", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6283+i*1,"ascon_top gen_unsupported gen_sbox[5] u_sbox y_noMask", true,(i+0), 10,0);}}
        tracep->declBus(c+6288,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+6390,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+6289,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 10,0);
        tracep->declBus(c+6290,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 10,0);
        tracep->declBus(c+6291,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 10,0);
        tracep->declBus(c+6292,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 10,0);
        tracep->declBus(c+6293,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+6294,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+5666,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5667,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5668,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+5669,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 10,0);
        tracep->declBus(c+5670,"ascon_top gen_unsupported gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBus(c+6392,"ascon_params d", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_params PAR", false,-1, 31,0);
        tracep->declBus(c+6393,"ascon_params COL_SIZE", false,-1, 31,0);
        tracep->declBus(c+6394,"ascon_params WORD_SIZE", false,-1, 31,0);
        tracep->declBus(c+6395,"ascon_params STATE_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6388,"ascon_params num_shares", false,-1, 31,0);
        tracep->declBus(c+6373,"ascon_params SHIFT_PAR", false,-1, 31,0);
        tracep->declBus(c+6394,"ascon_params SHIFT_PAR_D_PLUS_1", false,-1, 31,0);
        tracep->declBus(c+6371,"ascon_params SHIFT_PAR_LAST", false,-1, 31,0);
        tracep->declBus(c+6394,"ascon_params SHIFT_PAR_D_PLUS_1_LAST", false,-1, 31,0);
        tracep->declBus(c+6396,"ascon_params NUMBER_BIT_MASK", false,-1, 31,0);
        tracep->declBus(c+6397,"ascon_params NUMBER_BIT_NOMASK", false,-1, 31,0);
        tracep->declBus(c+6370,"ascon_params SHIFT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6370,"ascon_params PADDED_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6398,"ascon_params RAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6398,"ascon_params DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+6399,"ascon_params REVERSE", false,-1);
        tracep->declBus(c+6400,"ascon_params LFSR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6401,"ascon_params LFSR_POLY", false,-1, 30,0);
        tracep->declBus(c+6402,"ascon_params LFSR_FEED_FORWARD", false,-1, 31,0);
        tracep->declBus(c+6403,"ascon_params STYLE_AUTO", false,-1, 31,0);
        tracep->declBus(c+6397,"ascon_params STYLE_LOOP", false,-1, 31,0);
        tracep->declBus(c+6404,"ascon_params STYLE_REDUCTION", false,-1, 31,0);
        tracep->declBus(c+6403,"ascon_params CFG_FIBONACCI", false,-1, 31,0);
        tracep->declBus(c+6397,"ascon_params CFG_GALOIS", false,-1, 31,0);
        tracep->declBus(c+6403,"ascon_params STYLE", false,-1, 31,0);
        tracep->declBus(c+6403,"ascon_params LFSR_CONFIG", false,-1, 31,0);
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

extern const VlWide<10>/*319:0*/ Vascon_top__ConstPool__CONST_3c9d791d_0;
extern const VlWide<12>/*383:0*/ Vascon_top__ConstPool__CONST_94e788c5_0;

void Vascon_top___024root__traceFullSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<10>/*319:0*/ __Vtemp22539;
    VlWide<3>/*95:0*/ __Vtemp22540;
    VlWide<10>/*319:0*/ __Vtemp22544;
    VlWide<10>/*319:0*/ __Vtemp23208;
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
        tracep->fullWData(oldp+11,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),386);
        tracep->fullWData(oldp+24,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),386);
        tracep->fullWData(oldp+37,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),386);
        tracep->fullWData(oldp+50,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),386);
        tracep->fullWData(oldp+63,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),386);
        tracep->fullWData(oldp+76,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),386);
        tracep->fullWData(oldp+89,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),386);
        tracep->fullWData(oldp+102,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),386);
        tracep->fullWData(oldp+115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),386);
        tracep->fullWData(oldp+128,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),386);
        tracep->fullWData(oldp+141,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),386);
        tracep->fullWData(oldp+154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),386);
        tracep->fullWData(oldp+167,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),386);
        tracep->fullWData(oldp+180,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),386);
        tracep->fullWData(oldp+193,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),386);
        tracep->fullWData(oldp+206,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),386);
        tracep->fullWData(oldp+219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),386);
        tracep->fullWData(oldp+232,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),386);
        tracep->fullWData(oldp+245,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),386);
        tracep->fullWData(oldp+258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),386);
        tracep->fullWData(oldp+271,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),386);
        tracep->fullWData(oldp+284,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),386);
        tracep->fullWData(oldp+297,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),386);
        tracep->fullWData(oldp+310,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),386);
        tracep->fullWData(oldp+323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),386);
        tracep->fullWData(oldp+336,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),386);
        tracep->fullWData(oldp+349,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),386);
        tracep->fullWData(oldp+362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),386);
        tracep->fullWData(oldp+375,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),386);
        tracep->fullWData(oldp+388,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),386);
        tracep->fullWData(oldp+401,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),386);
        tracep->fullWData(oldp+414,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),386);
        tracep->fullWData(oldp+427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),386);
        tracep->fullWData(oldp+440,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),386);
        tracep->fullWData(oldp+453,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),386);
        tracep->fullWData(oldp+466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),386);
        tracep->fullWData(oldp+479,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),386);
        tracep->fullWData(oldp+492,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),386);
        tracep->fullWData(oldp+505,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),386);
        tracep->fullWData(oldp+518,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),386);
        tracep->fullWData(oldp+531,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),386);
        tracep->fullWData(oldp+544,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),386);
        tracep->fullWData(oldp+557,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),386);
        tracep->fullWData(oldp+570,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),386);
        tracep->fullWData(oldp+583,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask),386);
        tracep->fullWData(oldp+596,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask),386);
        tracep->fullWData(oldp+609,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask),386);
        tracep->fullWData(oldp+622,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask),386);
        tracep->fullWData(oldp+635,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask),386);
        tracep->fullWData(oldp+648,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask),386);
        tracep->fullWData(oldp+661,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask),386);
        tracep->fullWData(oldp+674,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask),386);
        tracep->fullWData(oldp+687,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask),386);
        tracep->fullWData(oldp+700,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask),386);
        tracep->fullWData(oldp+713,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask),386);
        tracep->fullWData(oldp+726,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask),386);
        tracep->fullWData(oldp+739,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask),386);
        tracep->fullWData(oldp+752,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask),386);
        tracep->fullWData(oldp+765,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask),386);
        tracep->fullWData(oldp+778,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask),386);
        tracep->fullWData(oldp+791,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask),386);
        tracep->fullWData(oldp+804,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask),386);
        tracep->fullWData(oldp+817,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask),386);
        tracep->fullWData(oldp+830,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask),386);
        tracep->fullWData(oldp+843,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask),386);
        tracep->fullWData(oldp+856,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask),386);
        tracep->fullWData(oldp+869,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask),386);
        tracep->fullWData(oldp+882,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask),386);
        tracep->fullWData(oldp+895,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask),386);
        tracep->fullWData(oldp+908,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask),386);
        tracep->fullWData(oldp+921,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask),386);
        tracep->fullWData(oldp+934,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask),386);
        tracep->fullWData(oldp+947,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask),386);
        tracep->fullWData(oldp+960,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask),386);
        tracep->fullWData(oldp+973,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask),386);
        tracep->fullWData(oldp+986,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask),386);
        tracep->fullWData(oldp+999,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask),386);
        tracep->fullWData(oldp+1012,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask),386);
        tracep->fullWData(oldp+1025,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask),386);
        tracep->fullWData(oldp+1038,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask),386);
        tracep->fullWData(oldp+1051,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask),386);
        tracep->fullWData(oldp+1064,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask),386);
        tracep->fullWData(oldp+1077,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask),386);
        tracep->fullWData(oldp+1090,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask),386);
        tracep->fullWData(oldp+1103,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask),386);
        tracep->fullWData(oldp+1116,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask),386);
        tracep->fullWData(oldp+1129,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask),386);
        tracep->fullWData(oldp+1142,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask),386);
        tracep->fullWData(oldp+1155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask),386);
        tracep->fullWData(oldp+1168,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask),386);
        tracep->fullWData(oldp+1181,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask),386);
        tracep->fullWData(oldp+1194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask),386);
        tracep->fullWData(oldp+1207,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask),386);
        tracep->fullWData(oldp+1220,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask),386);
        tracep->fullWData(oldp+1233,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask),386);
        tracep->fullWData(oldp+1246,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask),386);
        tracep->fullWData(oldp+1259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask),386);
        tracep->fullWData(oldp+1272,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask),386);
        tracep->fullWData(oldp+1285,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask),386);
        tracep->fullWData(oldp+1298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask),386);
        tracep->fullWData(oldp+1311,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask),386);
        tracep->fullWData(oldp+1324,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask),386);
        tracep->fullWData(oldp+1337,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask),386);
        tracep->fullWData(oldp+1350,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask),386);
        tracep->fullWData(oldp+1363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask),386);
        tracep->fullWData(oldp+1376,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask),386);
        tracep->fullWData(oldp+1389,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask),386);
        tracep->fullWData(oldp+1402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask),386);
        tracep->fullWData(oldp+1415,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask),386);
        tracep->fullWData(oldp+1428,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask),386);
        tracep->fullWData(oldp+1441,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask),386);
        tracep->fullWData(oldp+1454,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask),386);
        tracep->fullWData(oldp+1467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask),386);
        tracep->fullWData(oldp+1480,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask),386);
        tracep->fullWData(oldp+1493,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask),386);
        tracep->fullWData(oldp+1506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask),386);
        tracep->fullWData(oldp+1519,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask),386);
        tracep->fullWData(oldp+1532,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask),386);
        tracep->fullWData(oldp+1545,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask),386);
        tracep->fullWData(oldp+1558,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask),386);
        tracep->fullWData(oldp+1571,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask),386);
        tracep->fullWData(oldp+1584,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask),386);
        tracep->fullWData(oldp+1597,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask),386);
        tracep->fullWData(oldp+1610,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask),386);
        tracep->fullWData(oldp+1623,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask),386);
        tracep->fullWData(oldp+1636,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask),386);
        tracep->fullWData(oldp+1649,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask),386);
        tracep->fullWData(oldp+1662,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__mask),386);
        tracep->fullWData(oldp+1675,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__mask),386);
        tracep->fullWData(oldp+1688,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__mask),386);
        tracep->fullWData(oldp+1701,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__mask),386);
        tracep->fullWData(oldp+1714,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__mask),386);
        tracep->fullWData(oldp+1727,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__mask),386);
        tracep->fullWData(oldp+1740,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__mask),386);
        tracep->fullWData(oldp+1753,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__mask),386);
        tracep->fullWData(oldp+1766,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__mask),386);
        tracep->fullWData(oldp+1779,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__mask),386);
        tracep->fullWData(oldp+1792,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__mask),386);
        tracep->fullWData(oldp+1805,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__mask),386);
        tracep->fullWData(oldp+1818,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__mask),386);
        tracep->fullWData(oldp+1831,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__mask),386);
        tracep->fullWData(oldp+1844,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__mask),386);
        tracep->fullWData(oldp+1857,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__mask),386);
        tracep->fullWData(oldp+1870,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__mask),386);
        tracep->fullWData(oldp+1883,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__mask),386);
        tracep->fullWData(oldp+1896,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__mask),386);
        tracep->fullWData(oldp+1909,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__mask),386);
        tracep->fullWData(oldp+1922,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__mask),386);
        tracep->fullWData(oldp+1935,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__mask),386);
        tracep->fullWData(oldp+1948,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__mask),386);
        tracep->fullWData(oldp+1961,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__mask),386);
        tracep->fullWData(oldp+1974,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__mask),386);
        tracep->fullWData(oldp+1987,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__mask),386);
        tracep->fullWData(oldp+2000,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__mask),386);
        tracep->fullWData(oldp+2013,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__mask),386);
        tracep->fullWData(oldp+2026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__mask),386);
        tracep->fullWData(oldp+2039,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__mask),386);
        tracep->fullWData(oldp+2052,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__mask),386);
        tracep->fullWData(oldp+2065,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__mask),386);
        tracep->fullWData(oldp+2078,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__mask),386);
        tracep->fullWData(oldp+2091,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__mask),386);
        tracep->fullWData(oldp+2104,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__mask),386);
        tracep->fullWData(oldp+2117,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__mask),386);
        tracep->fullWData(oldp+2130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__mask),386);
        tracep->fullWData(oldp+2143,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__mask),386);
        tracep->fullWData(oldp+2156,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__mask),386);
        tracep->fullWData(oldp+2169,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__mask),386);
        tracep->fullWData(oldp+2182,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__mask),386);
        tracep->fullWData(oldp+2195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__mask),386);
        tracep->fullWData(oldp+2208,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__mask),386);
        tracep->fullWData(oldp+2221,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__mask),386);
        tracep->fullWData(oldp+2234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__mask),386);
        tracep->fullWData(oldp+2247,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__mask),386);
        tracep->fullWData(oldp+2260,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__mask),386);
        tracep->fullWData(oldp+2273,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__mask),386);
        tracep->fullWData(oldp+2286,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__mask),386);
        tracep->fullWData(oldp+2299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__mask),386);
        tracep->fullWData(oldp+2312,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__mask),386);
        tracep->fullWData(oldp+2325,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__mask),386);
        tracep->fullWData(oldp+2338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__mask),386);
        tracep->fullWData(oldp+2351,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__mask),386);
        tracep->fullWData(oldp+2364,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__mask),386);
        tracep->fullWData(oldp+2377,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__mask),386);
        tracep->fullWData(oldp+2390,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__mask),386);
        tracep->fullWData(oldp+2403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__mask),386);
        tracep->fullWData(oldp+2416,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__mask),386);
        tracep->fullWData(oldp+2429,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__mask),386);
        tracep->fullWData(oldp+2442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__mask),386);
        tracep->fullWData(oldp+2455,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__mask),386);
        tracep->fullWData(oldp+2468,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__mask),386);
        tracep->fullWData(oldp+2481,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__mask),386);
        tracep->fullWData(oldp+2494,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__mask),386);
        tracep->fullWData(oldp+2507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__mask),386);
        tracep->fullWData(oldp+2520,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__mask),386);
        tracep->fullWData(oldp+2533,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__mask),386);
        tracep->fullWData(oldp+2546,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__mask),386);
        tracep->fullWData(oldp+2559,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__mask),386);
        tracep->fullWData(oldp+2572,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__mask),386);
        tracep->fullWData(oldp+2585,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__mask),386);
        tracep->fullWData(oldp+2598,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__mask),386);
        tracep->fullWData(oldp+2611,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__mask),386);
        tracep->fullWData(oldp+2624,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__mask),386);
        tracep->fullWData(oldp+2637,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__mask),386);
        tracep->fullWData(oldp+2650,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__mask),386);
        tracep->fullWData(oldp+2663,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__mask),386);
        tracep->fullWData(oldp+2676,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__mask),386);
        tracep->fullWData(oldp+2689,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__mask),386);
        tracep->fullWData(oldp+2702,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__mask),386);
        tracep->fullWData(oldp+2715,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask),386);
        tracep->fullWData(oldp+2728,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask),386);
        tracep->fullWData(oldp+2741,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask),386);
        tracep->fullWData(oldp+2754,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask),386);
        tracep->fullWData(oldp+2767,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask),386);
        tracep->fullWData(oldp+2780,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask),386);
        tracep->fullWData(oldp+2793,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask),386);
        tracep->fullWData(oldp+2806,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask),386);
        tracep->fullWData(oldp+2819,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask),386);
        tracep->fullWData(oldp+2832,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask),386);
        tracep->fullWData(oldp+2845,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask),386);
        tracep->fullWData(oldp+2858,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask),386);
        tracep->fullWData(oldp+2871,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask),386);
        tracep->fullWData(oldp+2884,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask),386);
        tracep->fullWData(oldp+2897,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask),386);
        tracep->fullWData(oldp+2910,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask),386);
        tracep->fullWData(oldp+2923,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask),386);
        tracep->fullWData(oldp+2936,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask),386);
        tracep->fullWData(oldp+2949,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask),386);
        tracep->fullWData(oldp+2962,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask),386);
        tracep->fullWData(oldp+2975,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask),386);
        tracep->fullWData(oldp+2988,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask),386);
        tracep->fullWData(oldp+3001,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask),386);
        tracep->fullWData(oldp+3014,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask),386);
        tracep->fullWData(oldp+3027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask),386);
        tracep->fullWData(oldp+3040,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask),386);
        tracep->fullWData(oldp+3053,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask),386);
        tracep->fullWData(oldp+3066,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask),386);
        tracep->fullWData(oldp+3079,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask),386);
        tracep->fullWData(oldp+3092,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask),386);
        tracep->fullWData(oldp+3105,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask),386);
        tracep->fullWData(oldp+3118,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask),386);
        tracep->fullWData(oldp+3131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask),386);
        tracep->fullWData(oldp+3144,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask),386);
        tracep->fullWData(oldp+3157,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask),386);
        tracep->fullWData(oldp+3170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask),386);
        tracep->fullWData(oldp+3183,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask),386);
        tracep->fullWData(oldp+3196,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask),386);
        tracep->fullWData(oldp+3209,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask),386);
        tracep->fullWData(oldp+3222,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask),386);
        tracep->fullWData(oldp+3235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask),386);
        tracep->fullWData(oldp+3248,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask),386);
        tracep->fullWData(oldp+3261,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask),386);
        tracep->fullWData(oldp+3274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask),386);
        tracep->fullWData(oldp+3287,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask),386);
        tracep->fullWData(oldp+3300,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask),386);
        tracep->fullWData(oldp+3313,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__223__KET____DOT__mask),386);
        tracep->fullWData(oldp+3326,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__224__KET____DOT__mask),386);
        tracep->fullWData(oldp+3339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__225__KET____DOT__mask),386);
        tracep->fullWData(oldp+3352,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__226__KET____DOT__mask),386);
        tracep->fullWData(oldp+3365,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__227__KET____DOT__mask),386);
        tracep->fullWData(oldp+3378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__228__KET____DOT__mask),386);
        tracep->fullWData(oldp+3391,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__229__KET____DOT__mask),386);
        tracep->fullWData(oldp+3404,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__230__KET____DOT__mask),386);
        tracep->fullWData(oldp+3417,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__231__KET____DOT__mask),386);
        tracep->fullWData(oldp+3430,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__232__KET____DOT__mask),386);
        tracep->fullWData(oldp+3443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__233__KET____DOT__mask),386);
        tracep->fullWData(oldp+3456,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__234__KET____DOT__mask),386);
        tracep->fullWData(oldp+3469,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__235__KET____DOT__mask),386);
        tracep->fullWData(oldp+3482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__236__KET____DOT__mask),386);
        tracep->fullWData(oldp+3495,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__237__KET____DOT__mask),386);
        tracep->fullWData(oldp+3508,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__238__KET____DOT__mask),386);
        tracep->fullWData(oldp+3521,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__239__KET____DOT__mask),386);
        tracep->fullWData(oldp+3534,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__240__KET____DOT__mask),386);
        tracep->fullWData(oldp+3547,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__241__KET____DOT__mask),386);
        tracep->fullWData(oldp+3560,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__242__KET____DOT__mask),386);
        tracep->fullWData(oldp+3573,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__243__KET____DOT__mask),386);
        tracep->fullWData(oldp+3586,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__244__KET____DOT__mask),386);
        tracep->fullWData(oldp+3599,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__245__KET____DOT__mask),386);
        tracep->fullWData(oldp+3612,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__246__KET____DOT__mask),386);
        tracep->fullWData(oldp+3625,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__247__KET____DOT__mask),386);
        tracep->fullWData(oldp+3638,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__248__KET____DOT__mask),386);
        tracep->fullWData(oldp+3651,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__249__KET____DOT__mask),386);
        tracep->fullWData(oldp+3664,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__250__KET____DOT__mask),386);
        tracep->fullWData(oldp+3677,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__251__KET____DOT__mask),386);
        tracep->fullWData(oldp+3690,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__252__KET____DOT__mask),386);
        tracep->fullWData(oldp+3703,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__253__KET____DOT__mask),386);
        tracep->fullWData(oldp+3716,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__254__KET____DOT__mask),386);
        tracep->fullWData(oldp+3729,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__255__KET____DOT__mask),386);
        tracep->fullWData(oldp+3742,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__256__KET____DOT__mask),386);
        tracep->fullWData(oldp+3755,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__257__KET____DOT__mask),386);
        tracep->fullWData(oldp+3768,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__258__KET____DOT__mask),386);
        tracep->fullWData(oldp+3781,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__259__KET____DOT__mask),386);
        tracep->fullWData(oldp+3794,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__260__KET____DOT__mask),386);
        tracep->fullWData(oldp+3807,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__261__KET____DOT__mask),386);
        tracep->fullWData(oldp+3820,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__262__KET____DOT__mask),386);
        tracep->fullWData(oldp+3833,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__263__KET____DOT__mask),386);
        tracep->fullWData(oldp+3846,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__264__KET____DOT__mask),386);
        tracep->fullWData(oldp+3859,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__265__KET____DOT__mask),386);
        tracep->fullWData(oldp+3872,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__266__KET____DOT__mask),386);
        tracep->fullWData(oldp+3885,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__267__KET____DOT__mask),386);
        tracep->fullWData(oldp+3898,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__268__KET____DOT__mask),386);
        tracep->fullWData(oldp+3911,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__269__KET____DOT__mask),386);
        tracep->fullWData(oldp+3924,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__270__KET____DOT__mask),386);
        tracep->fullWData(oldp+3937,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__271__KET____DOT__mask),386);
        tracep->fullWData(oldp+3950,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__272__KET____DOT__mask),386);
        tracep->fullWData(oldp+3963,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__273__KET____DOT__mask),386);
        tracep->fullWData(oldp+3976,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__274__KET____DOT__mask),386);
        tracep->fullWData(oldp+3989,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__275__KET____DOT__mask),386);
        tracep->fullWData(oldp+4002,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__276__KET____DOT__mask),386);
        tracep->fullWData(oldp+4015,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__277__KET____DOT__mask),386);
        tracep->fullWData(oldp+4028,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__278__KET____DOT__mask),386);
        tracep->fullWData(oldp+4041,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__279__KET____DOT__mask),386);
        tracep->fullWData(oldp+4054,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__280__KET____DOT__mask),386);
        tracep->fullWData(oldp+4067,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__281__KET____DOT__mask),386);
        tracep->fullWData(oldp+4080,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__282__KET____DOT__mask),386);
        tracep->fullWData(oldp+4093,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__283__KET____DOT__mask),386);
        tracep->fullWData(oldp+4106,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__284__KET____DOT__mask),386);
        tracep->fullWData(oldp+4119,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__285__KET____DOT__mask),386);
        tracep->fullWData(oldp+4132,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__286__KET____DOT__mask),386);
        tracep->fullWData(oldp+4145,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__287__KET____DOT__mask),386);
        tracep->fullWData(oldp+4158,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__288__KET____DOT__mask),386);
        tracep->fullWData(oldp+4171,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__289__KET____DOT__mask),386);
        tracep->fullWData(oldp+4184,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__290__KET____DOT__mask),386);
        tracep->fullWData(oldp+4197,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__291__KET____DOT__mask),386);
        tracep->fullWData(oldp+4210,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__292__KET____DOT__mask),386);
        tracep->fullWData(oldp+4223,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__293__KET____DOT__mask),386);
        tracep->fullWData(oldp+4236,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__294__KET____DOT__mask),386);
        tracep->fullWData(oldp+4249,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__295__KET____DOT__mask),386);
        tracep->fullWData(oldp+4262,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__296__KET____DOT__mask),386);
        tracep->fullWData(oldp+4275,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__297__KET____DOT__mask),386);
        tracep->fullWData(oldp+4288,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__298__KET____DOT__mask),386);
        tracep->fullWData(oldp+4301,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__299__KET____DOT__mask),386);
        tracep->fullWData(oldp+4314,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__300__KET____DOT__mask),386);
        tracep->fullWData(oldp+4327,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__301__KET____DOT__mask),386);
        tracep->fullWData(oldp+4340,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__302__KET____DOT__mask),386);
        tracep->fullWData(oldp+4353,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__303__KET____DOT__mask),386);
        tracep->fullWData(oldp+4366,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__304__KET____DOT__mask),386);
        tracep->fullWData(oldp+4379,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__305__KET____DOT__mask),386);
        tracep->fullWData(oldp+4392,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__306__KET____DOT__mask),386);
        tracep->fullWData(oldp+4405,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__307__KET____DOT__mask),386);
        tracep->fullWData(oldp+4418,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__308__KET____DOT__mask),386);
        tracep->fullWData(oldp+4431,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__309__KET____DOT__mask),386);
        tracep->fullWData(oldp+4444,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__310__KET____DOT__mask),386);
        tracep->fullWData(oldp+4457,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__311__KET____DOT__mask),386);
        tracep->fullWData(oldp+4470,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__312__KET____DOT__mask),386);
        tracep->fullWData(oldp+4483,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__313__KET____DOT__mask),386);
        tracep->fullWData(oldp+4496,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__314__KET____DOT__mask),386);
        tracep->fullWData(oldp+4509,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__315__KET____DOT__mask),386);
        tracep->fullWData(oldp+4522,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__316__KET____DOT__mask),386);
        tracep->fullWData(oldp+4535,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__317__KET____DOT__mask),386);
        tracep->fullWData(oldp+4548,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__318__KET____DOT__mask),386);
        tracep->fullWData(oldp+4561,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__319__KET____DOT__mask),386);
        tracep->fullWData(oldp+4574,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__320__KET____DOT__mask),386);
        tracep->fullWData(oldp+4587,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__321__KET____DOT__mask),386);
        tracep->fullWData(oldp+4600,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__322__KET____DOT__mask),386);
        tracep->fullWData(oldp+4613,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__323__KET____DOT__mask),386);
        tracep->fullWData(oldp+4626,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__324__KET____DOT__mask),386);
        tracep->fullWData(oldp+4639,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__325__KET____DOT__mask),386);
        tracep->fullWData(oldp+4652,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__326__KET____DOT__mask),386);
        tracep->fullWData(oldp+4665,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__327__KET____DOT__mask),386);
        tracep->fullWData(oldp+4678,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__328__KET____DOT__mask),386);
        tracep->fullWData(oldp+4691,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__329__KET____DOT__mask),386);
        tracep->fullWData(oldp+4704,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__330__KET____DOT__mask),386);
        tracep->fullWData(oldp+4717,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__331__KET____DOT__mask),386);
        tracep->fullWData(oldp+4730,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__332__KET____DOT__mask),386);
        tracep->fullWData(oldp+4743,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__333__KET____DOT__mask),386);
        tracep->fullWData(oldp+4756,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__334__KET____DOT__mask),386);
        tracep->fullWData(oldp+4769,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__335__KET____DOT__mask),386);
        tracep->fullWData(oldp+4782,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__336__KET____DOT__mask),386);
        tracep->fullWData(oldp+4795,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__337__KET____DOT__mask),386);
        tracep->fullWData(oldp+4808,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__338__KET____DOT__mask),386);
        tracep->fullWData(oldp+4821,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__339__KET____DOT__mask),386);
        tracep->fullWData(oldp+4834,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__340__KET____DOT__mask),386);
        tracep->fullWData(oldp+4847,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__341__KET____DOT__mask),386);
        tracep->fullWData(oldp+4860,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__342__KET____DOT__mask),386);
        tracep->fullWData(oldp+4873,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__343__KET____DOT__mask),386);
        tracep->fullWData(oldp+4886,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__344__KET____DOT__mask),386);
        tracep->fullWData(oldp+4899,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__345__KET____DOT__mask),386);
        tracep->fullWData(oldp+4912,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__346__KET____DOT__mask),386);
        tracep->fullWData(oldp+4925,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__347__KET____DOT__mask),386);
        tracep->fullWData(oldp+4938,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__348__KET____DOT__mask),386);
        tracep->fullWData(oldp+4951,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__349__KET____DOT__mask),386);
        tracep->fullWData(oldp+4964,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__350__KET____DOT__mask),386);
        tracep->fullWData(oldp+4977,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__351__KET____DOT__mask),386);
        tracep->fullWData(oldp+4990,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__352__KET____DOT__mask),386);
        tracep->fullWData(oldp+5003,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__353__KET____DOT__mask),386);
        tracep->fullWData(oldp+5016,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__354__KET____DOT__mask),386);
        tracep->fullWData(oldp+5029,(vlSelf->ascon_top__DOT__lfsr_out),355);
        tracep->fullIData(oldp+5041,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
        tracep->fullIData(oldp+5042,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
        __Vtemp22539[0U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[0U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[0U]);
        __Vtemp22539[1U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[1U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[1U]);
        __Vtemp22539[2U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[2U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[2U]);
        __Vtemp22539[3U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[3U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[3U]);
        __Vtemp22539[4U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[4U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[4U]);
        __Vtemp22539[5U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[5U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[5U]);
        __Vtemp22539[6U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[6U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[6U]);
        __Vtemp22539[7U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[7U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[7U]);
        __Vtemp22539[8U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[8U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[8U]);
        __Vtemp22539[9U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[9U] 
                            & vlSelf->ascon_top__DOT__lfsr_out[9U]);
        tracep->fullWData(oldp+5043,(__Vtemp22539),300);
        tracep->fullQData(oldp+5053,((0x7fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__lfsr_out[0xbU])) 
                                          << 0x34U) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__lfsr_out[0xaU])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__lfsr_out[9U])) 
                                               >> 0xcU))))),55);
        tracep->fullBit(oldp+5055,(vlSelf->ascon_top__DOT__extra_padding_ff));
        tracep->fullBit(oldp+5056,(vlSelf->ascon_top__DOT__shift_en));
        tracep->fullBit(oldp+5057,(vlSelf->ascon_top__DOT__shift_type));
        tracep->fullBit(oldp+5058,(vlSelf->ascon_top__DOT__last_cycle));
        tracep->fullBit(oldp+5059,(vlSelf->ascon_top__DOT__reg_key1_load));
        tracep->fullBit(oldp+5060,(vlSelf->ascon_top__DOT__reg_key2_load));
        tracep->fullBit(oldp+5061,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
        tracep->fullBit(oldp+5062,(vlSelf->ascon_top__DOT__sel_masked_round));
        tracep->fullBit(oldp+5063,(vlSelf->ascon_top__DOT__sel_xor_signal));
        tracep->fullBit(oldp+5064,(vlSelf->ascon_top__DOT__shift_enable_sipo));
        tracep->fullBit(oldp+5065,(vlSelf->ascon_top__DOT__last_cycle_sipo));
        tracep->fullCData(oldp+5066,(vlSelf->ascon_top__DOT__round_counter),4);
        tracep->fullCData(oldp+5067,(vlSelf->ascon_top__DOT__bit_counter),4);
        tracep->fullQData(oldp+5068,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
        tracep->fullQData(oldp+5070,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
        tracep->fullQData(oldp+5072,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
        tracep->fullQData(oldp+5074,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
        tracep->fullQData(oldp+5076,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
        tracep->fullQData(oldp+5078,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
        tracep->fullQData(oldp+5080,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
        tracep->fullQData(oldp+5082,((0xf0ULL - (0xfULL 
                                                 * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
        VL_EXTEND_WQ(66,64, __Vtemp22540, (0xf0ULL 
                                           - (0xfULL 
                                              * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
        tracep->fullWData(oldp+5084,(__Vtemp22540),66);
        tracep->fullCData(oldp+5087,(vlSelf->ascon_top__DOT__rc_block[0]),6);
        tracep->fullCData(oldp+5088,(vlSelf->ascon_top__DOT__rc_block[1]),6);
        tracep->fullCData(oldp+5089,(vlSelf->ascon_top__DOT__rc_block[2]),6);
        tracep->fullCData(oldp+5090,(vlSelf->ascon_top__DOT__rc_block[3]),6);
        tracep->fullCData(oldp+5091,(vlSelf->ascon_top__DOT__rc_block[4]),6);
        tracep->fullCData(oldp+5092,(vlSelf->ascon_top__DOT__rc_block[5]),6);
        tracep->fullCData(oldp+5093,(vlSelf->ascon_top__DOT__rc_block[6]),6);
        tracep->fullCData(oldp+5094,(vlSelf->ascon_top__DOT__rc_block[7]),6);
        tracep->fullCData(oldp+5095,(vlSelf->ascon_top__DOT__rc_block[8]),6);
        tracep->fullCData(oldp+5096,(vlSelf->ascon_top__DOT__rc_block[9]),6);
        tracep->fullCData(oldp+5097,(vlSelf->ascon_top__DOT__rc_block[10]),6);
        tracep->fullQData(oldp+5098,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                       ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                       : 0x8000000000000000ULL)),64);
        tracep->fullCData(oldp+5100,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
        tracep->fullCData(oldp+5101,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),4);
        tracep->fullCData(oldp+5102,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
        tracep->fullBit(oldp+5103,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
        tracep->fullBit(oldp+5104,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
        __Vtemp22544[0U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
        __Vtemp22544[1U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                    >> 0x20U));
        __Vtemp22544[2U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
        __Vtemp22544[3U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                    >> 0x20U));
        __Vtemp22544[4U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
        __Vtemp22544[5U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                    >> 0x20U));
        __Vtemp22544[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                     ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                     : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                    [3U]));
        __Vtemp22544[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [3U]) >> 0x20U));
        __Vtemp22544[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                     ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                 ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                 : 0x8000000000000000ULL))
                                     : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                    [4U]));
        __Vtemp22544[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                  ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                  : 0x8000000000000000ULL))
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [4U]) >> 0x20U));
        tracep->fullWData(oldp+5105,(__Vtemp22544),320);
        tracep->fullQData(oldp+5115,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                       ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                          [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                   ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                   : 0x8000000000000000ULL))
                                       : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                      [4U])),64);
        tracep->fullWData(oldp+5117,(vlSelf->ascon_top__DOT__state_reg_out),320);
        tracep->fullWData(oldp+5127,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1),320);
        tracep->fullQData(oldp+5137,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U])))),64);
        tracep->fullQData(oldp+5139,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U])))),64);
        tracep->fullQData(oldp+5141,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U])))),64);
        tracep->fullQData(oldp+5143,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[6U])))),64);
        tracep->fullQData(oldp+5145,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[8U])))),64);
        tracep->fullWData(oldp+5147,(vlSelf->ascon_top__DOT__mux_1st_x0),66);
        tracep->fullWData(oldp+5150,(vlSelf->ascon_top__DOT__mux_1st_x1),66);
        tracep->fullWData(oldp+5153,(vlSelf->ascon_top__DOT__mux_1st_x3),66);
        tracep->fullWData(oldp+5156,(vlSelf->ascon_top__DOT__mux_1st_x4),66);
        tracep->fullQData(oldp+5159,(vlSelf->ascon_top__DOT__sbox_input[0]),55);
        tracep->fullQData(oldp+5161,(vlSelf->ascon_top__DOT__sbox_input[1]),55);
        tracep->fullQData(oldp+5163,(vlSelf->ascon_top__DOT__sbox_input[2]),55);
        tracep->fullQData(oldp+5165,(vlSelf->ascon_top__DOT__sbox_input[3]),55);
        tracep->fullQData(oldp+5167,(vlSelf->ascon_top__DOT__sbox_input[4]),55);
        tracep->fullQData(oldp+5169,(vlSelf->ascon_top__DOT__sbox_input[5]),55);
        tracep->fullQData(oldp+5171,(vlSelf->ascon_top__DOT__sbox_output[0]),55);
        tracep->fullQData(oldp+5173,(vlSelf->ascon_top__DOT__sbox_output[1]),55);
        tracep->fullQData(oldp+5175,(vlSelf->ascon_top__DOT__sbox_output[2]),55);
        tracep->fullQData(oldp+5177,(vlSelf->ascon_top__DOT__sbox_output[3]),55);
        tracep->fullQData(oldp+5179,(vlSelf->ascon_top__DOT__sbox_output[4]),55);
        tracep->fullQData(oldp+5181,(vlSelf->ascon_top__DOT__sbox_output[5]),55);
        tracep->fullWData(oldp+5183,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
        tracep->fullQData(oldp+5193,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
        tracep->fullQData(oldp+5195,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
        tracep->fullQData(oldp+5197,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
        tracep->fullQData(oldp+5199,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
        tracep->fullQData(oldp+5201,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
        tracep->fullIData(oldp+5203,(vlSelf->ascon_top__DOT__unnamedblk1__DOT__p),32);
        tracep->fullQData(oldp+5204,(vlSelf->ascon_top__DOT__state_reg__DOT__state[0]),64);
        tracep->fullQData(oldp+5206,(vlSelf->ascon_top__DOT__state_reg__DOT__state[1]),64);
        tracep->fullQData(oldp+5208,(vlSelf->ascon_top__DOT__state_reg__DOT__state[2]),64);
        tracep->fullQData(oldp+5210,(vlSelf->ascon_top__DOT__state_reg__DOT__state[3]),64);
        tracep->fullQData(oldp+5212,(vlSelf->ascon_top__DOT__state_reg__DOT__state[4]),64);
        tracep->fullIData(oldp+5214,(vlSelf->ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
        tracep->fullQData(oldp+5215,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x0[0U])))),64);
        tracep->fullCData(oldp+5217,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x0[0U])),6);
        tracep->fullQData(oldp+5218,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x1[0U])))),64);
        tracep->fullCData(oldp+5220,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x1[0U])),6);
        tracep->fullQData(oldp+5221,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x3[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x3[0U])))),64);
        tracep->fullCData(oldp+5223,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x3[0U])),6);
        tracep->fullQData(oldp+5224,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x4[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x4[0U])))),64);
        tracep->fullCData(oldp+5226,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x4[0U])),6);
        tracep->fullQData(oldp+5227,(vlSelf->ascon_top__DOT__sbox_input
                                     [0U]),55);
        tracep->fullQData(oldp+5229,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5231,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),11);
        tracep->fullSData(oldp+5232,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),11);
        tracep->fullSData(oldp+5233,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),11);
        tracep->fullSData(oldp+5234,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),11);
        tracep->fullSData(oldp+5235,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),11);
        tracep->fullSData(oldp+5236,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5237,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5238,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5239,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5240,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5241,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5242,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5243,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5244,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5245,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5246,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5247,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5248,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5249,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5250,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5251,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5252,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5253,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5254,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5255,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5256,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5257,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5258,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5259,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5260,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5261,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5262,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5263,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5264,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5265,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5266,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5267,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5268,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5269,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5270,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5271,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5272,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5273,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5274,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5275,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5276,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5277,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5278,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5279,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5280,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5281,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5282,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5283,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5284,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5285,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5286,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5287,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5288,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5289,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5290,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5291,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),11);
        tracep->fullSData(oldp+5292,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),11);
        tracep->fullSData(oldp+5293,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),11);
        tracep->fullSData(oldp+5294,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),11);
        tracep->fullSData(oldp+5295,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),11);
        tracep->fullIData(oldp+5296,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+5297,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+5298,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullSData(oldp+5299,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
        tracep->fullIData(oldp+5300,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        tracep->fullQData(oldp+5301,(vlSelf->ascon_top__DOT__sbox_input
                                     [1U]),55);
        tracep->fullQData(oldp+5303,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5305,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0]),11);
        tracep->fullSData(oldp+5306,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1]),11);
        tracep->fullSData(oldp+5307,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2]),11);
        tracep->fullSData(oldp+5308,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3]),11);
        tracep->fullSData(oldp+5309,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4]),11);
        tracep->fullSData(oldp+5310,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5311,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5312,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5313,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5314,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5315,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5316,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5317,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5318,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5319,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5320,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5321,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5322,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5323,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5324,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5325,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5326,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5327,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5328,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5329,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5330,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5331,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5332,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5333,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5334,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5335,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5336,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5337,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5338,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5339,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5340,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5341,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5342,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5343,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5344,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5345,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5346,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5347,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5348,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5349,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5350,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5351,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5352,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5353,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5354,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5355,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5356,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5357,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5358,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5359,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5360,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5361,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5362,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5363,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5364,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5365,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0]),11);
        tracep->fullSData(oldp+5366,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1]),11);
        tracep->fullSData(oldp+5367,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2]),11);
        tracep->fullSData(oldp+5368,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3]),11);
        tracep->fullSData(oldp+5369,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4]),11);
        tracep->fullIData(oldp+5370,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+5371,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+5372,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullSData(oldp+5373,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
        tracep->fullIData(oldp+5374,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        tracep->fullQData(oldp+5375,(vlSelf->ascon_top__DOT__sbox_input
                                     [2U]),55);
        tracep->fullQData(oldp+5377,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5379,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0]),11);
        tracep->fullSData(oldp+5380,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1]),11);
        tracep->fullSData(oldp+5381,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2]),11);
        tracep->fullSData(oldp+5382,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3]),11);
        tracep->fullSData(oldp+5383,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4]),11);
        tracep->fullSData(oldp+5384,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5385,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5386,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5387,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5388,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5389,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5390,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5391,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5392,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5393,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5394,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5395,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5396,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5397,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5398,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5399,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5400,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5401,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5402,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5403,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5404,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5405,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5406,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5407,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5408,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5409,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5410,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5411,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5412,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5413,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5414,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5415,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5416,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5417,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5418,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5419,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5420,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5421,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5422,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5423,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5424,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5425,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5426,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5427,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5428,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5429,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5430,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5431,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5432,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5433,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5434,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5435,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5436,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5437,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5438,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5439,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0]),11);
        tracep->fullSData(oldp+5440,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1]),11);
        tracep->fullSData(oldp+5441,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2]),11);
        tracep->fullSData(oldp+5442,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3]),11);
        tracep->fullSData(oldp+5443,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4]),11);
        tracep->fullIData(oldp+5444,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+5445,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+5446,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullSData(oldp+5447,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
        tracep->fullIData(oldp+5448,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        tracep->fullQData(oldp+5449,(vlSelf->ascon_top__DOT__sbox_input
                                     [3U]),55);
        tracep->fullQData(oldp+5451,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5453,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0]),11);
        tracep->fullSData(oldp+5454,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1]),11);
        tracep->fullSData(oldp+5455,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2]),11);
        tracep->fullSData(oldp+5456,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3]),11);
        tracep->fullSData(oldp+5457,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4]),11);
        tracep->fullSData(oldp+5458,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5459,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5460,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5461,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5462,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5463,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5464,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5465,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5466,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5467,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5468,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5469,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5470,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5471,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5472,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5473,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5474,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5475,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5476,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5477,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5478,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5479,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5480,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5481,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5482,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5483,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5484,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5485,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5486,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5487,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5488,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5489,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5490,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5491,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5492,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5493,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5494,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5495,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5496,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5497,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5498,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5499,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5500,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5501,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5502,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5503,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5504,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5505,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5506,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5507,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5508,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5509,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5510,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5511,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5512,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5513,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0]),11);
        tracep->fullSData(oldp+5514,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1]),11);
        tracep->fullSData(oldp+5515,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[2]),11);
        tracep->fullSData(oldp+5516,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[3]),11);
        tracep->fullSData(oldp+5517,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[4]),11);
        tracep->fullIData(oldp+5518,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+5519,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+5520,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullSData(oldp+5521,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
        tracep->fullIData(oldp+5522,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        tracep->fullQData(oldp+5523,(vlSelf->ascon_top__DOT__sbox_input
                                     [4U]),55);
        tracep->fullQData(oldp+5525,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5527,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0]),11);
        tracep->fullSData(oldp+5528,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1]),11);
        tracep->fullSData(oldp+5529,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2]),11);
        tracep->fullSData(oldp+5530,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3]),11);
        tracep->fullSData(oldp+5531,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4]),11);
        tracep->fullSData(oldp+5532,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5533,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5534,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5535,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5536,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5537,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5538,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5539,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5540,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5541,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5542,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5543,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5544,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5545,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5546,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5547,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5548,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5549,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5550,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5551,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5552,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5553,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5554,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5555,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5556,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5557,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5558,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5559,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5560,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5561,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5562,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5563,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5564,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5565,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5566,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5567,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5568,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5569,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5570,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5571,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5572,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5573,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5574,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5575,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5576,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5577,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5578,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5579,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5580,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5581,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5582,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5583,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5584,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5585,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5586,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5587,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[0]),11);
        tracep->fullSData(oldp+5588,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[1]),11);
        tracep->fullSData(oldp+5589,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[2]),11);
        tracep->fullSData(oldp+5590,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[3]),11);
        tracep->fullSData(oldp+5591,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[4]),11);
        tracep->fullIData(oldp+5592,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+5593,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+5594,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullSData(oldp+5595,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
        tracep->fullIData(oldp+5596,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        tracep->fullQData(oldp+5597,(vlSelf->ascon_top__DOT__sbox_input
                                     [5U]),55);
        tracep->fullQData(oldp+5599,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5601,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0]),11);
        tracep->fullSData(oldp+5602,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1]),11);
        tracep->fullSData(oldp+5603,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2]),11);
        tracep->fullSData(oldp+5604,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3]),11);
        tracep->fullSData(oldp+5605,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4]),11);
        tracep->fullSData(oldp+5606,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5607,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5608,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5609,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5610,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5611,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5612,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5613,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5614,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5615,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5616,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5617,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5618,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5619,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5620,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5621,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5622,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5623,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5624,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5625,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5626,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5627,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5628,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5629,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5630,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5631,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5632,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5633,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5634,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5635,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5636,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5637,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5638,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5639,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5640,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5641,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5642,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5643,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5644,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5645,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5646,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5647,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5648,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5649,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5650,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5651,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5652,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5653,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5654,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5655,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5656,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5657,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5658,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5659,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5660,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5661,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[0]),11);
        tracep->fullSData(oldp+5662,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[1]),11);
        tracep->fullSData(oldp+5663,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[2]),11);
        tracep->fullSData(oldp+5664,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[3]),11);
        tracep->fullSData(oldp+5665,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[4]),11);
        tracep->fullIData(oldp+5666,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+5667,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+5668,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullSData(oldp+5669,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
        tracep->fullIData(oldp+5670,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        tracep->fullQData(oldp+5671,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
        tracep->fullQData(oldp+5673,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
        tracep->fullQData(oldp+5675,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
        tracep->fullQData(oldp+5677,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
        tracep->fullQData(oldp+5679,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
        tracep->fullBit(oldp+5681,(vlSelf->ascon_top__DOT__write_en));
        tracep->fullBit(oldp+5682,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
        tracep->fullBit(oldp+5683,(vlSelf->ascon_top__DOT__sel_init_load));
        tracep->fullBit(oldp+5684,(vlSelf->ascon_top__DOT__sel_padding));
        tracep->fullBit(oldp+5685,(vlSelf->ascon_top__DOT__sel_absorb_data));
        tracep->fullWData(oldp+5686,(vlSelf->ascon_top__DOT__state_reg_in),320);
        tracep->fullWData(oldp+5696,(vlSelf->ascon_top__DOT__data_in_padded),128);
        tracep->fullWData(oldp+5700,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
        tracep->fullIData(oldp+5704,(vlSelf->ascon_top__DOT__unnamedblk5__DOT__i),32);
        tracep->fullBit(oldp+5705,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
        tracep->fullCData(oldp+5706,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
        tracep->fullBit(oldp+5707,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
        tracep->fullBit(oldp+5708,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
        tracep->fullBit(oldp+5709,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
        tracep->fullBit(oldp+5710,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
        tracep->fullQData(oldp+5711,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0]),64);
        tracep->fullQData(oldp+5713,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1]),64);
        tracep->fullQData(oldp+5715,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2]),64);
        tracep->fullQData(oldp+5717,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3]),64);
        tracep->fullQData(oldp+5719,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4]),64);
        tracep->fullWData(oldp+5721,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1),320);
        tracep->fullIData(oldp+5731,(vlSelf->ascon_top__DOT__recombine_shares),30);
        tracep->fullWData(oldp+5732,(vlSelf->ascon_top__DOT__mux_1st_x2),66);
        tracep->fullWData(oldp+5735,(vlSelf->ascon_top__DOT__shares_out),330);
        tracep->fullIData(oldp+5746,(vlSelf->ascon_top__DOT__affine_layer_in[0]),30);
        tracep->fullIData(oldp+5747,(vlSelf->ascon_top__DOT__affine_layer_in[1]),30);
        tracep->fullIData(oldp+5748,(vlSelf->ascon_top__DOT__affine_layer_in[2]),30);
        tracep->fullIData(oldp+5749,(vlSelf->ascon_top__DOT__affine_layer_in[3]),30);
        tracep->fullIData(oldp+5750,(vlSelf->ascon_top__DOT__affine_layer_in[4]),30);
        tracep->fullIData(oldp+5751,(vlSelf->ascon_top__DOT__affine_layer_in[5]),30);
        tracep->fullIData(oldp+5752,(vlSelf->ascon_top__DOT__affine_layer_in[6]),30);
        tracep->fullIData(oldp+5753,(vlSelf->ascon_top__DOT__affine_layer_in[7]),30);
        tracep->fullIData(oldp+5754,(vlSelf->ascon_top__DOT__affine_layer_in[8]),30);
        tracep->fullIData(oldp+5755,(vlSelf->ascon_top__DOT__affine_layer_in[9]),30);
        tracep->fullIData(oldp+5756,(vlSelf->ascon_top__DOT__affine_layer_in[10]),30);
        tracep->fullIData(oldp+5757,(vlSelf->ascon_top__DOT__affine_layer_out[0]),30);
        tracep->fullIData(oldp+5758,(vlSelf->ascon_top__DOT__affine_layer_out[1]),30);
        tracep->fullIData(oldp+5759,(vlSelf->ascon_top__DOT__affine_layer_out[2]),30);
        tracep->fullIData(oldp+5760,(vlSelf->ascon_top__DOT__affine_layer_out[3]),30);
        tracep->fullIData(oldp+5761,(vlSelf->ascon_top__DOT__affine_layer_out[4]),30);
        tracep->fullIData(oldp+5762,(vlSelf->ascon_top__DOT__affine_layer_out[5]),30);
        tracep->fullIData(oldp+5763,(vlSelf->ascon_top__DOT__affine_layer_out[6]),30);
        tracep->fullIData(oldp+5764,(vlSelf->ascon_top__DOT__affine_layer_out[7]),30);
        tracep->fullIData(oldp+5765,(vlSelf->ascon_top__DOT__affine_layer_out[8]),30);
        tracep->fullIData(oldp+5766,(vlSelf->ascon_top__DOT__affine_layer_out[9]),30);
        tracep->fullIData(oldp+5767,(vlSelf->ascon_top__DOT__affine_layer_out[10]),30);
        tracep->fullQData(oldp+5768,(vlSelf->ascon_top__DOT__next_sbox_input[0]),55);
        tracep->fullQData(oldp+5770,(vlSelf->ascon_top__DOT__next_sbox_input[1]),55);
        tracep->fullQData(oldp+5772,(vlSelf->ascon_top__DOT__next_sbox_input[2]),55);
        tracep->fullQData(oldp+5774,(vlSelf->ascon_top__DOT__next_sbox_input[3]),55);
        tracep->fullQData(oldp+5776,(vlSelf->ascon_top__DOT__next_sbox_input[4]),55);
        tracep->fullQData(oldp+5778,(vlSelf->ascon_top__DOT__next_sbox_input[5]),55);
        tracep->fullQData(oldp+5780,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),55);
        tracep->fullQData(oldp+5782,(vlSelf->ascon_top__DOT__sbox_output_unmasked[1]),55);
        tracep->fullQData(oldp+5784,(vlSelf->ascon_top__DOT__sbox_output_unmasked[2]),55);
        tracep->fullQData(oldp+5786,(vlSelf->ascon_top__DOT__sbox_output_unmasked[3]),55);
        tracep->fullQData(oldp+5788,(vlSelf->ascon_top__DOT__sbox_output_unmasked[4]),55);
        tracep->fullQData(oldp+5790,(vlSelf->ascon_top__DOT__sbox_output_unmasked[5]),55);
        tracep->fullQData(oldp+5792,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),55);
        tracep->fullQData(oldp+5794,(vlSelf->ascon_top__DOT__mux_sbox_out[1]),55);
        tracep->fullQData(oldp+5796,(vlSelf->ascon_top__DOT__mux_sbox_out[2]),55);
        tracep->fullQData(oldp+5798,(vlSelf->ascon_top__DOT__mux_sbox_out[3]),55);
        tracep->fullQData(oldp+5800,(vlSelf->ascon_top__DOT__mux_sbox_out[4]),55);
        tracep->fullQData(oldp+5802,(vlSelf->ascon_top__DOT__mux_sbox_out[5]),55);
        tracep->fullIData(oldp+5804,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),30);
        tracep->fullIData(oldp+5805,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),30);
        tracep->fullIData(oldp+5806,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),30);
        tracep->fullIData(oldp+5807,(vlSelf->ascon_top__DOT__affine_layer2nd_in[3]),30);
        tracep->fullIData(oldp+5808,(vlSelf->ascon_top__DOT__affine_layer2nd_in[4]),30);
        tracep->fullIData(oldp+5809,(vlSelf->ascon_top__DOT__affine_layer2nd_in[5]),30);
        tracep->fullIData(oldp+5810,(vlSelf->ascon_top__DOT__affine_layer2nd_in[6]),30);
        tracep->fullIData(oldp+5811,(vlSelf->ascon_top__DOT__affine_layer2nd_in[7]),30);
        tracep->fullIData(oldp+5812,(vlSelf->ascon_top__DOT__affine_layer2nd_in[8]),30);
        tracep->fullIData(oldp+5813,(vlSelf->ascon_top__DOT__affine_layer2nd_in[9]),30);
        tracep->fullIData(oldp+5814,(vlSelf->ascon_top__DOT__affine_layer2nd_in[10]),30);
        tracep->fullIData(oldp+5815,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),30);
        tracep->fullIData(oldp+5816,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),30);
        tracep->fullIData(oldp+5817,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),30);
        tracep->fullIData(oldp+5818,(vlSelf->ascon_top__DOT__affine_layer2nd_out[3]),30);
        tracep->fullIData(oldp+5819,(vlSelf->ascon_top__DOT__affine_layer2nd_out[4]),30);
        tracep->fullIData(oldp+5820,(vlSelf->ascon_top__DOT__affine_layer2nd_out[5]),30);
        tracep->fullIData(oldp+5821,(vlSelf->ascon_top__DOT__affine_layer2nd_out[6]),30);
        tracep->fullIData(oldp+5822,(vlSelf->ascon_top__DOT__affine_layer2nd_out[7]),30);
        tracep->fullIData(oldp+5823,(vlSelf->ascon_top__DOT__affine_layer2nd_out[8]),30);
        tracep->fullIData(oldp+5824,(vlSelf->ascon_top__DOT__affine_layer2nd_out[9]),30);
        tracep->fullIData(oldp+5825,(vlSelf->ascon_top__DOT__affine_layer2nd_out[10]),30);
        tracep->fullCData(oldp+5826,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [0U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5827,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [1U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5828,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [2U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5829,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [3U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5830,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [4U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5831,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [5U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5832,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [6U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5833,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [7U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5834,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [8U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5835,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [9U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+5836,((0x3fU & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [0xaU] 
                                                  >> 0xcU)))),6);
        tracep->fullSData(oldp+5837,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5838,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5839,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5840,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5841,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5842,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5843,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5844,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5845,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5846,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5847,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5848,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5849,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5850,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5851,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5852,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5853,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5854,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5855,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5856,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5857,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5858,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5859,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5860,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5861,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5862,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5863,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5864,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5865,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),11);
        tracep->fullSData(oldp+5866,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),11);
        tracep->fullQData(oldp+5867,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
        tracep->fullQData(oldp+5869,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
        tracep->fullQData(oldp+5871,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x2[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x2[0U])))),64);
        tracep->fullCData(oldp+5873,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x2[0U])),6);
        tracep->fullQData(oldp+5874,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
        tracep->fullQData(oldp+5876,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
        tracep->fullQData(oldp+5878,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
        tracep->fullIData(oldp+5880,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),30);
        tracep->fullQData(oldp+5881,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5883,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5884,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5885,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5886,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5887,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5888,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5889,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5890,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5891,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5892,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5893,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5894,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5895,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5896,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5897,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5898,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5899,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5900,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5901,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5902,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5903,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5904,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5905,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5906,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5907,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5908,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5909,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5910,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5911,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5912,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5913,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5914,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5915,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5916,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5917,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5918,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5919,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5920,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5921,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5922,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5923,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5924,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5925,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5926,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5927,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5928,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5929,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5930,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5931,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5932,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5933,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5934,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5935,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5936,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5937,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5938,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        tracep->fullSData(oldp+5939,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        tracep->fullSData(oldp+5940,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        tracep->fullSData(oldp+5941,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        tracep->fullSData(oldp+5942,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        tracep->fullIData(oldp+5943,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        tracep->fullSData(oldp+5944,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
        tracep->fullSData(oldp+5945,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
        tracep->fullSData(oldp+5946,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
        tracep->fullSData(oldp+5947,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
        tracep->fullIData(oldp+5948,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->fullIData(oldp+5949,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        tracep->fullQData(oldp+5950,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+5952,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U][0U])),11);
        tracep->fullSData(oldp+5953,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5954,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5955,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5956,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5957,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5958,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5959,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5960,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5961,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5962,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5963,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U][0U])),11);
        tracep->fullSData(oldp+5964,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5965,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5966,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5967,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5968,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5969,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5970,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5971,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5972,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5973,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5974,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U][0U])),11);
        tracep->fullSData(oldp+5975,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5976,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5977,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5978,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5979,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5980,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5981,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5982,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5983,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5984,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5985,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U][0U])),11);
        tracep->fullSData(oldp+5986,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5987,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5988,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+5989,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+5990,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+5991,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+5992,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+5993,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+5994,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+5995,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+5996,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U][0U])),11);
        tracep->fullSData(oldp+5997,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+5998,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+5999,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6000,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6001,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6002,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6003,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6004,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6005,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6006,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6007,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        tracep->fullSData(oldp+6008,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        tracep->fullSData(oldp+6009,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        tracep->fullSData(oldp+6010,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        tracep->fullSData(oldp+6011,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        tracep->fullIData(oldp+6012,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        tracep->fullSData(oldp+6013,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
        tracep->fullSData(oldp+6014,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
        tracep->fullSData(oldp+6015,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
        tracep->fullSData(oldp+6016,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
        tracep->fullIData(oldp+6017,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->fullIData(oldp+6018,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        tracep->fullQData(oldp+6019,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+6021,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U][0U])),11);
        tracep->fullSData(oldp+6022,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6023,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6024,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6025,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6026,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6027,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6028,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6029,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6030,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6031,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6032,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U][0U])),11);
        tracep->fullSData(oldp+6033,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6034,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6035,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6036,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6037,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6038,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6039,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6040,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6041,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6042,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6043,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U][0U])),11);
        tracep->fullSData(oldp+6044,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6045,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6046,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6047,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6048,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6049,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6050,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6051,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6052,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6053,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6054,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U][0U])),11);
        tracep->fullSData(oldp+6055,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6056,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6057,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6058,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6059,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6060,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6061,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6062,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6063,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6064,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6065,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U][0U])),11);
        tracep->fullSData(oldp+6066,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6067,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6068,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6069,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6070,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6071,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6072,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6073,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6074,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6075,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6076,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        tracep->fullSData(oldp+6077,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        tracep->fullSData(oldp+6078,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        tracep->fullSData(oldp+6079,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        tracep->fullSData(oldp+6080,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        tracep->fullIData(oldp+6081,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        tracep->fullSData(oldp+6082,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
        tracep->fullSData(oldp+6083,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
        tracep->fullSData(oldp+6084,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
        tracep->fullSData(oldp+6085,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
        tracep->fullIData(oldp+6086,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->fullIData(oldp+6087,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        tracep->fullQData(oldp+6088,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+6090,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U][0U])),11);
        tracep->fullSData(oldp+6091,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6092,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6093,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6094,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6095,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6096,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6097,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6098,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6099,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6100,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6101,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U][0U])),11);
        tracep->fullSData(oldp+6102,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6103,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6104,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6105,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6106,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6107,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6108,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6109,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6110,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6111,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6112,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U][0U])),11);
        tracep->fullSData(oldp+6113,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6114,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6115,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6116,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6117,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6118,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6119,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6120,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6121,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6122,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6123,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U][0U])),11);
        tracep->fullSData(oldp+6124,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6125,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6126,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6127,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6128,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6129,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6130,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6131,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6132,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6133,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6134,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U][0U])),11);
        tracep->fullSData(oldp+6135,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6136,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6137,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6138,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6139,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6140,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6141,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6142,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6143,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6144,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6145,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        tracep->fullSData(oldp+6146,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        tracep->fullSData(oldp+6147,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        tracep->fullSData(oldp+6148,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        tracep->fullSData(oldp+6149,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        tracep->fullIData(oldp+6150,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        tracep->fullSData(oldp+6151,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
        tracep->fullSData(oldp+6152,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
        tracep->fullSData(oldp+6153,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
        tracep->fullSData(oldp+6154,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
        tracep->fullIData(oldp+6155,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->fullIData(oldp+6156,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        tracep->fullQData(oldp+6157,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+6159,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U][0U])),11);
        tracep->fullSData(oldp+6160,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6161,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6162,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6163,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6164,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6165,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6166,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6167,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6168,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6169,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6170,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U][0U])),11);
        tracep->fullSData(oldp+6171,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6172,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6173,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6174,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6175,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6176,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6177,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6178,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6179,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6180,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6181,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U][0U])),11);
        tracep->fullSData(oldp+6182,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6183,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6184,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6185,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6186,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6187,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6188,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6189,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6190,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6191,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6192,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U][0U])),11);
        tracep->fullSData(oldp+6193,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6194,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6195,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6196,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6197,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6198,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6199,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6200,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6201,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6202,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6203,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U][0U])),11);
        tracep->fullSData(oldp+6204,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6205,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6206,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6207,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6208,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6209,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6210,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6211,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6212,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6213,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6214,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        tracep->fullSData(oldp+6215,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        tracep->fullSData(oldp+6216,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        tracep->fullSData(oldp+6217,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        tracep->fullSData(oldp+6218,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        tracep->fullIData(oldp+6219,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        tracep->fullSData(oldp+6220,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
        tracep->fullSData(oldp+6221,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
        tracep->fullSData(oldp+6222,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
        tracep->fullSData(oldp+6223,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
        tracep->fullIData(oldp+6224,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->fullIData(oldp+6225,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        tracep->fullQData(oldp+6226,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                       [4U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                        [3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                         [2U])) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                            [1U] 
                                                            << 0xbU) 
                                                           | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                           [0U]))))))),55);
        tracep->fullSData(oldp+6228,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [0U][0U])),11);
        tracep->fullSData(oldp+6229,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6230,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6231,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6232,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6233,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6234,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6235,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6236,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6237,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6238,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [0U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6239,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [1U][0U])),11);
        tracep->fullSData(oldp+6240,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6241,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6242,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6243,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6244,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6245,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6246,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6247,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6248,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6249,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [1U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6250,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [2U][0U])),11);
        tracep->fullSData(oldp+6251,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6252,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6253,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6254,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6255,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6256,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6257,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6258,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6259,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6260,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [2U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6261,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [3U][0U])),11);
        tracep->fullSData(oldp+6262,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6263,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6264,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6265,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6266,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6267,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6268,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6269,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6270,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6271,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [3U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6272,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                      [4U][0U])),11);
        tracep->fullSData(oldp+6273,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][0U] 
                                                >> 0xbU))),11);
        tracep->fullSData(oldp+6274,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0x16U)))),11);
        tracep->fullSData(oldp+6275,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 1U))),11);
        tracep->fullSData(oldp+6276,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][1U] 
                                                >> 0xcU))),11);
        tracep->fullSData(oldp+6277,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][2U] 
                                                 << 9U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0x17U)))),11);
        tracep->fullSData(oldp+6278,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 2U))),11);
        tracep->fullSData(oldp+6279,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][2U] 
                                                >> 0xdU))),11);
        tracep->fullSData(oldp+6280,((0x7ffU & ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U][3U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0x18U)))),11);
        tracep->fullSData(oldp+6281,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 3U))),11);
        tracep->fullSData(oldp+6282,((0x7ffU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                [4U][3U] 
                                                >> 0xeU))),11);
        tracep->fullSData(oldp+6283,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        tracep->fullSData(oldp+6284,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        tracep->fullSData(oldp+6285,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        tracep->fullSData(oldp+6286,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        tracep->fullSData(oldp+6287,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        tracep->fullIData(oldp+6288,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        tracep->fullSData(oldp+6289,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
        tracep->fullSData(oldp+6290,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
        tracep->fullSData(oldp+6291,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
        tracep->fullSData(oldp+6292,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
        tracep->fullIData(oldp+6293,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->fullIData(oldp+6294,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        tracep->fullBit(oldp+6295,(vlSelf->clk));
        tracep->fullBit(oldp+6296,(vlSelf->reset_n));
        tracep->fullBit(oldp+6297,(vlSelf->start));
        tracep->fullQData(oldp+6298,(vlSelf->key1),64);
        tracep->fullQData(oldp+6300,(vlSelf->key2),64);
        tracep->fullBit(oldp+6302,(vlSelf->key_valid));
        tracep->fullQData(oldp+6303,(vlSelf->nonce1),64);
        tracep->fullQData(oldp+6305,(vlSelf->nonce2),64);
        tracep->fullQData(oldp+6307,(vlSelf->initialVector),64);
        tracep->fullWData(oldp+6309,(vlSelf->data_in),128);
        tracep->fullBit(oldp+6313,(vlSelf->valid_data_in));
        tracep->fullBit(oldp+6314,(vlSelf->last_block));
        tracep->fullCData(oldp+6315,(vlSelf->valid_bytes),5);
        tracep->fullBit(oldp+6316,(vlSelf->EOT));
        tracep->fullBit(oldp+6317,(vlSelf->ciphertext_valid));
        tracep->fullWData(oldp+6318,(vlSelf->ciphertext),128);
        tracep->fullBit(oldp+6322,(vlSelf->done));
        tracep->fullBit(oldp+6323,(vlSelf->ready_tag));
        tracep->fullQData(oldp+6324,(vlSelf->tag1),64);
        tracep->fullQData(oldp+6326,(vlSelf->tag2),64);
        tracep->fullBit(oldp+6328,(vlSelf->ready_for_data));
        tracep->fullBit(oldp+6329,(vlSelf->debug_extra_padding_ff));
        tracep->fullCData(oldp+6330,(vlSelf->debug_bitcounter),4);
        tracep->fullCData(oldp+6331,(vlSelf->debug_roundcounter),4);
        tracep->fullCData(oldp+6332,(vlSelf->debug_state),5);
        tracep->fullQData(oldp+6333,(vlSelf->debug_state_0),64);
        tracep->fullQData(oldp+6335,(vlSelf->debug_state_1),64);
        tracep->fullQData(oldp+6337,(vlSelf->debug_state_2),64);
        tracep->fullQData(oldp+6339,(vlSelf->debug_state_3),64);
        tracep->fullQData(oldp+6341,(vlSelf->debug_state_4),64);
        tracep->fullQData(oldp+6343,(vlSelf->debug_round_state_0),64);
        tracep->fullQData(oldp+6345,(vlSelf->debug_round_state_1),64);
        tracep->fullQData(oldp+6347,(vlSelf->debug_round_state_2),64);
        tracep->fullQData(oldp+6349,(vlSelf->debug_round_state_3),64);
        tracep->fullQData(oldp+6351,(vlSelf->debug_round_state_4),64);
        tracep->fullQData(oldp+6353,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->fullQData(oldp+6355,(vlSelf->debug_linear_diffusion_state4),64);
        tracep->fullIData(oldp+6357,(((0x3f000000U 
                                       & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                          << 0x18U)) 
                                      | ((0xfc0000U 
                                          & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                             << 0x12U)) 
                                         | ((0x3f000U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                << 0xcU)) 
                                            | ((0xfc0U 
                                                & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))))),30);
        __Vtemp23208[0U] = (IData)(vlSelf->initialVector);
        __Vtemp23208[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp23208[2U] = (IData)(vlSelf->key1);
        __Vtemp23208[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp23208[4U] = (IData)(vlSelf->key2);
        __Vtemp23208[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp23208[6U] = (IData)(vlSelf->nonce1);
        __Vtemp23208[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp23208[8U] = (IData)(vlSelf->nonce2);
        __Vtemp23208[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->fullWData(oldp+6358,(__Vtemp23208),320);
        tracep->fullQData(oldp+6368,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                       ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                          [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                       : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                      [3U])),64);
        tracep->fullIData(oldp+6370,(0x42U),32);
        tracep->fullIData(oldp+6371,(4U),32);
        tracep->fullIData(oldp+6372,(0xbU),32);
        tracep->fullIData(oldp+6373,(6U),32);
        tracep->fullWData(oldp+6374,(Vascon_top__ConstPool__CONST_94e788c5_0),355);
        tracep->fullIData(oldp+6386,(2U),32);
        tracep->fullIData(oldp+6387,(0x10U),32);
        tracep->fullIData(oldp+6388,(0xbU),32);
        tracep->fullCData(oldp+6389,(0xbU),4);
        tracep->fullIData(oldp+6390,(5U),32);
        tracep->fullIData(oldp+6391,(0xaU),32);
        tracep->fullIData(oldp+6392,(0xaU),32);
        tracep->fullIData(oldp+6393,(5U),32);
        tracep->fullIData(oldp+6394,(0x40U),32);
        tracep->fullIData(oldp+6395,(0x140U),32);
        tracep->fullIData(oldp+6396,(0xcU),32);
        tracep->fullIData(oldp+6397,(1U),32);
        tracep->fullIData(oldp+6398,(0x163U),32);
        tracep->fullBit(oldp+6399,(0U));
        tracep->fullIData(oldp+6400,(0x1fU),32);
        tracep->fullIData(oldp+6401,(0x10000001U),31);
        tracep->fullIData(oldp+6402,(0U),32);
        tracep->fullIData(oldp+6403,(0U),32);
        tracep->fullIData(oldp+6404,(2U),32);
    }
}
