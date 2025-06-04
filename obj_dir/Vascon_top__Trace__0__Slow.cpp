// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vascon_top__Syms.h"


VL_ATTR_COLD void Vascon_top___024root__trace_init_sub__TOP__0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_init_sub__TOP__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1212,0,"key1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1214,0,"key2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1216,0,"key_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1217,0,"nonce1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1219,0,"nonce2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1221,0,"initialVector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1223,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1227,0,"valid_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"last_block",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1229,0,"valid_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1230,0,"EOT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1231,0,"random_masks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 299,0);
    tracep->declQuad(c+1241,0,"random_masks_sbox",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+1243,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1244,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1248,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"ready_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1250,0,"tag1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1252,0,"tag2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1254,0,"ready_for_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"debug_extra_padding_ff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1256,0,"debug_bitcounter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1257,0,"debug_roundcounter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1258,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+1259,0,"debug_state_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1261,0,"debug_state_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1263,0,"debug_state_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1265,0,"debug_state_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1267,0,"debug_state_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1269,0,"debug_round_state_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1271,0,"debug_round_state_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1273,0,"debug_round_state_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1275,0,"debug_round_state_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1277,0,"debug_round_state_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1279,0,"debug_linear_diffusion_state3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1281,0,"debug_linear_diffusion_state4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ascon_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1319,0,"COL_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1320,0,"STATE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1322,0,"NUMBER_BIT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1212,0,"key1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1214,0,"key2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1216,0,"key_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1217,0,"nonce1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1219,0,"nonce2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1221,0,"initialVector",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1223,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1227,0,"valid_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"last_block",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1229,0,"valid_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1230,0,"EOT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1231,0,"random_masks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 299,0);
    tracep->declQuad(c+1241,0,"random_masks_sbox",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+1243,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1244,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1248,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"ready_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1250,0,"tag1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1252,0,"tag2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1254,0,"ready_for_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"debug_extra_padding_ff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1256,0,"debug_bitcounter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1257,0,"debug_roundcounter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1258,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+1259,0,"debug_state_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1261,0,"debug_state_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1263,0,"debug_state_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1265,0,"debug_state_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1267,0,"debug_state_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1269,0,"debug_round_state_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1271,0,"debug_round_state_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1273,0,"debug_round_state_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1275,0,"debug_round_state_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1277,0,"debug_round_state_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1279,0,"debug_linear_diffusion_state3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1281,0,"debug_linear_diffusion_state4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+599,0,"shift_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"last_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"reg_key1_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"reg_key2_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"sel_mux_linear_diffusion_out_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sel_mux_linear_diffusion_out_x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sel_init_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"sel_padding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"sel_xor_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sel_absorb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"extra_padding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"shift_enable_sipo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle_sipo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+609,0,"round_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+610,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+648,0,"state_reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+447,0,"state_reg_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+658,0,"state_reg_out_shiftdplus1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+457,0,"state_reg_in_shiftdplus1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declBus(c+467,0,"state_reg_in_shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declQuad(c+611,0,"reg_key1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+613,0,"reg_key2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+615,0,"round_x0_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+617,0,"round_x1_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+619,0,"round_x2_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+621,0,"round_x3_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+623,0,"round_x4_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+668,0,"state_reg_out_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+670,0,"state_reg_out_x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+672,0,"state_reg_out_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+674,0,"state_reg_out_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+676,0,"state_reg_out_x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+678,0,"mux_1st_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+681,0,"mux_1st_x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+1194,0,"mux_1st_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+684,0,"mux_1st_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+687,0,"mux_1st_x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declQuad(c+625,0,"round_constant_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1323,0,"RC_PADDED_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+627,0,"round_constant_padded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("rc_block", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+630+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+468,0,"shares_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 329,0);
    tracep->declBus(c+1197,0,"shares_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("affine_layer_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 29,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+490+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 29,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_sbox_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+501+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 54,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("sbox_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+690+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 54,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("sbox_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+702+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 54,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("sbox_output_unmasked", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+21+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 54,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("mux_sbox_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+513+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 54,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer2nd_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+525+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 29,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer2nd_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+536+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 29,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+467,0,"recombine_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("state_reg_in_absorb", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+1283+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+1293,0,"init_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+714,0,"linear_diffusion_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+7,0,"data_in_padded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+11,0,"reverse_reg_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("rotations_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1324+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rotations_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1329+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("linear_diffusion_debug", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+724+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+1303,0,"mux_linear_diffusion_out_x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1305,0,"mux_linear_diffusion_out_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+641,0,"xor_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1307,0,"input_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->pushPrefix("affine_layer[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+547,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+548,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+551,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+552,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+553,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+554,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+555,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+556,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("affine_layer[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+557,0,"affine_layer2nd_in_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_truncate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pack_affine_trunc[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pack_affine_trunc_int[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pack_affine_trunc_int[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pack_affine_trunc_int[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pack_affine_trunc_int[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pack_affine_trunc_int[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pack_affine_trunc_int[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("active_bits", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"USED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_unsupported", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_sbox[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1335,0,"num_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+734,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+736,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+33,0,"x_out_noMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+738+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("and_result_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+35,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+36,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+37,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+38,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+39,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+40,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+41,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+42,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+43,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+44,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+45,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+46,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+48,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+49,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+50,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+51,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+52,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+53,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+54,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+55,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+56,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+57,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+58,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+59,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+60,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+61,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+62,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+63,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+64,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+65,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+66,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+67,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+68,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+69,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+70,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+71,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+72,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+73,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+74,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+75,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+76,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+77,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+78,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+79,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+80,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+81,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+82,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+83,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+84,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+85,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+86,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+87,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+88,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+89,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and_result_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+743,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+744,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+745,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+746,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+747,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+748,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+749,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+750,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+751,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+752,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+753,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+754,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+755,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+756,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+757,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+758,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+759,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+760,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+761,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+762,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+763,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+764,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+765,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+766,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+767,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+768,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+769,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+770,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+771,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+772,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+773,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+774,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+775,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+776,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+777,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+778,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+779,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+780,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+781,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+782,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+783,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+784,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+785,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+786,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+787,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+788,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+789,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+790,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+791,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+792,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+793,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+794,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+795,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+796,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+797,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+798+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_noMask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+90+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"fresh_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"xi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+97,0,"xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+98,0,"xiprox2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+99,0,"not_xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+803,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+804,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+805,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+806,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+807,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1335,0,"num_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+808,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+810,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+102,0,"x_out_noMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+812+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("and_result_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+104,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+105,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+106,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+107,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+108,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+109,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+110,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+111,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+112,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+113,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+114,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+115,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+116,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+117,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+118,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+119,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+120,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+121,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+122,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+123,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+124,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+125,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+126,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+127,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+128,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+129,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+130,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+131,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+132,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+133,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+134,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+135,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+136,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+137,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+138,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+139,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+140,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+141,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+142,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+143,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+144,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+145,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+146,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+147,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+148,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+149,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+150,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+151,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+152,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+153,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+154,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+155,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+156,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+157,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+158,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and_result_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+817,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+818,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+819,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+820,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+821,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+822,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+823,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+824,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+825,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+826,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+827,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+828,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+829,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+830,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+831,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+832,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+833,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+834,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+835,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+836,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+837,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+838,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+839,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+840,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+841,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+842,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+843,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+844,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+845,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+846,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+847,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+848,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+849,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+850,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+851,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+852,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+853,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+854,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+855,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+856,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+857,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+858,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+859,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+860,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+861,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+862,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+863,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+864,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+865,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+866,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+867,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+868,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+869,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+870,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+871,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+872+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_noMask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+159+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"fresh_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+165,0,"xi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+166,0,"xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+167,0,"xiprox2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+168,0,"not_xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+877,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+878,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+879,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+880,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+881,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1335,0,"num_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+882,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+884,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+171,0,"x_out_noMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+886+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("and_result_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+173,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+174,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+175,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+176,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+177,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+178,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+179,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+180,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+181,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+182,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+183,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+184,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+185,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+186,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+187,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+188,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+189,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+190,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+191,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+192,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+193,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+194,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+195,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+196,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+197,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+198,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+199,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+200,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+201,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+202,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+203,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+204,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+205,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+206,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+207,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+208,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+209,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+210,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+211,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+212,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+213,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+214,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+215,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+216,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+217,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+218,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+219,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+220,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+221,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+222,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+223,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+224,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+225,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+226,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+227,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and_result_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+891,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+892,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+893,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+894,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+895,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+896,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+897,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+898,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+899,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+900,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+901,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+902,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+903,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+904,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+905,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+906,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+907,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+908,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+909,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+910,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+911,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+912,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+913,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+914,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+915,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+916,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+917,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+918,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+919,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+920,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+921,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+922,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+923,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+924,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+925,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+926,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+927,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+928,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+929,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+930,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+931,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+932,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+933,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+934,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+935,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+936,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+937,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+938,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+939,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+940,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+941,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+942,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+943,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+944,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+945,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+946+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_noMask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+228+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"fresh_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"xi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+235,0,"xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+236,0,"xiprox2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+237,0,"not_xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+951,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+952,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+953,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+954,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+955,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1335,0,"num_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+956,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+958,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+240,0,"x_out_noMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+960+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("and_result_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+242,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+243,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+244,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+245,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+246,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+247,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+248,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+249,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+250,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+251,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+252,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+253,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+254,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+255,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+256,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+257,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+258,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+259,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+260,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+261,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+262,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+263,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+264,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+265,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+266,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+267,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+268,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+269,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+270,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+271,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+272,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+273,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+274,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+275,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+276,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+277,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+278,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+279,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+280,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+281,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+282,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+283,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+284,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+285,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+286,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+287,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+288,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+289,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+290,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+291,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+292,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+293,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+294,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+295,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+296,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and_result_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+965,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+966,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+967,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+968,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+969,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+970,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+971,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+972,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+973,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+974,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+975,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+976,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+977,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+978,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+979,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+980,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+981,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+982,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+983,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+984,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+985,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+986,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+987,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+988,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+989,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+990,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+991,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+992,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+993,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+994,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+995,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+996,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+997,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+998,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+999,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1000,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1001,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1002,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1003,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1004,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1005,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1006,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1007,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1008,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1009,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1010,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1011,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1012,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1013,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1014,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1015,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1016,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1017,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1018,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1019,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1020+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_noMask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+297+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+302,0,"fresh_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+303,0,"xi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+304,0,"xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+305,0,"xiprox2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+306,0,"not_xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+307,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+308,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1025,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1026,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1027,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1028,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1029,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1335,0,"num_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1030,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1032,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+309,0,"x_out_noMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1034+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("and_result_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+311,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+312,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+313,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+314,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+315,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+316,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+317,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+318,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+319,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+320,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+321,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+322,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+323,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+324,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+325,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+326,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+327,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+328,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+329,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+330,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+331,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+332,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+333,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+334,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+335,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+336,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+337,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+338,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+339,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+340,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+341,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+342,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+343,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+344,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+345,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+346,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+347,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+348,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+349,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+350,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+351,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+352,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+353,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+354,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+355,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+356,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+357,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+358,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+359,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+360,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+361,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+362,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+363,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+364,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+365,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and_result_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1039,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1040,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1041,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1042,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1043,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1044,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1045,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1046,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1047,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1048,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1049,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1050,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1051,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1052,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1053,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1054,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1055,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1056,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1057,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1058,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1059,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1060,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1061,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1062,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1063,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1064,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1065,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1066,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1067,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1068,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1069,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1070,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1071,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1072,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1073,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1074,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1075,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1076,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1077,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1078,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1079,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1080,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1081,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1082,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1083,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1084,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1085,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1086,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1087,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1088,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1089,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1090,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1091,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1092,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1093,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1094+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_noMask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+366+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"fresh_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+372,0,"xi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+373,0,"xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+374,0,"xiprox2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+375,0,"not_xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+377,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1099,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1100,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1102,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1103,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1335,0,"num_shares",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1104,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1241,0,"fresh_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1106,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+378,0,"x_out_noMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("and_result_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+380,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+381,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+382,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+383,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+384,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+385,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+386,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+387,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+388,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+389,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+390,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+391,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+392,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+393,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+394,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+395,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+396,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+397,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+398,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+399,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+400,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+401,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+402,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+403,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+404,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+405,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+406,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+407,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+408,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+409,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+410,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+411,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+412,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+413,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+414,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+415,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+416,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+417,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+418,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+419,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+420,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+421,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+422,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+423,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+424,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+425,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+426,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+427,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+428,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+429,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+430,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+431,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+432,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+433,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+434,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and_result_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1113,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1114,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1115,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1116,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1117,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1118,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1119,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1120,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1121,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1122,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1123,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1124,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1125,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1126,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1127,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1128,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1129,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1130,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1131,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1132,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1133,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1134,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1135,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1136,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1137,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1138,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1139,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1140,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1141,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1142,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1143,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1144,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1145,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1146,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1147,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1148,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1149,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1150,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1151,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1152,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1153,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1154,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1155,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1156,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1157,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1158,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1159,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1160,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1161,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1162,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1163,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1164,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1165,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1166,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1167,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1168+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("y_noMask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+435+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+440,0,"fresh_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+441,0,"xi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+442,0,"xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+443,0,"xiprox2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+444,0,"not_xiprox1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+445,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+446,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1173,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1174,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1176,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1177,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key1_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1212,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+611,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+611,0,"reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("key2_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1214,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+613,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+613,0,"reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mealy_fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1322,0,"NUMBER_BIT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1337,0,"NUMBER_BIT_NOMASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1216,0,"key_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1227,0,"valid_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"last_block",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1229,0,"valid_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1230,0,"EOT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1248,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"ready_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"shift_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"last_cycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"reg_key1_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"reg_key2_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"sel_mux_linear_diffusion_out_x3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sel_mux_linear_diffusion_out_x4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sel_init_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"sel_masked_round",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"sel_padding",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"extra_padding",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"sel_xor_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sel_absorb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"ready_for_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"extra_padding_ff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1258,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+610,0,"bit_counter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+609,0,"round_counter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+607,0,"shift_enable_sipo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle_sipo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+644,0,"number_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+645,0,"number_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"last_block_process",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"last_block_process_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"last_block_process_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"extra_padding_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"round_counter_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"rst_counter_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1338,0,"BYTE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1335,0,"BIT_COUNTER_MAX_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1339,0,"BIT_COUNTER_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1335,0,"BIT_COUNTER_MAX_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1339,0,"BIT_COUNTER_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux_logic[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_padded", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_last", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"LAST_PAR_USED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+558,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+560,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+561,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+562,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+563,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+564,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+565,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+566,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+567,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+568,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+569,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+570,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+571,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+575,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+576,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+580,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+583,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+585,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("recombine[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+587,0,"temp_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("share_creator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1319,0,"COL_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1197,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declArray(c+1231,0,"random_masks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 299,0);
    tracep->declArray(c+468,0,"shares_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 329,0);
    tracep->declBus(c+588,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1341,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sipo_reg_x0_debug", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"SHIFT_PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1323,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1334,0,"SHIFT_PAR_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+678,0,"in_shifted_dplus1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+1178,0,"in_shifted_1bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+615,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+615,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1198,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("sipo_reg_x1_debug", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"SHIFT_PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1323,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1334,0,"SHIFT_PAR_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+681,0,"in_shifted_dplus1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+1179,0,"in_shifted_1bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+617,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+617,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1200,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("sipo_reg_x2_debug", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"SHIFT_PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1323,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1334,0,"SHIFT_PAR_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1194,0,"in_shifted_dplus1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+1202,0,"in_shifted_1bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+619,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+619,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1203,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("sipo_reg_x3_debug", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"SHIFT_PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1323,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1334,0,"SHIFT_PAR_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+684,0,"in_shifted_dplus1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+1180,0,"in_shifted_1bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+621,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+621,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1205,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("sipo_reg_x4_debug", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"SHIFT_PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1323,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1334,0,"SHIFT_PAR_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"last_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+687,0,"in_shifted_dplus1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+1181,0,"in_shifted_1bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+623,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+623,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1207,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("state_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1319,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1317,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1321,0,"SHIFT_PAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1334,0,"SHIFT_PAR_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1318,0,"SHIFT_PAR_D_PLUS_1_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"shift_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"last_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+447,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+457,0,"in_shifted_dplus1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declBus(c+467,0,"in_shifted_1bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declArray(c+658,0,"out_shifted_dplus1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declArray(c+648,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->pushPrefix("state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+1182+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+589+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_case2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_caseNoPArMAx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1192,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1193,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vascon_top___024root__trace_init_top(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_init_top\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vascon_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vascon_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vascon_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vascon_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vascon_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vascon_top___024root__trace_register(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_register\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vascon_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vascon_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vascon_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vascon_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vascon_top___024root__trace_const_0_sub_0(Vascon_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vascon_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_const_0\n"); );
    // Init
    Vascon_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vascon_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vascon_top___024root__trace_const_0_sub_0(Vascon_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_const_0_sub_0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1317,(0xaU),32);
    bufp->fullIData(oldp+1318,(0x40U),32);
    bufp->fullIData(oldp+1319,(5U),32);
    bufp->fullIData(oldp+1320,(0x140U),32);
    bufp->fullIData(oldp+1321,(6U),32);
    bufp->fullIData(oldp+1322,(0xcU),32);
    bufp->fullIData(oldp+1323,(0x42U),32);
    bufp->fullIData(oldp+1324,(vlSelfRef.ascon_top__DOT__rotations_a[0]),32);
    bufp->fullIData(oldp+1325,(vlSelfRef.ascon_top__DOT__rotations_a[1]),32);
    bufp->fullIData(oldp+1326,(vlSelfRef.ascon_top__DOT__rotations_a[2]),32);
    bufp->fullIData(oldp+1327,(vlSelfRef.ascon_top__DOT__rotations_a[3]),32);
    bufp->fullIData(oldp+1328,(vlSelfRef.ascon_top__DOT__rotations_a[4]),32);
    bufp->fullIData(oldp+1329,(vlSelfRef.ascon_top__DOT__rotations_b[0]),32);
    bufp->fullIData(oldp+1330,(vlSelfRef.ascon_top__DOT__rotations_b[1]),32);
    bufp->fullIData(oldp+1331,(vlSelfRef.ascon_top__DOT__rotations_b[2]),32);
    bufp->fullIData(oldp+1332,(vlSelfRef.ascon_top__DOT__rotations_b[3]),32);
    bufp->fullIData(oldp+1333,(vlSelfRef.ascon_top__DOT__rotations_b[4]),32);
    bufp->fullIData(oldp+1334,(4U),32);
    bufp->fullIData(oldp+1335,(0xbU),32);
    bufp->fullIData(oldp+1336,(5U),32);
    bufp->fullIData(oldp+1337,(1U),32);
    bufp->fullIData(oldp+1338,(0x10U),32);
    bufp->fullCData(oldp+1339,(0xbU),4);
    bufp->fullIData(oldp+1340,(0xbU),32);
    bufp->fullIData(oldp+1341,(0xaU),32);
}

VL_ATTR_COLD void Vascon_top___024root__trace_full_0_sub_0(Vascon_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vascon_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_full_0\n"); );
    // Init
    Vascon_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vascon_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vascon_top___024root__trace_full_0_sub_0(Vascon_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_full_0_sub_0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<10>/*319:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<10>/*319:0*/ __Vtemp_12;
    VlWide<10>/*319:0*/ __Vtemp_14;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.ascon_top__DOT__write_en));
    bufp->fullBit(oldp+2,(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
    bufp->fullBit(oldp+3,(vlSelfRef.ascon_top__DOT__sel_init_load));
    bufp->fullBit(oldp+4,(vlSelfRef.ascon_top__DOT__sel_padding));
    bufp->fullBit(oldp+5,(vlSelfRef.ascon_top__DOT__sel_absorb_data));
    bufp->fullBit(oldp+6,(vlSelfRef.ascon_top__DOT__extra_padding));
    bufp->fullWData(oldp+7,(vlSelfRef.ascon_top__DOT__data_in_padded),128);
    bufp->fullWData(oldp+11,(vlSelfRef.ascon_top__DOT__reverse_reg_data_out),128);
    bufp->fullCData(oldp+15,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state),5);
    bufp->fullBit(oldp+16,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process));
    bufp->fullBit(oldp+17,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
    bufp->fullBit(oldp+18,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
    bufp->fullBit(oldp+19,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
    bufp->fullIData(oldp+20,(vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i),32);
    bufp->fullQData(oldp+21,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0]),55);
    bufp->fullQData(oldp+23,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[1]),55);
    bufp->fullQData(oldp+25,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[2]),55);
    bufp->fullQData(oldp+27,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[3]),55);
    bufp->fullQData(oldp+29,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[4]),55);
    bufp->fullQData(oldp+31,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[5]),55);
    bufp->fullQData(oldp+33,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                 [4U] 
                                                 << 0xbU) 
                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                [3U]))) 
                               << 0x21U) | (((QData)((IData)(
                                                             vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                             [2U])) 
                                             << 0x16U) 
                                            | (QData)((IData)(
                                                              ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                                [1U] 
                                                                << 0xbU) 
                                                               | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                               [0U])))))),55);
    bufp->fullSData(oldp+35,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                              [0U][0U])),11);
    bufp->fullSData(oldp+36,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+37,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] << 0xaU) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][0U] 
                                           >> 0x16U)))),11);
    bufp->fullSData(oldp+38,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+39,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+40,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] << 9U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+41,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+42,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+43,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] << 8U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+44,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+45,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+46,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                              [1U][0U])),11);
    bufp->fullSData(oldp+47,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+48,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] << 0xaU) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][0U] 
                                           >> 0x16U)))),11);
    bufp->fullSData(oldp+49,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+50,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+51,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] << 9U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+52,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+53,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+54,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] << 8U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+55,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+56,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+57,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                              [2U][0U])),11);
    bufp->fullSData(oldp+58,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+59,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] << 0xaU) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][0U] 
                                           >> 0x16U)))),11);
    bufp->fullSData(oldp+60,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+61,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+62,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] << 9U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+63,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+64,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+65,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] << 8U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+66,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+67,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+68,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                              [3U][0U])),11);
    bufp->fullSData(oldp+69,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+70,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] << 0xaU) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][0U] 
                                           >> 0x16U)))),11);
    bufp->fullSData(oldp+71,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+72,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+73,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] << 9U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+74,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+75,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+76,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] << 8U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+77,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+78,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+79,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                              [4U][0U])),11);
    bufp->fullSData(oldp+80,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+81,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] << 0xaU) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][0U] 
                                           >> 0x16U)))),11);
    bufp->fullSData(oldp+82,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+83,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+84,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] << 9U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+85,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+86,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+87,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] << 8U) 
                                        | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+88,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+89,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                        [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+90,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
    bufp->fullSData(oldp+91,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
    bufp->fullSData(oldp+92,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
    bufp->fullSData(oldp+93,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
    bufp->fullSData(oldp+94,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
    bufp->fullIData(oldp+95,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
    bufp->fullSData(oldp+96,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
    bufp->fullSData(oldp+97,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
    bufp->fullSData(oldp+98,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
    bufp->fullSData(oldp+99,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
    bufp->fullIData(oldp+100,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+101,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    bufp->fullQData(oldp+102,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                                [0U])))))),55);
    bufp->fullSData(oldp+104,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                               [0U][0U])),11);
    bufp->fullSData(oldp+105,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+106,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+107,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+108,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+109,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+110,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+111,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+112,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+113,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+114,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+115,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                               [1U][0U])),11);
    bufp->fullSData(oldp+116,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+117,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+118,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+119,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+120,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+121,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+122,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+123,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+124,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+125,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+126,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                               [2U][0U])),11);
    bufp->fullSData(oldp+127,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+128,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+129,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+130,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+131,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+132,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+133,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+134,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+135,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+136,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+137,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                               [3U][0U])),11);
    bufp->fullSData(oldp+138,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+139,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+140,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+141,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+142,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+143,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+144,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+145,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+146,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+147,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+148,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                               [4U][0U])),11);
    bufp->fullSData(oldp+149,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+150,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+151,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+152,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+153,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+154,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+155,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+156,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+157,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+158,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+159,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
    bufp->fullSData(oldp+160,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
    bufp->fullSData(oldp+161,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
    bufp->fullSData(oldp+162,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
    bufp->fullSData(oldp+163,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
    bufp->fullIData(oldp+164,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
    bufp->fullSData(oldp+165,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
    bufp->fullSData(oldp+166,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
    bufp->fullSData(oldp+167,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
    bufp->fullSData(oldp+168,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
    bufp->fullIData(oldp+169,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+170,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    bufp->fullQData(oldp+171,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                                [0U])))))),55);
    bufp->fullSData(oldp+173,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                               [0U][0U])),11);
    bufp->fullSData(oldp+174,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+175,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+176,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+177,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+178,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+179,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+180,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+181,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+182,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+183,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+184,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                               [1U][0U])),11);
    bufp->fullSData(oldp+185,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+186,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+187,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+188,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+189,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+190,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+191,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+192,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+193,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+194,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+195,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                               [2U][0U])),11);
    bufp->fullSData(oldp+196,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+197,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+198,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+199,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+200,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+201,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+202,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+203,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+204,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+205,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+206,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                               [3U][0U])),11);
    bufp->fullSData(oldp+207,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+208,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+209,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+210,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+211,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+212,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+213,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+214,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+215,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+216,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+217,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                               [4U][0U])),11);
    bufp->fullSData(oldp+218,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+219,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+220,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+221,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+222,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+223,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+224,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+225,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+226,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+227,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+228,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
    bufp->fullSData(oldp+229,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
    bufp->fullSData(oldp+230,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
    bufp->fullSData(oldp+231,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
    bufp->fullSData(oldp+232,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
    bufp->fullIData(oldp+233,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
    bufp->fullSData(oldp+234,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
    bufp->fullSData(oldp+235,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
    bufp->fullSData(oldp+236,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
    bufp->fullSData(oldp+237,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
    bufp->fullIData(oldp+238,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+239,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    bufp->fullQData(oldp+240,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                                [0U])))))),55);
    bufp->fullSData(oldp+242,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                               [0U][0U])),11);
    bufp->fullSData(oldp+243,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+244,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+245,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+246,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+247,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+248,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+249,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+250,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+251,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+252,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+253,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                               [1U][0U])),11);
    bufp->fullSData(oldp+254,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+255,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+256,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+257,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+258,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+259,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+260,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+261,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+262,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+263,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+264,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                               [2U][0U])),11);
    bufp->fullSData(oldp+265,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+266,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+267,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+268,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+269,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+270,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+271,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+272,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+273,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+274,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+275,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                               [3U][0U])),11);
    bufp->fullSData(oldp+276,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+277,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+278,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+279,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+280,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+281,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+282,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+283,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+284,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+285,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+286,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                               [4U][0U])),11);
    bufp->fullSData(oldp+287,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+288,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+289,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+290,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+291,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+292,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+293,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+294,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+295,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+296,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+297,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
    bufp->fullSData(oldp+298,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
    bufp->fullSData(oldp+299,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
    bufp->fullSData(oldp+300,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
    bufp->fullSData(oldp+301,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
    bufp->fullIData(oldp+302,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
    bufp->fullSData(oldp+303,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
    bufp->fullSData(oldp+304,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
    bufp->fullSData(oldp+305,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
    bufp->fullSData(oldp+306,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
    bufp->fullIData(oldp+307,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+308,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    bufp->fullQData(oldp+309,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                                [0U])))))),55);
    bufp->fullSData(oldp+311,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                               [0U][0U])),11);
    bufp->fullSData(oldp+312,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+313,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+314,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+315,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+316,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+317,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+318,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+319,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+320,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+321,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+322,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                               [1U][0U])),11);
    bufp->fullSData(oldp+323,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+324,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+325,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+326,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+327,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+328,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+329,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+330,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+331,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+332,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+333,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                               [2U][0U])),11);
    bufp->fullSData(oldp+334,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+335,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+336,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+337,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+338,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+339,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+340,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+341,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+342,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+343,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+344,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                               [3U][0U])),11);
    bufp->fullSData(oldp+345,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+346,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+347,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+348,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+349,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+350,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+351,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+352,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+353,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+354,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+355,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                               [4U][0U])),11);
    bufp->fullSData(oldp+356,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+357,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+358,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+359,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+360,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+361,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+362,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+363,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+364,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+365,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+366,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
    bufp->fullSData(oldp+367,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
    bufp->fullSData(oldp+368,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
    bufp->fullSData(oldp+369,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
    bufp->fullSData(oldp+370,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
    bufp->fullIData(oldp+371,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
    bufp->fullSData(oldp+372,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
    bufp->fullSData(oldp+373,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
    bufp->fullSData(oldp+374,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
    bufp->fullSData(oldp+375,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
    bufp->fullIData(oldp+376,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+377,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    bufp->fullQData(oldp+378,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                                [0U])))))),55);
    bufp->fullSData(oldp+380,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                               [0U][0U])),11);
    bufp->fullSData(oldp+381,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+382,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+383,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+384,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+385,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+386,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+387,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+388,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+389,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+390,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+391,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                               [1U][0U])),11);
    bufp->fullSData(oldp+392,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+393,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+394,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+395,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+396,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+397,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+398,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+399,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+400,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+401,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+402,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                               [2U][0U])),11);
    bufp->fullSData(oldp+403,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+404,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+405,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+406,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+407,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+408,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+409,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+410,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+411,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+412,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+413,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                               [3U][0U])),11);
    bufp->fullSData(oldp+414,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+415,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+416,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+417,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+418,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+419,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+420,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+421,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+422,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+423,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+424,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                               [4U][0U])),11);
    bufp->fullSData(oldp+425,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+426,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+427,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+428,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+429,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+430,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+431,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+432,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+433,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+434,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+435,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
    bufp->fullSData(oldp+436,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
    bufp->fullSData(oldp+437,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
    bufp->fullSData(oldp+438,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
    bufp->fullSData(oldp+439,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
    bufp->fullIData(oldp+440,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
    bufp->fullSData(oldp+441,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
    bufp->fullSData(oldp+442,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
    bufp->fullSData(oldp+443,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
    bufp->fullSData(oldp+444,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
    bufp->fullIData(oldp+445,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+446,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    bufp->fullWData(oldp+447,(vlSelfRef.ascon_top__DOT__state_reg_in),320);
    bufp->fullWData(oldp+457,(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1),320);
    bufp->fullIData(oldp+467,(vlSelfRef.ascon_top__DOT__recombine_shares),30);
    bufp->fullWData(oldp+468,(vlSelfRef.ascon_top__DOT__shares_out),330);
    bufp->fullIData(oldp+479,(vlSelfRef.ascon_top__DOT__affine_layer_in[0]),30);
    bufp->fullIData(oldp+480,(vlSelfRef.ascon_top__DOT__affine_layer_in[1]),30);
    bufp->fullIData(oldp+481,(vlSelfRef.ascon_top__DOT__affine_layer_in[2]),30);
    bufp->fullIData(oldp+482,(vlSelfRef.ascon_top__DOT__affine_layer_in[3]),30);
    bufp->fullIData(oldp+483,(vlSelfRef.ascon_top__DOT__affine_layer_in[4]),30);
    bufp->fullIData(oldp+484,(vlSelfRef.ascon_top__DOT__affine_layer_in[5]),30);
    bufp->fullIData(oldp+485,(vlSelfRef.ascon_top__DOT__affine_layer_in[6]),30);
    bufp->fullIData(oldp+486,(vlSelfRef.ascon_top__DOT__affine_layer_in[7]),30);
    bufp->fullIData(oldp+487,(vlSelfRef.ascon_top__DOT__affine_layer_in[8]),30);
    bufp->fullIData(oldp+488,(vlSelfRef.ascon_top__DOT__affine_layer_in[9]),30);
    bufp->fullIData(oldp+489,(vlSelfRef.ascon_top__DOT__affine_layer_in[10]),30);
    bufp->fullIData(oldp+490,(vlSelfRef.ascon_top__DOT__affine_layer_out[0]),30);
    bufp->fullIData(oldp+491,(vlSelfRef.ascon_top__DOT__affine_layer_out[1]),30);
    bufp->fullIData(oldp+492,(vlSelfRef.ascon_top__DOT__affine_layer_out[2]),30);
    bufp->fullIData(oldp+493,(vlSelfRef.ascon_top__DOT__affine_layer_out[3]),30);
    bufp->fullIData(oldp+494,(vlSelfRef.ascon_top__DOT__affine_layer_out[4]),30);
    bufp->fullIData(oldp+495,(vlSelfRef.ascon_top__DOT__affine_layer_out[5]),30);
    bufp->fullIData(oldp+496,(vlSelfRef.ascon_top__DOT__affine_layer_out[6]),30);
    bufp->fullIData(oldp+497,(vlSelfRef.ascon_top__DOT__affine_layer_out[7]),30);
    bufp->fullIData(oldp+498,(vlSelfRef.ascon_top__DOT__affine_layer_out[8]),30);
    bufp->fullIData(oldp+499,(vlSelfRef.ascon_top__DOT__affine_layer_out[9]),30);
    bufp->fullIData(oldp+500,(vlSelfRef.ascon_top__DOT__affine_layer_out[10]),30);
    bufp->fullQData(oldp+501,(vlSelfRef.ascon_top__DOT__next_sbox_input[0]),55);
    bufp->fullQData(oldp+503,(vlSelfRef.ascon_top__DOT__next_sbox_input[1]),55);
    bufp->fullQData(oldp+505,(vlSelfRef.ascon_top__DOT__next_sbox_input[2]),55);
    bufp->fullQData(oldp+507,(vlSelfRef.ascon_top__DOT__next_sbox_input[3]),55);
    bufp->fullQData(oldp+509,(vlSelfRef.ascon_top__DOT__next_sbox_input[4]),55);
    bufp->fullQData(oldp+511,(vlSelfRef.ascon_top__DOT__next_sbox_input[5]),55);
    bufp->fullQData(oldp+513,(vlSelfRef.ascon_top__DOT__mux_sbox_out[0]),55);
    bufp->fullQData(oldp+515,(vlSelfRef.ascon_top__DOT__mux_sbox_out[1]),55);
    bufp->fullQData(oldp+517,(vlSelfRef.ascon_top__DOT__mux_sbox_out[2]),55);
    bufp->fullQData(oldp+519,(vlSelfRef.ascon_top__DOT__mux_sbox_out[3]),55);
    bufp->fullQData(oldp+521,(vlSelfRef.ascon_top__DOT__mux_sbox_out[4]),55);
    bufp->fullQData(oldp+523,(vlSelfRef.ascon_top__DOT__mux_sbox_out[5]),55);
    bufp->fullIData(oldp+525,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0]),30);
    bufp->fullIData(oldp+526,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1]),30);
    bufp->fullIData(oldp+527,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2]),30);
    bufp->fullIData(oldp+528,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[3]),30);
    bufp->fullIData(oldp+529,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[4]),30);
    bufp->fullIData(oldp+530,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[5]),30);
    bufp->fullIData(oldp+531,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[6]),30);
    bufp->fullIData(oldp+532,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[7]),30);
    bufp->fullIData(oldp+533,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[8]),30);
    bufp->fullIData(oldp+534,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[9]),30);
    bufp->fullIData(oldp+535,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[10]),30);
    bufp->fullIData(oldp+536,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0]),30);
    bufp->fullIData(oldp+537,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1]),30);
    bufp->fullIData(oldp+538,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2]),30);
    bufp->fullIData(oldp+539,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[3]),30);
    bufp->fullIData(oldp+540,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[4]),30);
    bufp->fullIData(oldp+541,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[5]),30);
    bufp->fullIData(oldp+542,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[6]),30);
    bufp->fullIData(oldp+543,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[7]),30);
    bufp->fullIData(oldp+544,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[8]),30);
    bufp->fullIData(oldp+545,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[9]),30);
    bufp->fullIData(oldp+546,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[10]),30);
    bufp->fullCData(oldp+547,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [0U] >> 0xcU)))),6);
    bufp->fullCData(oldp+548,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [0xaU] >> 0xcU)))),6);
    bufp->fullCData(oldp+549,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [1U] >> 0xcU)))),6);
    bufp->fullCData(oldp+550,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [2U] >> 0xcU)))),6);
    bufp->fullCData(oldp+551,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [3U] >> 0xcU)))),6);
    bufp->fullCData(oldp+552,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [4U] >> 0xcU)))),6);
    bufp->fullCData(oldp+553,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [5U] >> 0xcU)))),6);
    bufp->fullCData(oldp+554,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [6U] >> 0xcU)))),6);
    bufp->fullCData(oldp+555,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [7U] >> 0xcU)))),6);
    bufp->fullCData(oldp+556,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [8U] >> 0xcU)))),6);
    bufp->fullCData(oldp+557,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [9U] >> 0xcU)))),6);
    bufp->fullSData(oldp+558,(vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+559,(vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+560,(vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+561,(vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+562,(vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+563,(vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+564,(vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+565,(vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+566,(vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+567,(vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+568,(vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+569,(vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+570,(vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+571,(vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+572,(vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+573,(vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+574,(vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+575,(vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+576,(vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+577,(vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+578,(vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+579,(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+580,(vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+581,(vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+582,(vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+583,(vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+584,(vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+585,(vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+586,(vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),11);
    bufp->fullSData(oldp+587,(vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),11);
    bufp->fullIData(oldp+588,(vlSelfRef.ascon_top__DOT__share_creator__DOT__temp),30);
    bufp->fullQData(oldp+589,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0]),64);
    bufp->fullQData(oldp+591,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1]),64);
    bufp->fullQData(oldp+593,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2]),64);
    bufp->fullQData(oldp+595,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3]),64);
    bufp->fullQData(oldp+597,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4]),64);
    bufp->fullBit(oldp+599,(vlSelfRef.ascon_top__DOT__shift_en));
    bufp->fullBit(oldp+600,(vlSelfRef.ascon_top__DOT__shift_type));
    bufp->fullBit(oldp+601,(vlSelfRef.ascon_top__DOT__last_cycle));
    bufp->fullBit(oldp+602,(vlSelfRef.ascon_top__DOT__reg_key1_load));
    bufp->fullBit(oldp+603,(vlSelfRef.ascon_top__DOT__reg_key2_load));
    bufp->fullBit(oldp+604,(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
    bufp->fullBit(oldp+605,(vlSelfRef.ascon_top__DOT__sel_masked_round));
    bufp->fullBit(oldp+606,(vlSelfRef.ascon_top__DOT__sel_xor_signal));
    bufp->fullBit(oldp+607,(vlSelfRef.ascon_top__DOT__shift_enable_sipo));
    bufp->fullBit(oldp+608,(vlSelfRef.ascon_top__DOT__last_cycle_sipo));
    bufp->fullCData(oldp+609,(vlSelfRef.ascon_top__DOT__round_counter),4);
    bufp->fullCData(oldp+610,(vlSelfRef.ascon_top__DOT__bit_counter),4);
    bufp->fullQData(oldp+611,(vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q),64);
    bufp->fullQData(oldp+613,(vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q),64);
    bufp->fullQData(oldp+615,(vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
    bufp->fullQData(oldp+617,(vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
    bufp->fullQData(oldp+619,(vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
    bufp->fullQData(oldp+621,(vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
    bufp->fullQData(oldp+623,(vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
    bufp->fullQData(oldp+625,((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter))))),64);
    __Vtemp_1[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_1[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+627,(__Vtemp_1),66);
    bufp->fullCData(oldp+630,(vlSelfRef.ascon_top__DOT__rc_block[0]),6);
    bufp->fullCData(oldp+631,(vlSelfRef.ascon_top__DOT__rc_block[1]),6);
    bufp->fullCData(oldp+632,(vlSelfRef.ascon_top__DOT__rc_block[2]),6);
    bufp->fullCData(oldp+633,(vlSelfRef.ascon_top__DOT__rc_block[3]),6);
    bufp->fullCData(oldp+634,(vlSelfRef.ascon_top__DOT__rc_block[4]),6);
    bufp->fullCData(oldp+635,(vlSelfRef.ascon_top__DOT__rc_block[5]),6);
    bufp->fullCData(oldp+636,(vlSelfRef.ascon_top__DOT__rc_block[6]),6);
    bufp->fullCData(oldp+637,(vlSelfRef.ascon_top__DOT__rc_block[7]),6);
    bufp->fullCData(oldp+638,(vlSelfRef.ascon_top__DOT__rc_block[8]),6);
    bufp->fullCData(oldp+639,(vlSelfRef.ascon_top__DOT__rc_block[9]),6);
    bufp->fullCData(oldp+640,(vlSelfRef.ascon_top__DOT__rc_block[10]),6);
    bufp->fullQData(oldp+641,(((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                : 0x8000000000000000ULL)),64);
    bufp->fullCData(oldp+643,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state),5);
    bufp->fullCData(oldp+644,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits),4);
    bufp->fullCData(oldp+645,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round),4);
    bufp->fullBit(oldp+646,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
    bufp->fullBit(oldp+647,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
    bufp->fullWData(oldp+648,(vlSelfRef.ascon_top__DOT__state_reg_out),320);
    bufp->fullWData(oldp+658,(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1),320);
    bufp->fullQData(oldp+668,((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))),64);
    bufp->fullQData(oldp+670,((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])))),64);
    bufp->fullQData(oldp+672,((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U])))),64);
    bufp->fullQData(oldp+674,((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])))),64);
    bufp->fullQData(oldp+676,((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])))),64);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    bufp->fullWData(oldp+678,(__Vtemp_2),66);
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))));
    __Vtemp_3[1U] = (IData)(((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    bufp->fullWData(oldp+681,(__Vtemp_3),66);
    __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))));
    __Vtemp_4[1U] = (IData)(((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                             >> 0x20U));
    __Vtemp_4[2U] = 0U;
    bufp->fullWData(oldp+684,(__Vtemp_4),66);
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))));
    __Vtemp_5[1U] = (IData)(((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                             >> 0x20U));
    __Vtemp_5[2U] = 0U;
    bufp->fullWData(oldp+687,(__Vtemp_5),66);
    bufp->fullQData(oldp+690,(vlSelfRef.ascon_top__DOT__sbox_input[0]),55);
    bufp->fullQData(oldp+692,(vlSelfRef.ascon_top__DOT__sbox_input[1]),55);
    bufp->fullQData(oldp+694,(vlSelfRef.ascon_top__DOT__sbox_input[2]),55);
    bufp->fullQData(oldp+696,(vlSelfRef.ascon_top__DOT__sbox_input[3]),55);
    bufp->fullQData(oldp+698,(vlSelfRef.ascon_top__DOT__sbox_input[4]),55);
    bufp->fullQData(oldp+700,(vlSelfRef.ascon_top__DOT__sbox_input[5]),55);
    bufp->fullQData(oldp+702,(vlSelfRef.ascon_top__DOT__sbox_output[0]),55);
    bufp->fullQData(oldp+704,(vlSelfRef.ascon_top__DOT__sbox_output[1]),55);
    bufp->fullQData(oldp+706,(vlSelfRef.ascon_top__DOT__sbox_output[2]),55);
    bufp->fullQData(oldp+708,(vlSelfRef.ascon_top__DOT__sbox_output[3]),55);
    bufp->fullQData(oldp+710,(vlSelfRef.ascon_top__DOT__sbox_output[4]),55);
    bufp->fullQData(oldp+712,(vlSelfRef.ascon_top__DOT__sbox_output[5]),55);
    __Vtemp_7[0U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U];
    __Vtemp_7[1U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U];
    __Vtemp_7[2U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U];
    __Vtemp_7[3U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U];
    __Vtemp_7[4U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U];
    __Vtemp_7[5U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U];
    __Vtemp_7[6U] = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                            [3U]);
    __Vtemp_7[7U] = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                             [3U] >> 0x20U));
    __Vtemp_7[8U] = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                            [4U]);
    __Vtemp_7[9U] = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                             [4U] >> 0x20U));
    bufp->fullWData(oldp+714,(__Vtemp_7),320);
    bufp->fullQData(oldp+724,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[0]),64);
    bufp->fullQData(oldp+726,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[1]),64);
    bufp->fullQData(oldp+728,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[2]),64);
    bufp->fullQData(oldp+730,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[3]),64);
    bufp->fullQData(oldp+732,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[4]),64);
    bufp->fullQData(oldp+734,(vlSelfRef.ascon_top__DOT__sbox_input
                              [0U]),55);
    bufp->fullQData(oldp+736,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                [0U])))))),55);
    bufp->fullSData(oldp+738,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),11);
    bufp->fullSData(oldp+739,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),11);
    bufp->fullSData(oldp+740,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),11);
    bufp->fullSData(oldp+741,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),11);
    bufp->fullSData(oldp+742,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),11);
    bufp->fullSData(oldp+743,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                               [0U][0U])),11);
    bufp->fullSData(oldp+744,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+745,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+746,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+747,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+748,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+749,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+750,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+751,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+752,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+753,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+754,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                               [1U][0U])),11);
    bufp->fullSData(oldp+755,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+756,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+757,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+758,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+759,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+760,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+761,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+762,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+763,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+764,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+765,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                               [2U][0U])),11);
    bufp->fullSData(oldp+766,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+767,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+768,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+769,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+770,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+771,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+772,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+773,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+774,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+775,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+776,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                               [3U][0U])),11);
    bufp->fullSData(oldp+777,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+778,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+779,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+780,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+781,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+782,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+783,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+784,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+785,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+786,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+787,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                               [4U][0U])),11);
    bufp->fullSData(oldp+788,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+789,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+790,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+791,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+792,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+793,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+794,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+795,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+796,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+797,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+798,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),11);
    bufp->fullSData(oldp+799,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),11);
    bufp->fullSData(oldp+800,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),11);
    bufp->fullSData(oldp+801,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),11);
    bufp->fullSData(oldp+802,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),11);
    bufp->fullIData(oldp+803,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+804,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
    bufp->fullSData(oldp+805,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
    bufp->fullIData(oldp+806,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
    bufp->fullIData(oldp+807,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
    bufp->fullQData(oldp+808,(vlSelfRef.ascon_top__DOT__sbox_input
                              [1U]),55);
    bufp->fullQData(oldp+810,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                [0U])))))),55);
    bufp->fullSData(oldp+812,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0]),11);
    bufp->fullSData(oldp+813,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1]),11);
    bufp->fullSData(oldp+814,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2]),11);
    bufp->fullSData(oldp+815,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3]),11);
    bufp->fullSData(oldp+816,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4]),11);
    bufp->fullSData(oldp+817,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                               [0U][0U])),11);
    bufp->fullSData(oldp+818,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+819,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+820,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+821,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+822,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+823,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+824,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+825,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+826,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+827,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+828,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                               [1U][0U])),11);
    bufp->fullSData(oldp+829,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+830,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+831,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+832,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+833,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+834,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+835,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+836,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+837,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+838,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+839,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                               [2U][0U])),11);
    bufp->fullSData(oldp+840,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+841,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+842,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+843,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+844,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+845,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+846,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+847,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+848,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+849,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+850,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                               [3U][0U])),11);
    bufp->fullSData(oldp+851,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+852,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+853,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+854,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+855,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+856,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+857,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+858,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+859,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+860,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+861,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                               [4U][0U])),11);
    bufp->fullSData(oldp+862,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+863,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+864,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+865,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+866,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+867,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+868,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+869,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+870,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+871,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+872,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0]),11);
    bufp->fullSData(oldp+873,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1]),11);
    bufp->fullSData(oldp+874,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2]),11);
    bufp->fullSData(oldp+875,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3]),11);
    bufp->fullSData(oldp+876,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4]),11);
    bufp->fullIData(oldp+877,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+878,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
    bufp->fullSData(oldp+879,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
    bufp->fullIData(oldp+880,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
    bufp->fullIData(oldp+881,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
    bufp->fullQData(oldp+882,(vlSelfRef.ascon_top__DOT__sbox_input
                              [2U]),55);
    bufp->fullQData(oldp+884,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                [0U])))))),55);
    bufp->fullSData(oldp+886,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0]),11);
    bufp->fullSData(oldp+887,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1]),11);
    bufp->fullSData(oldp+888,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2]),11);
    bufp->fullSData(oldp+889,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3]),11);
    bufp->fullSData(oldp+890,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4]),11);
    bufp->fullSData(oldp+891,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                               [0U][0U])),11);
    bufp->fullSData(oldp+892,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+893,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+894,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+895,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+896,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+897,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+898,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+899,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+900,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+901,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+902,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                               [1U][0U])),11);
    bufp->fullSData(oldp+903,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+904,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+905,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+906,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+907,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+908,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+909,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+910,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+911,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+912,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+913,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                               [2U][0U])),11);
    bufp->fullSData(oldp+914,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+915,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+916,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+917,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+918,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+919,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+920,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+921,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+922,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+923,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+924,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                               [3U][0U])),11);
    bufp->fullSData(oldp+925,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+926,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+927,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][1U] >> 1U))),11);
    bufp->fullSData(oldp+928,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+929,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+930,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][2U] >> 2U))),11);
    bufp->fullSData(oldp+931,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+932,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+933,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][3U] >> 3U))),11);
    bufp->fullSData(oldp+934,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+935,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                               [4U][0U])),11);
    bufp->fullSData(oldp+936,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+937,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+938,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][1U] >> 1U))),11);
    bufp->fullSData(oldp+939,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+940,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+941,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][2U] >> 2U))),11);
    bufp->fullSData(oldp+942,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+943,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+944,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][3U] >> 3U))),11);
    bufp->fullSData(oldp+945,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+946,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0]),11);
    bufp->fullSData(oldp+947,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1]),11);
    bufp->fullSData(oldp+948,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2]),11);
    bufp->fullSData(oldp+949,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3]),11);
    bufp->fullSData(oldp+950,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4]),11);
    bufp->fullIData(oldp+951,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+952,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
    bufp->fullSData(oldp+953,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
    bufp->fullIData(oldp+954,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
    bufp->fullIData(oldp+955,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
    bufp->fullQData(oldp+956,(vlSelfRef.ascon_top__DOT__sbox_input
                              [3U]),55);
    bufp->fullQData(oldp+958,((((QData)((IData)(((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                  [4U] 
                                                  << 0xbU) 
                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                 [3U]))) 
                                << 0x21U) | (((QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                              [2U])) 
                                              << 0x16U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                 [1U] 
                                                                 << 0xbU) 
                                                                | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                [0U])))))),55);
    bufp->fullSData(oldp+960,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0]),11);
    bufp->fullSData(oldp+961,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1]),11);
    bufp->fullSData(oldp+962,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2]),11);
    bufp->fullSData(oldp+963,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3]),11);
    bufp->fullSData(oldp+964,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4]),11);
    bufp->fullSData(oldp+965,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                               [0U][0U])),11);
    bufp->fullSData(oldp+966,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+967,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+968,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 1U))),11);
    bufp->fullSData(oldp+969,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+970,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+971,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 2U))),11);
    bufp->fullSData(oldp+972,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+973,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+974,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 3U))),11);
    bufp->fullSData(oldp+975,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+976,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                               [1U][0U])),11);
    bufp->fullSData(oldp+977,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+978,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+979,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 1U))),11);
    bufp->fullSData(oldp+980,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+981,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+982,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 2U))),11);
    bufp->fullSData(oldp+983,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+984,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+985,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 3U))),11);
    bufp->fullSData(oldp+986,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+987,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                               [2U][0U])),11);
    bufp->fullSData(oldp+988,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+989,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0x16U)))),11);
    bufp->fullSData(oldp+990,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 1U))),11);
    bufp->fullSData(oldp+991,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][1U] >> 0xcU))),11);
    bufp->fullSData(oldp+992,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          << 9U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 0x17U)))),11);
    bufp->fullSData(oldp+993,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 2U))),11);
    bufp->fullSData(oldp+994,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][2U] >> 0xdU))),11);
    bufp->fullSData(oldp+995,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          << 8U) | 
                                         (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 0x18U)))),11);
    bufp->fullSData(oldp+996,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 3U))),11);
    bufp->fullSData(oldp+997,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][3U] >> 0xeU))),11);
    bufp->fullSData(oldp+998,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                               [3U][0U])),11);
    bufp->fullSData(oldp+999,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U] >> 0xbU))),11);
    bufp->fullSData(oldp+1000,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1001,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1002,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1003,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1004,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1005,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1006,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1007,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1008,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1009,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                [4U][0U])),11);
    bufp->fullSData(oldp+1010,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1011,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1012,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1013,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1014,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1015,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1016,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1017,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1018,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1019,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1020,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0]),11);
    bufp->fullSData(oldp+1021,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1]),11);
    bufp->fullSData(oldp+1022,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[2]),11);
    bufp->fullSData(oldp+1023,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[3]),11);
    bufp->fullSData(oldp+1024,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[4]),11);
    bufp->fullIData(oldp+1025,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+1026,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
    bufp->fullSData(oldp+1027,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
    bufp->fullIData(oldp+1028,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
    bufp->fullIData(oldp+1029,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
    bufp->fullQData(oldp+1030,(vlSelfRef.ascon_top__DOT__sbox_input
                               [4U]),55);
    bufp->fullQData(oldp+1032,((((QData)((IData)(((
                                                   vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                   [4U] 
                                                   << 0xbU) 
                                                  | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                  [3U]))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                               [2U])) 
                                               << 0x16U) 
                                              | (QData)((IData)(
                                                                ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                  [1U] 
                                                                  << 0xbU) 
                                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                 [0U])))))),55);
    bufp->fullSData(oldp+1034,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0]),11);
    bufp->fullSData(oldp+1035,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1]),11);
    bufp->fullSData(oldp+1036,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2]),11);
    bufp->fullSData(oldp+1037,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3]),11);
    bufp->fullSData(oldp+1038,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4]),11);
    bufp->fullSData(oldp+1039,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                [0U][0U])),11);
    bufp->fullSData(oldp+1040,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1041,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1042,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1043,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1044,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1045,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1046,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1047,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1048,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1049,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1050,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                [1U][0U])),11);
    bufp->fullSData(oldp+1051,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1052,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1053,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1054,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1055,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1056,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1057,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1058,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1059,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1060,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1061,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                [2U][0U])),11);
    bufp->fullSData(oldp+1062,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1063,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1064,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1065,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1066,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1067,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1068,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1069,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1070,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1071,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1072,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                [3U][0U])),11);
    bufp->fullSData(oldp+1073,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1074,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1075,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1076,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1077,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1078,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1079,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1080,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1081,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1082,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1083,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                [4U][0U])),11);
    bufp->fullSData(oldp+1084,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1085,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1086,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1087,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1088,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1089,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1090,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1091,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1092,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1093,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1094,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[0]),11);
    bufp->fullSData(oldp+1095,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[1]),11);
    bufp->fullSData(oldp+1096,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[2]),11);
    bufp->fullSData(oldp+1097,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[3]),11);
    bufp->fullSData(oldp+1098,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[4]),11);
    bufp->fullIData(oldp+1099,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+1100,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
    bufp->fullSData(oldp+1101,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
    bufp->fullIData(oldp+1102,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
    bufp->fullIData(oldp+1103,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
    bufp->fullQData(oldp+1104,(vlSelfRef.ascon_top__DOT__sbox_input
                               [5U]),55);
    bufp->fullQData(oldp+1106,((((QData)((IData)(((
                                                   vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                   [4U] 
                                                   << 0xbU) 
                                                  | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                  [3U]))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                               [2U])) 
                                               << 0x16U) 
                                              | (QData)((IData)(
                                                                ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                  [1U] 
                                                                  << 0xbU) 
                                                                 | vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                 [0U])))))),55);
    bufp->fullSData(oldp+1108,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0]),11);
    bufp->fullSData(oldp+1109,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1]),11);
    bufp->fullSData(oldp+1110,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2]),11);
    bufp->fullSData(oldp+1111,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3]),11);
    bufp->fullSData(oldp+1112,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4]),11);
    bufp->fullSData(oldp+1113,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                [0U][0U])),11);
    bufp->fullSData(oldp+1114,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1115,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1116,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1117,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1118,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1119,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1120,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1121,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [0U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1122,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1123,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [0U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1124,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                [1U][0U])),11);
    bufp->fullSData(oldp+1125,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1126,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1127,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1128,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1129,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1130,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1131,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1132,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [1U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1133,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1134,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [1U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1135,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                [2U][0U])),11);
    bufp->fullSData(oldp+1136,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1137,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1138,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1139,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1140,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1141,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1142,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1143,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [2U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1144,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1145,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [2U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1146,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                [3U][0U])),11);
    bufp->fullSData(oldp+1147,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1148,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1149,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1150,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1151,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1152,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1153,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1154,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [3U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1155,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1156,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [3U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1157,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                [4U][0U])),11);
    bufp->fullSData(oldp+1158,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][0U] 
                                          >> 0xbU))),11);
    bufp->fullSData(oldp+1159,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][0U] 
                                             >> 0x16U)))),11);
    bufp->fullSData(oldp+1160,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1161,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][1U] 
                                          >> 0xcU))),11);
    bufp->fullSData(oldp+1162,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][2U] 
                                           << 9U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][1U] 
                                           >> 0x17U)))),11);
    bufp->fullSData(oldp+1163,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1164,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][2U] 
                                          >> 0xdU))),11);
    bufp->fullSData(oldp+1165,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                           [4U][2U] 
                                           >> 0x18U)))),11);
    bufp->fullSData(oldp+1166,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          >> 3U))),11);
    bufp->fullSData(oldp+1167,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                          [4U][3U] 
                                          >> 0xeU))),11);
    bufp->fullSData(oldp+1168,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[0]),11);
    bufp->fullSData(oldp+1169,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[1]),11);
    bufp->fullSData(oldp+1170,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[2]),11);
    bufp->fullSData(oldp+1171,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[3]),11);
    bufp->fullSData(oldp+1172,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[4]),11);
    bufp->fullIData(oldp+1173,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+1174,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
    bufp->fullSData(oldp+1175,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
    bufp->fullIData(oldp+1176,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
    bufp->fullIData(oldp+1177,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
    bufp->fullCData(oldp+1178,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])),6);
    bufp->fullCData(oldp+1179,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])),6);
    bufp->fullCData(oldp+1180,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])),6);
    bufp->fullCData(oldp+1181,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])),6);
    bufp->fullQData(oldp+1182,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[0]),64);
    bufp->fullQData(oldp+1184,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[1]),64);
    bufp->fullQData(oldp+1186,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[2]),64);
    bufp->fullQData(oldp+1188,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[3]),64);
    bufp->fullQData(oldp+1190,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[4]),64);
    bufp->fullIData(oldp+1192,(vlSelfRef.ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1193,(vlSelfRef.ascon_top__DOT__unnamedblk1__DOT__p),32);
    __Vtemp_8[0U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_18) 
                                                << 0xcU) 
                                               | (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_15) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_12))))) 
                              << 0x12U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6) 
                                                               << 6U) 
                                                              | (IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit)))))));
    __Vtemp_8[1U] = ((0xfffffff0U & ((((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_33) 
                                       << 0x1cU) | 
                                      ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_30) 
                                       << 0x16U)) | 
                                     (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_27) 
                                       << 0x10U) | 
                                      (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_24) 
                                        << 0xaU) | 
                                       ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_21) 
                                        << 4U))))) 
                     | (IData)(((((QData)((IData)((
                                                   ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_18) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_15) 
                                                       << 6U) 
                                                      | (IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_12))))) 
                                  << 0x12U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6) 
                                                                   << 6U) 
                                                                  | (IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit)))))) 
                                >> 0x20U)));
    __Vtemp_8[2U] = (0xfU & ((0xfU & (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_33) 
                                       >> 4U) | ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_30) 
                                                 >> 0xaU))) 
                             | ((0xfU & ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_27) 
                                         >> 0x10U)) 
                                | ((0xfU & ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_24) 
                                            >> 0x16U)) 
                                   | ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_21) 
                                      >> 0x1cU)))));
    bufp->fullWData(oldp+1194,(__Vtemp_8),66);
    bufp->fullIData(oldp+1197,(vlSelfRef.ascon_top__DOT__shares_in),30);
    bufp->fullQData(oldp+1198,(vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
    bufp->fullQData(oldp+1200,(vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
    bufp->fullCData(oldp+1202,(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit),6);
    bufp->fullQData(oldp+1203,(vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
    bufp->fullQData(oldp+1205,(vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
    bufp->fullQData(oldp+1207,(vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
    bufp->fullBit(oldp+1209,(vlSelfRef.clk));
    bufp->fullBit(oldp+1210,(vlSelfRef.reset_n));
    bufp->fullBit(oldp+1211,(vlSelfRef.start));
    bufp->fullQData(oldp+1212,(vlSelfRef.key1),64);
    bufp->fullQData(oldp+1214,(vlSelfRef.key2),64);
    bufp->fullBit(oldp+1216,(vlSelfRef.key_valid));
    bufp->fullQData(oldp+1217,(vlSelfRef.nonce1),64);
    bufp->fullQData(oldp+1219,(vlSelfRef.nonce2),64);
    bufp->fullQData(oldp+1221,(vlSelfRef.initialVector),64);
    bufp->fullWData(oldp+1223,(vlSelfRef.data_in),128);
    bufp->fullBit(oldp+1227,(vlSelfRef.valid_data_in));
    bufp->fullBit(oldp+1228,(vlSelfRef.last_block));
    bufp->fullCData(oldp+1229,(vlSelfRef.valid_bytes),5);
    bufp->fullBit(oldp+1230,(vlSelfRef.EOT));
    bufp->fullWData(oldp+1231,(vlSelfRef.random_masks),300);
    bufp->fullQData(oldp+1241,(vlSelfRef.random_masks_sbox),55);
    bufp->fullBit(oldp+1243,(vlSelfRef.ciphertext_valid));
    bufp->fullWData(oldp+1244,(vlSelfRef.ciphertext),128);
    bufp->fullBit(oldp+1248,(vlSelfRef.done));
    bufp->fullBit(oldp+1249,(vlSelfRef.ready_tag));
    bufp->fullQData(oldp+1250,(vlSelfRef.tag1),64);
    bufp->fullQData(oldp+1252,(vlSelfRef.tag2),64);
    bufp->fullBit(oldp+1254,(vlSelfRef.ready_for_data));
    bufp->fullBit(oldp+1255,(vlSelfRef.debug_extra_padding_ff));
    bufp->fullCData(oldp+1256,(vlSelfRef.debug_bitcounter),4);
    bufp->fullCData(oldp+1257,(vlSelfRef.debug_roundcounter),4);
    bufp->fullCData(oldp+1258,(vlSelfRef.debug_state),5);
    bufp->fullQData(oldp+1259,(vlSelfRef.debug_state_0),64);
    bufp->fullQData(oldp+1261,(vlSelfRef.debug_state_1),64);
    bufp->fullQData(oldp+1263,(vlSelfRef.debug_state_2),64);
    bufp->fullQData(oldp+1265,(vlSelfRef.debug_state_3),64);
    bufp->fullQData(oldp+1267,(vlSelfRef.debug_state_4),64);
    bufp->fullQData(oldp+1269,(vlSelfRef.debug_round_state_0),64);
    bufp->fullQData(oldp+1271,(vlSelfRef.debug_round_state_1),64);
    bufp->fullQData(oldp+1273,(vlSelfRef.debug_round_state_2),64);
    bufp->fullQData(oldp+1275,(vlSelfRef.debug_round_state_3),64);
    bufp->fullQData(oldp+1277,(vlSelfRef.debug_round_state_4),64);
    bufp->fullQData(oldp+1279,(vlSelfRef.debug_linear_diffusion_state3),64);
    bufp->fullQData(oldp+1281,(vlSelfRef.debug_linear_diffusion_state4),64);
    bufp->fullQData(oldp+1283,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[0]),64);
    bufp->fullQData(oldp+1285,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[1]),64);
    bufp->fullQData(oldp+1287,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[2]),64);
    bufp->fullQData(oldp+1289,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[3]),64);
    bufp->fullQData(oldp+1291,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[4]),64);
    __Vtemp_12[0U] = (IData)(vlSelfRef.initialVector);
    __Vtemp_12[1U] = (IData)((vlSelfRef.initialVector 
                              >> 0x20U));
    __Vtemp_12[2U] = (IData)(vlSelfRef.key1);
    __Vtemp_12[3U] = (IData)((vlSelfRef.key1 >> 0x20U));
    __Vtemp_12[4U] = (IData)(vlSelfRef.key2);
    __Vtemp_12[5U] = (IData)((vlSelfRef.key2 >> 0x20U));
    __Vtemp_12[6U] = (IData)(vlSelfRef.nonce1);
    __Vtemp_12[7U] = (IData)((vlSelfRef.nonce1 >> 0x20U));
    __Vtemp_12[8U] = (IData)(vlSelfRef.nonce2);
    __Vtemp_12[9U] = (IData)((vlSelfRef.nonce2 >> 0x20U));
    bufp->fullWData(oldp+1293,(__Vtemp_12),320);
    bufp->fullQData(oldp+1303,(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                 ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                    [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                             ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                             : 0x8000000000000000ULL))
                                 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                [4U])),64);
    bufp->fullQData(oldp+1305,(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                 ? vlSelfRef.tag1 : 
                                vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                [3U])),64);
    __Vtemp_14[0U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U];
    __Vtemp_14[1U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U];
    __Vtemp_14[2U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U];
    __Vtemp_14[3U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U];
    __Vtemp_14[4U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U];
    __Vtemp_14[5U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U];
    __Vtemp_14[6U] = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                               ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                              [3U]));
    __Vtemp_14[7U] = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                ? vlSelfRef.tag1 : 
                               vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                               [3U]) >> 0x20U));
    __Vtemp_14[8U] = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                               ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                  [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                           ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                           : 0x8000000000000000ULL))
                               : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                              [4U]));
    __Vtemp_14[9U] = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                   [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                            ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                            : 0x8000000000000000ULL))
                                : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                               [4U]) >> 0x20U));
    bufp->fullWData(oldp+1307,(__Vtemp_14),320);
}
