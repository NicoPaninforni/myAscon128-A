// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vascon_top__Syms.h"


void Vascon_top___024root__trace_chg_0_sub_0(Vascon_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vascon_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_chg_0\n"); );
    // Init
    Vascon_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vascon_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vascon_top___024root__trace_chg_0_sub_0(Vascon_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_chg_0_sub_0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<10>/*319:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<10>/*319:0*/ __Vtemp_12;
    VlWide<10>/*319:0*/ __Vtemp_14;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key));
        bufp->chgBit(oldp+1,(vlSelfRef.ascon_top__DOT__load_reg_data_in));
        bufp->chgWData(oldp+2,(vlSelfRef.ascon_top__DOT__reg_data_in),128);
        bufp->chgQData(oldp+6,(vlSelfRef.ascon_top__DOT__xor_signal),64);
        bufp->chgBit(oldp+8,(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
        bufp->chgCData(oldp+9,(vlSelfRef.ascon_top__DOT__next_state),5);
        bufp->chgBit(oldp+10,(vlSelfRef.ascon_top__DOT__last_block_process));
        bufp->chgBit(oldp+11,(vlSelfRef.ascon_top__DOT__last_block_process_load));
        bufp->chgBit(oldp+12,(vlSelfRef.ascon_top__DOT__extra_padding));
        bufp->chgBit(oldp+13,(vlSelfRef.ascon_top__DOT__extra_padding_load));
        bufp->chgBit(oldp+14,(vlSelfRef.ascon_top__DOT__rst_counter_round));
        bufp->chgIData(oldp+15,(vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgWData(oldp+17,(vlSelfRef.ascon_top__DOT__state_reg_in),320);
        bufp->chgWData(oldp+27,(vlSelfRef.ascon_top__DOT__shares_out),330);
        bufp->chgWData(oldp+38,(vlSelfRef.ascon_top__DOT__affine_layer_in[0]),110);
        bufp->chgWData(oldp+42,(vlSelfRef.ascon_top__DOT__affine_layer_in[1]),110);
        bufp->chgWData(oldp+46,(vlSelfRef.ascon_top__DOT__affine_layer_in[2]),110);
        bufp->chgWData(oldp+50,(vlSelfRef.ascon_top__DOT__affine_layer_out[0]),110);
        bufp->chgWData(oldp+54,(vlSelfRef.ascon_top__DOT__affine_layer_out[1]),110);
        bufp->chgWData(oldp+58,(vlSelfRef.ascon_top__DOT__affine_layer_out[2]),110);
        bufp->chgSData(oldp+62,(vlSelfRef.ascon_top__DOT__next_sbox_input[0]),15);
        bufp->chgSData(oldp+63,(vlSelfRef.ascon_top__DOT__next_sbox_input[1]),15);
        bufp->chgSData(oldp+64,(vlSelfRef.ascon_top__DOT__next_sbox_input[2]),15);
        bufp->chgSData(oldp+65,(vlSelfRef.ascon_top__DOT__next_sbox_input[3]),15);
        bufp->chgSData(oldp+66,(vlSelfRef.ascon_top__DOT__next_sbox_input[4]),15);
        bufp->chgSData(oldp+67,(vlSelfRef.ascon_top__DOT__next_sbox_input[5]),15);
        bufp->chgSData(oldp+68,(vlSelfRef.ascon_top__DOT__next_sbox_input[6]),15);
        bufp->chgSData(oldp+69,(vlSelfRef.ascon_top__DOT__next_sbox_input[7]),15);
        bufp->chgSData(oldp+70,(vlSelfRef.ascon_top__DOT__next_sbox_input[8]),15);
        bufp->chgSData(oldp+71,(vlSelfRef.ascon_top__DOT__next_sbox_input[9]),15);
        bufp->chgSData(oldp+72,(vlSelfRef.ascon_top__DOT__next_sbox_input[10]),15);
        bufp->chgSData(oldp+73,(vlSelfRef.ascon_top__DOT__next_sbox_input[11]),15);
        bufp->chgSData(oldp+74,(vlSelfRef.ascon_top__DOT__next_sbox_input[12]),15);
        bufp->chgSData(oldp+75,(vlSelfRef.ascon_top__DOT__next_sbox_input[13]),15);
        bufp->chgSData(oldp+76,(vlSelfRef.ascon_top__DOT__next_sbox_input[14]),15);
        bufp->chgSData(oldp+77,(vlSelfRef.ascon_top__DOT__next_sbox_input[15]),15);
        bufp->chgSData(oldp+78,(vlSelfRef.ascon_top__DOT__next_sbox_input[16]),15);
        bufp->chgSData(oldp+79,(vlSelfRef.ascon_top__DOT__next_sbox_input[17]),15);
        bufp->chgSData(oldp+80,(vlSelfRef.ascon_top__DOT__next_sbox_input[18]),15);
        bufp->chgSData(oldp+81,(vlSelfRef.ascon_top__DOT__next_sbox_input[19]),15);
        bufp->chgSData(oldp+82,(vlSelfRef.ascon_top__DOT__next_sbox_input[20]),15);
        bufp->chgSData(oldp+83,(vlSelfRef.ascon_top__DOT__next_sbox_input[21]),15);
        bufp->chgWData(oldp+84,(vlSelfRef.ascon_top__DOT__share_creator__DOT__temp),110);
        bufp->chgQData(oldp+88,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0]),64);
        bufp->chgQData(oldp+90,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1]),64);
        bufp->chgQData(oldp+92,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2]),64);
        bufp->chgQData(oldp+94,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3]),64);
        bufp->chgQData(oldp+96,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+98,(vlSelfRef.ascon_top__DOT__write_en));
        bufp->chgBit(oldp+99,(vlSelfRef.ascon_top__DOT__shift_en));
        bufp->chgBit(oldp+100,(vlSelfRef.ascon_top__DOT__shift_type));
        bufp->chgBit(oldp+101,(vlSelfRef.ascon_top__DOT__last_cycle));
        bufp->chgWData(oldp+102,(vlSelfRef.ascon_top__DOT__data_in_shifter__DOT__reg_q),128);
        bufp->chgBit(oldp+106,(vlSelfRef.ascon_top__DOT__reg_key1_load));
        bufp->chgQData(oldp+107,(vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q),64);
        bufp->chgBit(oldp+109,(vlSelfRef.ascon_top__DOT__reg_key2_load));
        bufp->chgQData(oldp+110,(vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q),64);
        bufp->chgQData(oldp+112,(vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
        bufp->chgQData(oldp+114,(vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
        bufp->chgQData(oldp+116,(vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
        bufp->chgQData(oldp+118,(vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
        bufp->chgQData(oldp+120,(vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
        bufp->chgBit(oldp+122,(vlSelfRef.ascon_top__DOT__shift_enable_x0));
        bufp->chgBit(oldp+123,(vlSelfRef.ascon_top__DOT__last_cycle_x0));
        bufp->chgQData(oldp+124,((0xf0ULL - (0xfULL 
                                             * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter))))),64);
        __Vtemp_1[0U] = (IData)((0xf0ULL - (0xfULL 
                                            * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
        __Vtemp_1[1U] = (IData)(((0xf0ULL - (0xfULL 
                                             * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                                 >> 0x20U));
        __Vtemp_1[2U] = 0U;
        bufp->chgWData(oldp+126,(__Vtemp_1),66);
        bufp->chgIData(oldp+129,(vlSelfRef.ascon_top__DOT__rc_block[0]),22);
        bufp->chgIData(oldp+130,(vlSelfRef.ascon_top__DOT__rc_block[1]),22);
        bufp->chgIData(oldp+131,(vlSelfRef.ascon_top__DOT__rc_block[2]),22);
        bufp->chgBit(oldp+132,(vlSelfRef.ascon_top__DOT__sel_masked_round));
        bufp->chgBit(oldp+133,(vlSelfRef.ascon_top__DOT__sel_bypass));
        bufp->chgWData(oldp+134,(vlSelfRef.ascon_top__DOT__reverse_reg_data_out),128);
        bufp->chgBit(oldp+138,(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
        bufp->chgCData(oldp+139,(vlSelfRef.ascon_top__DOT__current_state),5);
        bufp->chgCData(oldp+140,(vlSelfRef.ascon_top__DOT__bit_counter),3);
        bufp->chgCData(oldp+141,(vlSelfRef.ascon_top__DOT__number_bits),3);
        bufp->chgCData(oldp+142,(vlSelfRef.ascon_top__DOT__round_counter),4);
        bufp->chgCData(oldp+143,(vlSelfRef.ascon_top__DOT__number_round),4);
        bufp->chgBit(oldp+144,(vlSelfRef.ascon_top__DOT__last_block_process_ff));
        bufp->chgBit(oldp+145,(vlSelfRef.ascon_top__DOT__round_counter_enable));
        bufp->chgBit(oldp+146,(vlSelfRef.ascon_top__DOT__extra_padding_ff));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+147,(vlSelfRef.ascon_top__DOT__state_reg_out),320);
        __Vtemp_3[0U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U];
        __Vtemp_3[1U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U];
        __Vtemp_3[2U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U];
        __Vtemp_3[3U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U];
        __Vtemp_3[4U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U];
        __Vtemp_3[5U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U];
        __Vtemp_3[6U] = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                [3U]);
        __Vtemp_3[7U] = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                 [3U] >> 0x20U));
        __Vtemp_3[8U] = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                [4U]);
        __Vtemp_3[9U] = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                 [4U] >> 0x20U));
        bufp->chgWData(oldp+157,(__Vtemp_3),320);
        bufp->chgWData(oldp+167,(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1),320);
        bufp->chgQData(oldp+177,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))),64);
        bufp->chgQData(oldp+179,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])))),64);
        bufp->chgQData(oldp+181,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U])))),64);
        bufp->chgQData(oldp+183,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])))),64);
        bufp->chgQData(oldp+185,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])))),64);
        __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))));
        __Vtemp_4[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                                 >> 0x20U));
        __Vtemp_4[2U] = 0U;
        bufp->chgWData(oldp+187,(__Vtemp_4),66);
        __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))));
        __Vtemp_5[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                                 >> 0x20U));
        __Vtemp_5[2U] = 0U;
        bufp->chgWData(oldp+190,(__Vtemp_5),66);
        __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))));
        __Vtemp_6[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                                 >> 0x20U));
        __Vtemp_6[2U] = 0U;
        bufp->chgWData(oldp+193,(__Vtemp_6),66);
        __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))));
        __Vtemp_7[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                 >> 0x20U));
        __Vtemp_7[2U] = 0U;
        bufp->chgWData(oldp+196,(__Vtemp_7),66);
        bufp->chgSData(oldp+199,(vlSelfRef.ascon_top__DOT__sbox_input[0]),15);
        bufp->chgSData(oldp+200,(vlSelfRef.ascon_top__DOT__sbox_input[1]),15);
        bufp->chgSData(oldp+201,(vlSelfRef.ascon_top__DOT__sbox_input[2]),15);
        bufp->chgSData(oldp+202,(vlSelfRef.ascon_top__DOT__sbox_input[3]),15);
        bufp->chgSData(oldp+203,(vlSelfRef.ascon_top__DOT__sbox_input[4]),15);
        bufp->chgSData(oldp+204,(vlSelfRef.ascon_top__DOT__sbox_input[5]),15);
        bufp->chgSData(oldp+205,(vlSelfRef.ascon_top__DOT__sbox_input[6]),15);
        bufp->chgSData(oldp+206,(vlSelfRef.ascon_top__DOT__sbox_input[7]),15);
        bufp->chgSData(oldp+207,(vlSelfRef.ascon_top__DOT__sbox_input[8]),15);
        bufp->chgSData(oldp+208,(vlSelfRef.ascon_top__DOT__sbox_input[9]),15);
        bufp->chgSData(oldp+209,(vlSelfRef.ascon_top__DOT__sbox_input[10]),15);
        bufp->chgSData(oldp+210,(vlSelfRef.ascon_top__DOT__sbox_input[11]),15);
        bufp->chgSData(oldp+211,(vlSelfRef.ascon_top__DOT__sbox_input[12]),15);
        bufp->chgSData(oldp+212,(vlSelfRef.ascon_top__DOT__sbox_input[13]),15);
        bufp->chgSData(oldp+213,(vlSelfRef.ascon_top__DOT__sbox_input[14]),15);
        bufp->chgSData(oldp+214,(vlSelfRef.ascon_top__DOT__sbox_input[15]),15);
        bufp->chgSData(oldp+215,(vlSelfRef.ascon_top__DOT__sbox_input[16]),15);
        bufp->chgSData(oldp+216,(vlSelfRef.ascon_top__DOT__sbox_input[17]),15);
        bufp->chgSData(oldp+217,(vlSelfRef.ascon_top__DOT__sbox_input[18]),15);
        bufp->chgSData(oldp+218,(vlSelfRef.ascon_top__DOT__sbox_input[19]),15);
        bufp->chgSData(oldp+219,(vlSelfRef.ascon_top__DOT__sbox_input[20]),15);
        bufp->chgSData(oldp+220,(vlSelfRef.ascon_top__DOT__sbox_input[21]),15);
        bufp->chgSData(oldp+221,(vlSelfRef.ascon_top__DOT__sbox_output[0]),15);
        bufp->chgSData(oldp+222,(vlSelfRef.ascon_top__DOT__sbox_output[1]),15);
        bufp->chgSData(oldp+223,(vlSelfRef.ascon_top__DOT__sbox_output[2]),15);
        bufp->chgSData(oldp+224,(vlSelfRef.ascon_top__DOT__sbox_output[3]),15);
        bufp->chgSData(oldp+225,(vlSelfRef.ascon_top__DOT__sbox_output[4]),15);
        bufp->chgSData(oldp+226,(vlSelfRef.ascon_top__DOT__sbox_output[5]),15);
        bufp->chgSData(oldp+227,(vlSelfRef.ascon_top__DOT__sbox_output[6]),15);
        bufp->chgSData(oldp+228,(vlSelfRef.ascon_top__DOT__sbox_output[7]),15);
        bufp->chgSData(oldp+229,(vlSelfRef.ascon_top__DOT__sbox_output[8]),15);
        bufp->chgSData(oldp+230,(vlSelfRef.ascon_top__DOT__sbox_output[9]),15);
        bufp->chgSData(oldp+231,(vlSelfRef.ascon_top__DOT__sbox_output[10]),15);
        bufp->chgSData(oldp+232,(vlSelfRef.ascon_top__DOT__sbox_output[11]),15);
        bufp->chgSData(oldp+233,(vlSelfRef.ascon_top__DOT__sbox_output[12]),15);
        bufp->chgSData(oldp+234,(vlSelfRef.ascon_top__DOT__sbox_output[13]),15);
        bufp->chgSData(oldp+235,(vlSelfRef.ascon_top__DOT__sbox_output[14]),15);
        bufp->chgSData(oldp+236,(vlSelfRef.ascon_top__DOT__sbox_output[15]),15);
        bufp->chgSData(oldp+237,(vlSelfRef.ascon_top__DOT__sbox_output[16]),15);
        bufp->chgSData(oldp+238,(vlSelfRef.ascon_top__DOT__sbox_output[17]),15);
        bufp->chgSData(oldp+239,(vlSelfRef.ascon_top__DOT__sbox_output[18]),15);
        bufp->chgSData(oldp+240,(vlSelfRef.ascon_top__DOT__sbox_output[19]),15);
        bufp->chgSData(oldp+241,(vlSelfRef.ascon_top__DOT__sbox_output[20]),15);
        bufp->chgSData(oldp+242,(vlSelfRef.ascon_top__DOT__sbox_output[21]),15);
        bufp->chgSData(oldp+243,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0]),15);
        bufp->chgSData(oldp+244,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[1]),15);
        bufp->chgSData(oldp+245,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[2]),15);
        bufp->chgSData(oldp+246,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[3]),15);
        bufp->chgSData(oldp+247,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[4]),15);
        bufp->chgSData(oldp+248,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[5]),15);
        bufp->chgSData(oldp+249,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[6]),15);
        bufp->chgSData(oldp+250,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[7]),15);
        bufp->chgSData(oldp+251,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[8]),15);
        bufp->chgSData(oldp+252,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[9]),15);
        bufp->chgSData(oldp+253,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[10]),15);
        bufp->chgSData(oldp+254,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[11]),15);
        bufp->chgSData(oldp+255,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[12]),15);
        bufp->chgSData(oldp+256,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[13]),15);
        bufp->chgSData(oldp+257,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[14]),15);
        bufp->chgSData(oldp+258,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[15]),15);
        bufp->chgSData(oldp+259,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[16]),15);
        bufp->chgSData(oldp+260,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[17]),15);
        bufp->chgSData(oldp+261,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[18]),15);
        bufp->chgSData(oldp+262,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[19]),15);
        bufp->chgSData(oldp+263,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[20]),15);
        bufp->chgSData(oldp+264,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[21]),15);
        bufp->chgCData(oldp+265,(vlSelfRef.ascon_top__DOT__fresh_r),3);
        bufp->chgQData(oldp+266,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[0]),64);
        bufp->chgQData(oldp+268,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[1]),64);
        bufp->chgQData(oldp+270,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[2]),64);
        bufp->chgQData(oldp+272,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[3]),64);
        bufp->chgQData(oldp+274,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[4]),64);
        bufp->chgIData(oldp+276,((0x3fffffU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])),22);
        bufp->chgIData(oldp+277,((0x3fffffU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])),22);
        bufp->chgIData(oldp+278,((0x3fffffU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])),22);
        bufp->chgIData(oldp+279,((0x3fffffU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])),22);
        bufp->chgQData(oldp+280,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[0]),64);
        bufp->chgQData(oldp+282,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[1]),64);
        bufp->chgQData(oldp+284,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[2]),64);
        bufp->chgQData(oldp+286,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[3]),64);
        bufp->chgQData(oldp+288,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[4]),64);
        bufp->chgIData(oldp+290,(vlSelfRef.ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+291,(vlSelfRef.ascon_top__DOT__unnamedblk1__DOT__p),32);
        bufp->chgSData(oldp+292,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [0U]),15);
        bufp->chgSData(oldp+293,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+294,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+296,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+300,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+301,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+302,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+303,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+304,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+305,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+306,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+307,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+308,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+309,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+310,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+311,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+312,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+313,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+314,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+315,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+316,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+317,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+318,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+319,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+320,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+321,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+322,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+323,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+324,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+325,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+326,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+327,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+328,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+329,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+330,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+331,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+335,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+339,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+344,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+345,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+346,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+347,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [1U]),15);
        bufp->chgSData(oldp+348,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+349,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+350,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+351,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+352,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+355,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+356,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+357,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+358,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+359,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+360,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+361,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+362,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+363,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+364,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+365,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+366,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+367,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+368,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+369,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+370,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+371,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+372,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+373,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+374,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+375,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+376,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+377,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+378,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+379,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+380,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+381,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+382,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+383,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+384,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+385,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+386,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+387,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+388,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+389,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+390,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+391,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+392,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+393,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+399,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+400,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+401,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+402,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [2U]),15);
        bufp->chgSData(oldp+403,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+404,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+406,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+407,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+409,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+410,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+411,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+412,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+413,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+414,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+415,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+416,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+417,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+418,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+419,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+420,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+421,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+422,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+423,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+424,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+425,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+426,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+427,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+428,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+429,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+430,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+431,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+432,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+433,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+434,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+435,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+436,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+437,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+438,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+439,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+440,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+441,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+442,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+449,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+450,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+451,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+452,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+453,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+454,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+455,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+456,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+457,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [3U]),15);
        bufp->chgSData(oldp+458,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+459,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+460,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+461,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+462,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+463,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+464,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+465,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+466,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+467,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+468,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+469,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+470,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+471,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+472,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+473,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+474,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+475,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+476,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+477,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+478,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+479,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+480,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+481,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+482,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+483,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+484,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+485,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+486,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+487,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+488,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+489,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+490,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+491,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+492,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+493,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+494,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+495,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+496,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+497,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+498,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+500,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+502,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+504,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+509,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+510,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+512,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [4U]),15);
        bufp->chgSData(oldp+513,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+514,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+515,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+516,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+517,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+518,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+520,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+521,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+522,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+523,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+524,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+525,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+526,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+527,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+528,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+529,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+530,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+531,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+532,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+533,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+534,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+535,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+536,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+537,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+538,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+539,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+540,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+541,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+542,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+543,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+544,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+545,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+546,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+547,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+548,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+549,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+558,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+559,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+564,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+565,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+566,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+567,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [5U]),15);
        bufp->chgSData(oldp+568,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+569,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+570,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+571,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+572,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+574,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+575,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+576,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+577,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+578,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+579,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+580,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+581,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+582,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+583,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+584,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+585,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+586,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+587,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+588,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+589,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+590,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+591,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+592,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+593,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+594,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+595,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+596,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+597,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+598,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+599,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+600,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+601,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+602,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+603,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+604,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+606,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+607,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+608,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+609,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+610,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+611,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+612,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+613,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+616,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+617,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+619,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+620,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+621,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+622,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [6U]),15);
        bufp->chgSData(oldp+623,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+624,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+625,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+626,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+629,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+630,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+631,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+632,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+633,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+634,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+635,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+636,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+637,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+638,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+639,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+640,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+641,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+642,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+643,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+644,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+645,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+646,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+647,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+648,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+649,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+650,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+651,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+652,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+653,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+654,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+655,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+656,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+657,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+658,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+659,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+660,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+664,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+665,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+670,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+671,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+672,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+673,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+674,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+675,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+676,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+677,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [7U]),15);
        bufp->chgSData(oldp+678,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+679,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+680,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+681,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+682,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+683,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+684,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+685,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+686,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+687,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+688,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+689,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+690,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+691,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+692,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+693,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+694,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+695,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+696,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+697,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+698,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+699,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+700,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+701,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+702,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+703,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+704,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+705,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+706,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+707,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+708,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+709,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+710,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+711,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+712,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+713,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+714,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+720,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+721,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+723,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+729,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+730,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+731,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+732,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [8U]),15);
        bufp->chgSData(oldp+733,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+734,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+735,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+736,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+737,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+738,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+739,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+740,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+741,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+742,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+743,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+744,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+745,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+746,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+747,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+748,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+749,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+750,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+751,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+752,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+753,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+754,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+755,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+756,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+757,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+758,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+759,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+760,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+761,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+762,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+763,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+764,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+765,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+766,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+767,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+768,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+769,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+770,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+772,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+778,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+784,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+785,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+786,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+787,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [9U]),15);
        bufp->chgSData(oldp+788,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+789,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+790,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+795,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+796,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+797,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+798,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+799,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+800,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+801,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+802,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+803,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+804,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+805,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+806,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+807,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+808,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+809,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+810,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+811,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+812,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+813,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+814,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+815,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+816,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+817,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+818,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+819,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+820,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+821,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+822,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+823,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+824,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+825,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+826,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+838,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+839,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+840,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+841,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+842,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [0xaU]),15);
        bufp->chgSData(oldp+843,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+844,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+850,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+851,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+852,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+853,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+854,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+855,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+856,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+857,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+858,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+859,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+860,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+861,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+862,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+863,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+864,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+865,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+866,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+867,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+868,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+869,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+870,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+871,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+872,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+873,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+874,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+875,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+876,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+877,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+878,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+879,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+881,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+882,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+884,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+886,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+891,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+892,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+894,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+895,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+897,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [0xbU]),15);
        bufp->chgSData(oldp+898,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+899,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+903,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+904,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+905,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+906,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+907,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+908,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+909,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+910,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+911,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+912,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+913,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+914,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+915,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+916,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+917,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+918,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+919,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+920,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+921,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+922,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+923,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+924,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+925,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+926,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+927,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+928,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+929,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+930,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+931,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+932,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+933,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+934,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+936,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+937,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+938,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+941,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+942,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+948,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+949,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+950,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+952,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [0xcU]),15);
        bufp->chgSData(oldp+953,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                   [0U])))),15);
        bufp->chgSData(oldp+954,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                    [4U] << 0xcU) | 
                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                    [3U] << 9U)) | 
                                  ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                    [2U] << 6U) | (
                                                   (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [0U])))),15);
        bufp->chgCData(oldp+955,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+957,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+958,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+960,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [0U])),3);
        bufp->chgCData(oldp+961,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+962,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+963,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [1U])),3);
        bufp->chgCData(oldp+964,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+965,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+966,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [2U])),3);
        bufp->chgCData(oldp+967,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+968,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+969,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [3U])),3);
        bufp->chgCData(oldp+970,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+971,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+972,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                  [4U])),3);
        bufp->chgCData(oldp+973,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+974,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+975,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [0U])),3);
        bufp->chgCData(oldp+976,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 3U))),3);
        bufp->chgCData(oldp+977,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [0U] >> 6U))),3);
        bufp->chgCData(oldp+978,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [1U])),3);
        bufp->chgCData(oldp+979,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 3U))),3);
        bufp->chgCData(oldp+980,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [1U] >> 6U))),3);
        bufp->chgCData(oldp+981,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [2U])),3);
        bufp->chgCData(oldp+982,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 3U))),3);
        bufp->chgCData(oldp+983,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [2U] >> 6U))),3);
        bufp->chgCData(oldp+984,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [3U])),3);
        bufp->chgCData(oldp+985,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 3U))),3);
        bufp->chgCData(oldp+986,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [3U] >> 6U))),3);
        bufp->chgCData(oldp+987,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                  [4U])),3);
        bufp->chgCData(oldp+988,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 3U))),3);
        bufp->chgCData(oldp+989,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                        [4U] >> 6U))),3);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+991,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+992,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+993,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+994,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+995,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+996,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+997,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+999,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1006,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1007,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0xdU]),15);
        bufp->chgSData(oldp+1008,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1009,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1013,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1015,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1016,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1017,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1018,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1019,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1020,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1021,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1022,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1023,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1024,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1025,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1026,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1027,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1028,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1029,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1030,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1031,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1032,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1033,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1034,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1035,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1036,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1037,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1038,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1039,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1040,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1041,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1042,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1043,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1044,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1048,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1051,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1052,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1053,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1061,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1062,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0xeU]),15);
        bufp->chgSData(oldp+1063,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1064,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1070,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1071,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1072,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1073,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1074,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1075,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1076,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1077,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1078,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1079,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1080,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1081,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1082,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1083,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1084,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1085,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1086,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1087,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1088,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1089,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1090,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1091,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1092,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1093,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1094,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1095,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1096,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1097,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1098,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1099,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1104,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1105,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1106,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1116,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1117,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0xfU]),15);
        bufp->chgSData(oldp+1118,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1119,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1120,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1121,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1123,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1124,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1125,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1126,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1127,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1128,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1129,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1130,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1131,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1132,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1133,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1134,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1135,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1136,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1137,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1138,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1139,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1140,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1141,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1142,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1143,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1144,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1145,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1146,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1147,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1148,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1149,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1150,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1151,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1152,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1153,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1154,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1155,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1156,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1157,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1159,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1169,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1171,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1172,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0x10U]),15);
        bufp->chgSData(oldp+1173,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1174,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1177,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1180,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1181,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1182,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1183,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1184,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1185,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1186,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1187,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1188,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1189,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1190,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1191,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1192,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1193,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1194,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1195,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1196,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1197,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1198,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1199,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1200,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1201,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1202,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1203,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1204,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1205,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1206,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1207,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1208,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1209,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1219,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1226,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1227,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0x11U]),15);
        bufp->chgSData(oldp+1228,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1229,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1235,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1236,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1237,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1238,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1239,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1240,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1241,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1242,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1243,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1244,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1245,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1246,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1247,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1248,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1249,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1250,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1251,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1252,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1253,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1254,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1255,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1256,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1257,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1258,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1259,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1260,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1261,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1262,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1263,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1264,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1269,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1270,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1271,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1272,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1273,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1282,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0x12U]),15);
        bufp->chgSData(oldp+1283,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1284,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1287,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1288,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1289,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1290,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1291,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1292,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1293,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1294,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1295,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1296,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1297,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1298,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1299,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1300,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1301,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1302,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1303,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1304,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1305,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1306,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1307,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1308,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1309,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1310,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1311,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1312,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1313,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1314,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1315,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1316,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1317,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1318,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1319,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1322,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1323,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1324,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1331,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1333,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1335,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1336,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1337,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0x13U]),15);
        bufp->chgSData(oldp+1338,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1339,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1345,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1346,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1347,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1348,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1349,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1350,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1351,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1352,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1353,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1354,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1355,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1356,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1357,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1358,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1359,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1360,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1361,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1362,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1363,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1364,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1365,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1366,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1367,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1368,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1369,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1370,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1371,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1372,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1373,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1374,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1375,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1376,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1377,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1381,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1388,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1390,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1391,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1392,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0x14U]),15);
        bufp->chgSData(oldp+1393,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1394,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1400,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1401,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1402,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1403,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1404,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1405,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1406,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1407,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1408,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1409,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1410,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1411,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1412,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1413,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1414,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1415,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1416,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1417,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1418,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1419,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1420,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1421,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1422,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1423,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1424,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1425,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1426,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1427,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1428,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1429,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1431,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1432,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1433,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1435,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1436,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1437,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1438,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1439,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1440,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1441,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1446,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
        bufp->chgSData(oldp+1447,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [0x15U]),15);
        bufp->chgSData(oldp+1448,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                         [0U])))),15);
        bufp->chgSData(oldp+1449,((((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                     [4U] << 0xcU) 
                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                       [3U] << 9U)) 
                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                       [2U] << 6U) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                          [1U] << 3U) 
                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                         [0U])))),15);
        bufp->chgCData(oldp+1450,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[0]),3);
        bufp->chgCData(oldp+1451,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[1]),3);
        bufp->chgCData(oldp+1452,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[2]),3);
        bufp->chgCData(oldp+1453,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[3]),3);
        bufp->chgCData(oldp+1454,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[4]),3);
        bufp->chgCData(oldp+1455,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [0U])),3);
        bufp->chgCData(oldp+1456,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1457,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1458,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [1U])),3);
        bufp->chgCData(oldp+1459,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1460,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1461,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [2U])),3);
        bufp->chgCData(oldp+1462,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1463,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1464,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [3U])),3);
        bufp->chgCData(oldp+1465,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1466,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1467,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                   [4U])),3);
        bufp->chgCData(oldp+1468,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1469,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1470,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [0U])),3);
        bufp->chgCData(oldp+1471,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 3U))),3);
        bufp->chgCData(oldp+1472,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U] >> 6U))),3);
        bufp->chgCData(oldp+1473,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [1U])),3);
        bufp->chgCData(oldp+1474,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 3U))),3);
        bufp->chgCData(oldp+1475,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U] >> 6U))),3);
        bufp->chgCData(oldp+1476,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [2U])),3);
        bufp->chgCData(oldp+1477,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 3U))),3);
        bufp->chgCData(oldp+1478,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U] >> 6U))),3);
        bufp->chgCData(oldp+1479,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [3U])),3);
        bufp->chgCData(oldp+1480,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 3U))),3);
        bufp->chgCData(oldp+1481,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U] >> 6U))),3);
        bufp->chgCData(oldp+1482,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                   [4U])),3);
        bufp->chgCData(oldp+1483,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 3U))),3);
        bufp->chgCData(oldp+1484,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U] >> 6U))),3);
        bufp->chgCData(oldp+1485,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[0]),3);
        bufp->chgCData(oldp+1486,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[1]),3);
        bufp->chgCData(oldp+1487,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[2]),3);
        bufp->chgCData(oldp+1488,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[3]),3);
        bufp->chgCData(oldp+1489,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[4]),3);
        bufp->chgCData(oldp+1490,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        bufp->chgCData(oldp+1491,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        bufp->chgCData(oldp+1492,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        bufp->chgCData(oldp+1493,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        bufp->chgCData(oldp+1495,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        bufp->chgCData(oldp+1496,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        bufp->chgCData(oldp+1497,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        bufp->chgCData(oldp+1498,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        bufp->chgBit(oldp+1499,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r));
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),3);
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk7__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+1502,(vlSelfRef.ascon_top__DOT__state_reg_in_bypass[0]),64);
        bufp->chgQData(oldp+1504,(vlSelfRef.ascon_top__DOT__state_reg_in_bypass[1]),64);
        bufp->chgQData(oldp+1506,(vlSelfRef.ascon_top__DOT__state_reg_in_bypass[2]),64);
        bufp->chgQData(oldp+1508,(vlSelfRef.ascon_top__DOT__state_reg_in_bypass[3]),64);
        bufp->chgQData(oldp+1510,(vlSelfRef.ascon_top__DOT__state_reg_in_bypass[4]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        __Vtemp_8[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6)) 
                                  << 0x16U) | (QData)((IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit))));
        __Vtemp_8[1U] = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                          << 0xcU) | (IData)(((((QData)((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6)) 
                                                << 0x16U) 
                                               | (QData)((IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit))) 
                                              >> 0x20U)));
        __Vtemp_8[2U] = (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                         >> 0x14U);
        bufp->chgWData(oldp+1512,(__Vtemp_8),66);
        bufp->chgWData(oldp+1515,(vlSelfRef.ascon_top__DOT__shares_in),110);
        bufp->chgSData(oldp+1519,(vlSelfRef.ascon_top__DOT__mux_sbox_out[0]),15);
        bufp->chgSData(oldp+1520,(vlSelfRef.ascon_top__DOT__mux_sbox_out[1]),15);
        bufp->chgSData(oldp+1521,(vlSelfRef.ascon_top__DOT__mux_sbox_out[2]),15);
        bufp->chgSData(oldp+1522,(vlSelfRef.ascon_top__DOT__mux_sbox_out[3]),15);
        bufp->chgSData(oldp+1523,(vlSelfRef.ascon_top__DOT__mux_sbox_out[4]),15);
        bufp->chgSData(oldp+1524,(vlSelfRef.ascon_top__DOT__mux_sbox_out[5]),15);
        bufp->chgSData(oldp+1525,(vlSelfRef.ascon_top__DOT__mux_sbox_out[6]),15);
        bufp->chgSData(oldp+1526,(vlSelfRef.ascon_top__DOT__mux_sbox_out[7]),15);
        bufp->chgSData(oldp+1527,(vlSelfRef.ascon_top__DOT__mux_sbox_out[8]),15);
        bufp->chgSData(oldp+1528,(vlSelfRef.ascon_top__DOT__mux_sbox_out[9]),15);
        bufp->chgSData(oldp+1529,(vlSelfRef.ascon_top__DOT__mux_sbox_out[10]),15);
        bufp->chgSData(oldp+1530,(vlSelfRef.ascon_top__DOT__mux_sbox_out[11]),15);
        bufp->chgSData(oldp+1531,(vlSelfRef.ascon_top__DOT__mux_sbox_out[12]),15);
        bufp->chgSData(oldp+1532,(vlSelfRef.ascon_top__DOT__mux_sbox_out[13]),15);
        bufp->chgSData(oldp+1533,(vlSelfRef.ascon_top__DOT__mux_sbox_out[14]),15);
        bufp->chgSData(oldp+1534,(vlSelfRef.ascon_top__DOT__mux_sbox_out[15]),15);
        bufp->chgSData(oldp+1535,(vlSelfRef.ascon_top__DOT__mux_sbox_out[16]),15);
        bufp->chgSData(oldp+1536,(vlSelfRef.ascon_top__DOT__mux_sbox_out[17]),15);
        bufp->chgSData(oldp+1537,(vlSelfRef.ascon_top__DOT__mux_sbox_out[18]),15);
        bufp->chgSData(oldp+1538,(vlSelfRef.ascon_top__DOT__mux_sbox_out[19]),15);
        bufp->chgSData(oldp+1539,(vlSelfRef.ascon_top__DOT__mux_sbox_out[20]),15);
        bufp->chgSData(oldp+1540,(vlSelfRef.ascon_top__DOT__mux_sbox_out[21]),15);
        bufp->chgWData(oldp+1541,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0]),110);
        bufp->chgWData(oldp+1545,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1]),110);
        bufp->chgWData(oldp+1549,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2]),110);
        bufp->chgWData(oldp+1553,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0]),110);
        bufp->chgWData(oldp+1557,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1]),110);
        bufp->chgWData(oldp+1561,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2]),110);
        bufp->chgWData(oldp+1565,(vlSelfRef.ascon_top__DOT__recombine_shares),110);
        bufp->chgWData(oldp+1569,(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1),320);
        bufp->chgCData(oldp+1579,(vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1580,(vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1581,(vlSelfRef.ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1582,(vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1583,(vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1584,(vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1585,(vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1586,(vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1587,(vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1588,(vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1589,(vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1590,(vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1591,(vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1592,(vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1593,(vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1594,(vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1595,(vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1596,(vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1597,(vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1598,(vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1599,(vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1600,(vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1601,(vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1602,(vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1603,(vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1604,(vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1605,(vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1606,(vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1607,(vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1608,(vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1609,(vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1610,(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1611,(vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1612,(vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1613,(vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1614,(vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1615,(vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1616,(vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1617,(vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1618,(vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1619,(vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1620,(vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1621,(vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1622,(vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1623,(vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1624,(vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1625,(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1626,(vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1627,(vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1628,(vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1629,(vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1630,(vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1631,(vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1632,(vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1633,(vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1634,(vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1635,(vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1636,(vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1637,(vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1638,(vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1639,(vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1640,(vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1641,(vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1642,(vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1643,(vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1644,(vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1645,(vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1646,(vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1647,(vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1648,(vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1649,(vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1650,(vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1651,(vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1652,(vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1653,(vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1654,(vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1655,(vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1656,(vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1657,(vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1658,(vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1659,(vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1660,(vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1661,(vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1662,(vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1663,(vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1664,(vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1665,(vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1666,(vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1667,(vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1668,(vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1669,(vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1670,(vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1671,(vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1672,(vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1673,(vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1674,(vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1675,(vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1676,(vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1677,(vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1678,(vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1679,(vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1680,(vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1681,(vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1682,(vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1683,(vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1684,(vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1685,(vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1686,(vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1687,(vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits),3);
        bufp->chgCData(oldp+1688,(vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),3);
        bufp->chgQData(oldp+1689,(vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
        bufp->chgQData(oldp+1691,(vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
        bufp->chgIData(oldp+1693,(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit),22);
        bufp->chgQData(oldp+1694,(vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
        bufp->chgQData(oldp+1696,(vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
        bufp->chgQData(oldp+1698,(vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
    }
    bufp->chgBit(oldp+1700,(vlSelfRef.clk));
    bufp->chgBit(oldp+1701,(vlSelfRef.reset_n));
    bufp->chgBit(oldp+1702,(vlSelfRef.start));
    bufp->chgQData(oldp+1703,(vlSelfRef.key1),64);
    bufp->chgQData(oldp+1705,(vlSelfRef.key2),64);
    bufp->chgBit(oldp+1707,(vlSelfRef.key_valid));
    bufp->chgQData(oldp+1708,(vlSelfRef.nonce1),64);
    bufp->chgQData(oldp+1710,(vlSelfRef.nonce2),64);
    bufp->chgQData(oldp+1712,(vlSelfRef.initialVector),64);
    bufp->chgWData(oldp+1714,(vlSelfRef.data_in),128);
    bufp->chgBit(oldp+1718,(vlSelfRef.valid_data_in));
    bufp->chgBit(oldp+1719,(vlSelfRef.last_block));
    bufp->chgCData(oldp+1720,(vlSelfRef.valid_bytes),4);
    bufp->chgBit(oldp+1721,(vlSelfRef.EOT));
    bufp->chgWData(oldp+1722,(vlSelfRef.random_masks),220);
    bufp->chgBit(oldp+1729,(vlSelfRef.ciphertext_valid));
    bufp->chgWData(oldp+1730,(vlSelfRef.ciphertext),128);
    bufp->chgBit(oldp+1734,(vlSelfRef.done));
    bufp->chgBit(oldp+1735,(vlSelfRef.ready_tag));
    bufp->chgQData(oldp+1736,(vlSelfRef.tag1),64);
    bufp->chgQData(oldp+1738,(vlSelfRef.tag2),64);
    bufp->chgBit(oldp+1740,(vlSelfRef.ready_for_data));
    bufp->chgCData(oldp+1741,(vlSelfRef.debug_bitcounter),3);
    bufp->chgCData(oldp+1742,(vlSelfRef.debug_roundcounter),4);
    bufp->chgCData(oldp+1743,(vlSelfRef.debug_state),5);
    bufp->chgQData(oldp+1744,(vlSelfRef.debug_state_0),64);
    bufp->chgQData(oldp+1746,(vlSelfRef.debug_state_1),64);
    bufp->chgQData(oldp+1748,(vlSelfRef.debug_state_2),64);
    bufp->chgQData(oldp+1750,(vlSelfRef.debug_state_3),64);
    bufp->chgQData(oldp+1752,(vlSelfRef.debug_state_4),64);
    bufp->chgQData(oldp+1754,(vlSelfRef.debug_round_state_0),64);
    bufp->chgQData(oldp+1756,(vlSelfRef.debug_round_state_1),64);
    bufp->chgQData(oldp+1758,(vlSelfRef.debug_round_state_2),64);
    bufp->chgQData(oldp+1760,(vlSelfRef.debug_round_state_3),64);
    bufp->chgQData(oldp+1762,(vlSelfRef.debug_round_state_4),64);
    bufp->chgQData(oldp+1764,(vlSelfRef.debug_linear_diffusion_state3),64);
    bufp->chgQData(oldp+1766,(vlSelfRef.debug_linear_diffusion_state4),64);
    bufp->chgBit(oldp+1768,(vlSelfRef.debug_extra_padding_ff));
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
    bufp->chgWData(oldp+1769,(__Vtemp_12),320);
    bufp->chgQData(oldp+1779,(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                   [4U] ^ vlSelfRef.ascon_top__DOT__xor_signal)
                                : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                               [4U])),64);
    bufp->chgQData(oldp+1781,(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
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
                                  [4U] ^ vlSelfRef.ascon_top__DOT__xor_signal)
                               : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                              [4U]));
    __Vtemp_14[9U] = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                   [4U] ^ vlSelfRef.ascon_top__DOT__xor_signal)
                                : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                               [4U]) >> 0x20U));
    bufp->chgWData(oldp+1783,(__Vtemp_14),320);
}

void Vascon_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root__trace_cleanup\n"); );
    // Init
    Vascon_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
