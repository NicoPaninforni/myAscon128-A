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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<10>/*319:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<10>/*319:0*/ __Vtemp_12;
    VlWide<10>/*319:0*/ __Vtemp_14;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ascon_top__DOT__write_en));
        bufp->chgBit(oldp+1,(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
        bufp->chgBit(oldp+2,(vlSelfRef.ascon_top__DOT__sel_init_load));
        bufp->chgBit(oldp+3,(vlSelfRef.ascon_top__DOT__sel_padding));
        bufp->chgBit(oldp+4,(vlSelfRef.ascon_top__DOT__sel_absorb_data));
        bufp->chgBit(oldp+5,(vlSelfRef.ascon_top__DOT__extra_padding));
        bufp->chgWData(oldp+6,(vlSelfRef.ascon_top__DOT__data_in_padded),128);
        bufp->chgWData(oldp+10,(vlSelfRef.ascon_top__DOT__reverse_reg_data_out),128);
        bufp->chgCData(oldp+14,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state),5);
        bufp->chgBit(oldp+15,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process));
        bufp->chgBit(oldp+16,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
        bufp->chgBit(oldp+17,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
        bufp->chgBit(oldp+18,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
        bufp->chgIData(oldp+19,(vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgQData(oldp+20,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0]),55);
        bufp->chgQData(oldp+22,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[1]),55);
        bufp->chgQData(oldp+24,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[2]),55);
        bufp->chgQData(oldp+26,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[3]),55);
        bufp->chgQData(oldp+28,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[4]),55);
        bufp->chgQData(oldp+30,(vlSelfRef.ascon_top__DOT__sbox_output_unmasked[5]),55);
        bufp->chgQData(oldp+32,((((QData)((IData)((
                                                   (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
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
        bufp->chgSData(oldp+34,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                 [0U][0U])),11);
        bufp->chgSData(oldp+35,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][0U] 
                                           >> 0xbU))),11);
        bufp->chgSData(oldp+36,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U][0U] 
                                              >> 0x16U)))),11);
        bufp->chgSData(oldp+37,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][1U] 
                                           >> 1U))),11);
        bufp->chgSData(oldp+38,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][1U] 
                                           >> 0xcU))),11);
        bufp->chgSData(oldp+39,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            << 9U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U][1U] 
                                              >> 0x17U)))),11);
        bufp->chgSData(oldp+40,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][2U] 
                                           >> 2U))),11);
        bufp->chgSData(oldp+41,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][2U] 
                                           >> 0xdU))),11);
        bufp->chgSData(oldp+42,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            << 8U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [0U][2U] 
                                              >> 0x18U)))),11);
        bufp->chgSData(oldp+43,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][3U] 
                                           >> 3U))),11);
        bufp->chgSData(oldp+44,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [0U][3U] 
                                           >> 0xeU))),11);
        bufp->chgSData(oldp+45,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                 [1U][0U])),11);
        bufp->chgSData(oldp+46,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][0U] 
                                           >> 0xbU))),11);
        bufp->chgSData(oldp+47,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U][0U] 
                                              >> 0x16U)))),11);
        bufp->chgSData(oldp+48,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][1U] 
                                           >> 1U))),11);
        bufp->chgSData(oldp+49,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][1U] 
                                           >> 0xcU))),11);
        bufp->chgSData(oldp+50,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            << 9U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U][1U] 
                                              >> 0x17U)))),11);
        bufp->chgSData(oldp+51,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][2U] 
                                           >> 2U))),11);
        bufp->chgSData(oldp+52,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][2U] 
                                           >> 0xdU))),11);
        bufp->chgSData(oldp+53,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            << 8U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [1U][2U] 
                                              >> 0x18U)))),11);
        bufp->chgSData(oldp+54,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][3U] 
                                           >> 3U))),11);
        bufp->chgSData(oldp+55,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [1U][3U] 
                                           >> 0xeU))),11);
        bufp->chgSData(oldp+56,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                 [2U][0U])),11);
        bufp->chgSData(oldp+57,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][0U] 
                                           >> 0xbU))),11);
        bufp->chgSData(oldp+58,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U][0U] 
                                              >> 0x16U)))),11);
        bufp->chgSData(oldp+59,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][1U] 
                                           >> 1U))),11);
        bufp->chgSData(oldp+60,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][1U] 
                                           >> 0xcU))),11);
        bufp->chgSData(oldp+61,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            << 9U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U][1U] 
                                              >> 0x17U)))),11);
        bufp->chgSData(oldp+62,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][2U] 
                                           >> 2U))),11);
        bufp->chgSData(oldp+63,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][2U] 
                                           >> 0xdU))),11);
        bufp->chgSData(oldp+64,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            << 8U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [2U][2U] 
                                              >> 0x18U)))),11);
        bufp->chgSData(oldp+65,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][3U] 
                                           >> 3U))),11);
        bufp->chgSData(oldp+66,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [2U][3U] 
                                           >> 0xeU))),11);
        bufp->chgSData(oldp+67,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                 [3U][0U])),11);
        bufp->chgSData(oldp+68,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][0U] 
                                           >> 0xbU))),11);
        bufp->chgSData(oldp+69,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U][0U] 
                                              >> 0x16U)))),11);
        bufp->chgSData(oldp+70,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][1U] 
                                           >> 1U))),11);
        bufp->chgSData(oldp+71,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][1U] 
                                           >> 0xcU))),11);
        bufp->chgSData(oldp+72,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            << 9U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U][1U] 
                                              >> 0x17U)))),11);
        bufp->chgSData(oldp+73,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][2U] 
                                           >> 2U))),11);
        bufp->chgSData(oldp+74,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][2U] 
                                           >> 0xdU))),11);
        bufp->chgSData(oldp+75,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            << 8U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [3U][2U] 
                                              >> 0x18U)))),11);
        bufp->chgSData(oldp+76,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][3U] 
                                           >> 3U))),11);
        bufp->chgSData(oldp+77,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [3U][3U] 
                                           >> 0xeU))),11);
        bufp->chgSData(oldp+78,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                 [4U][0U])),11);
        bufp->chgSData(oldp+79,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][0U] 
                                           >> 0xbU))),11);
        bufp->chgSData(oldp+80,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U][0U] 
                                              >> 0x16U)))),11);
        bufp->chgSData(oldp+81,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][1U] 
                                           >> 1U))),11);
        bufp->chgSData(oldp+82,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][1U] 
                                           >> 0xcU))),11);
        bufp->chgSData(oldp+83,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            << 9U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U][1U] 
                                              >> 0x17U)))),11);
        bufp->chgSData(oldp+84,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][2U] 
                                           >> 2U))),11);
        bufp->chgSData(oldp+85,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][2U] 
                                           >> 0xdU))),11);
        bufp->chgSData(oldp+86,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            << 8U) 
                                           | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                              [4U][2U] 
                                              >> 0x18U)))),11);
        bufp->chgSData(oldp+87,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][3U] 
                                           >> 3U))),11);
        bufp->chgSData(oldp+88,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                           [4U][3U] 
                                           >> 0xeU))),11);
        bufp->chgSData(oldp+89,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        bufp->chgSData(oldp+90,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        bufp->chgSData(oldp+91,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        bufp->chgSData(oldp+92,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        bufp->chgSData(oldp+93,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        bufp->chgIData(oldp+94,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        bufp->chgSData(oldp+95,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
        bufp->chgSData(oldp+96,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
        bufp->chgSData(oldp+97,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
        bufp->chgSData(oldp+98,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
        bufp->chgIData(oldp+99,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+100,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
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
        bufp->chgSData(oldp+103,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                  [0U][0U])),11);
        bufp->chgSData(oldp+104,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+105,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+106,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+107,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+108,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+109,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+110,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+111,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+112,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+113,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+114,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                  [1U][0U])),11);
        bufp->chgSData(oldp+115,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+116,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+117,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+118,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+119,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+120,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+121,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+122,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+123,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+124,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+125,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                  [2U][0U])),11);
        bufp->chgSData(oldp+126,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+127,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+128,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+129,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+130,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+131,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+132,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+133,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+134,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+135,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+136,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                  [3U][0U])),11);
        bufp->chgSData(oldp+137,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+138,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+139,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+140,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+141,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+142,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+143,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+144,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+145,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+146,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+147,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                  [4U][0U])),11);
        bufp->chgSData(oldp+148,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+149,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+150,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+151,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+152,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+153,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+154,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+155,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+156,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+157,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+158,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        bufp->chgSData(oldp+159,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        bufp->chgSData(oldp+160,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        bufp->chgSData(oldp+161,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        bufp->chgSData(oldp+162,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        bufp->chgIData(oldp+163,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        bufp->chgSData(oldp+164,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
        bufp->chgSData(oldp+165,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
        bufp->chgSData(oldp+166,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
        bufp->chgSData(oldp+167,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
        bufp->chgIData(oldp+168,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
        bufp->chgQData(oldp+170,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
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
        bufp->chgSData(oldp+172,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                  [0U][0U])),11);
        bufp->chgSData(oldp+173,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+174,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+175,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+176,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+177,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+178,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+179,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+180,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+181,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+182,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+183,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                  [1U][0U])),11);
        bufp->chgSData(oldp+184,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+185,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+186,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+187,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+188,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+189,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+190,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+191,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+192,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+193,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+194,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                  [2U][0U])),11);
        bufp->chgSData(oldp+195,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+196,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+197,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+198,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+199,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+200,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+201,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+202,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+203,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+204,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+205,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                  [3U][0U])),11);
        bufp->chgSData(oldp+206,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+207,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+208,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+209,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+210,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+211,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+212,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+213,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+214,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+215,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+216,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                  [4U][0U])),11);
        bufp->chgSData(oldp+217,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+218,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+219,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+220,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+221,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+222,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+223,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+224,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+225,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+226,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+227,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        bufp->chgSData(oldp+228,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        bufp->chgSData(oldp+229,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        bufp->chgSData(oldp+230,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        bufp->chgSData(oldp+231,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        bufp->chgIData(oldp+232,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        bufp->chgSData(oldp+233,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
        bufp->chgSData(oldp+234,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
        bufp->chgSData(oldp+235,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
        bufp->chgSData(oldp+236,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
        bufp->chgIData(oldp+237,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
        bufp->chgQData(oldp+239,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
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
        bufp->chgSData(oldp+241,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                  [0U][0U])),11);
        bufp->chgSData(oldp+242,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+243,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+244,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+245,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+246,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+247,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+248,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+249,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+250,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+251,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+252,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                  [1U][0U])),11);
        bufp->chgSData(oldp+253,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+254,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+255,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+256,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+257,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+258,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+259,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+260,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+261,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+262,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+263,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                  [2U][0U])),11);
        bufp->chgSData(oldp+264,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+265,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+266,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+267,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+268,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+269,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+270,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+271,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+272,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+273,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+274,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                  [3U][0U])),11);
        bufp->chgSData(oldp+275,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+276,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+277,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+278,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+279,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+280,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+281,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+282,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+283,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+284,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+285,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                  [4U][0U])),11);
        bufp->chgSData(oldp+286,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+287,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+288,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+289,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+290,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+291,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+292,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+293,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+294,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+295,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+296,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        bufp->chgSData(oldp+297,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        bufp->chgSData(oldp+298,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        bufp->chgSData(oldp+299,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        bufp->chgSData(oldp+300,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        bufp->chgIData(oldp+301,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        bufp->chgSData(oldp+302,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
        bufp->chgSData(oldp+303,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
        bufp->chgSData(oldp+304,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
        bufp->chgSData(oldp+305,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
        bufp->chgIData(oldp+306,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+307,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
        bufp->chgQData(oldp+308,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
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
        bufp->chgSData(oldp+310,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                  [0U][0U])),11);
        bufp->chgSData(oldp+311,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+312,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+313,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+314,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+315,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+316,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+317,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+318,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+319,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+320,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+321,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                  [1U][0U])),11);
        bufp->chgSData(oldp+322,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+323,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+324,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+325,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+326,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+327,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+328,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+329,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+330,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+331,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+332,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                  [2U][0U])),11);
        bufp->chgSData(oldp+333,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+334,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+335,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+336,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+337,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+338,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+339,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+340,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+341,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+342,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+343,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                  [3U][0U])),11);
        bufp->chgSData(oldp+344,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+345,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+346,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+347,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+348,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+349,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+350,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+351,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+352,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+353,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+354,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                  [4U][0U])),11);
        bufp->chgSData(oldp+355,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+356,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+357,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+358,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+359,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+360,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+361,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+362,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+363,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+364,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+365,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        bufp->chgSData(oldp+366,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        bufp->chgSData(oldp+367,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        bufp->chgSData(oldp+368,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        bufp->chgSData(oldp+369,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        bufp->chgIData(oldp+370,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        bufp->chgSData(oldp+371,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
        bufp->chgSData(oldp+372,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
        bufp->chgSData(oldp+373,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
        bufp->chgSData(oldp+374,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
        bufp->chgIData(oldp+375,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+376,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
        bufp->chgQData(oldp+377,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
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
        bufp->chgSData(oldp+379,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                  [0U][0U])),11);
        bufp->chgSData(oldp+380,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+381,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+382,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+383,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+384,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+385,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+386,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+387,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+388,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+389,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+390,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                  [1U][0U])),11);
        bufp->chgSData(oldp+391,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+392,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+393,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+394,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+395,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+396,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+397,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+398,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+399,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+400,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+401,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                  [2U][0U])),11);
        bufp->chgSData(oldp+402,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+403,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+404,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+405,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+406,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+407,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+408,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+409,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+410,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+411,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+412,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                  [3U][0U])),11);
        bufp->chgSData(oldp+413,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+414,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+415,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+416,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+417,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+418,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+419,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+420,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+421,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+422,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+423,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                  [4U][0U])),11);
        bufp->chgSData(oldp+424,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+425,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+426,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+427,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+428,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+429,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+430,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+431,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+432,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+433,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+434,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
        bufp->chgSData(oldp+435,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
        bufp->chgSData(oldp+436,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
        bufp->chgSData(oldp+437,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
        bufp->chgSData(oldp+438,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
        bufp->chgIData(oldp+439,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
        bufp->chgSData(oldp+440,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi),11);
        bufp->chgSData(oldp+441,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1),11);
        bufp->chgSData(oldp+442,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2),11);
        bufp->chgSData(oldp+443,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1),11);
        bufp->chgIData(oldp+444,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+445,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgWData(oldp+446,(vlSelfRef.ascon_top__DOT__state_reg_in),320);
        bufp->chgWData(oldp+456,(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1),320);
        bufp->chgIData(oldp+466,(vlSelfRef.ascon_top__DOT__recombine_shares),30);
        bufp->chgWData(oldp+467,(vlSelfRef.ascon_top__DOT__shares_out),330);
        bufp->chgIData(oldp+478,(vlSelfRef.ascon_top__DOT__affine_layer_in[0]),30);
        bufp->chgIData(oldp+479,(vlSelfRef.ascon_top__DOT__affine_layer_in[1]),30);
        bufp->chgIData(oldp+480,(vlSelfRef.ascon_top__DOT__affine_layer_in[2]),30);
        bufp->chgIData(oldp+481,(vlSelfRef.ascon_top__DOT__affine_layer_in[3]),30);
        bufp->chgIData(oldp+482,(vlSelfRef.ascon_top__DOT__affine_layer_in[4]),30);
        bufp->chgIData(oldp+483,(vlSelfRef.ascon_top__DOT__affine_layer_in[5]),30);
        bufp->chgIData(oldp+484,(vlSelfRef.ascon_top__DOT__affine_layer_in[6]),30);
        bufp->chgIData(oldp+485,(vlSelfRef.ascon_top__DOT__affine_layer_in[7]),30);
        bufp->chgIData(oldp+486,(vlSelfRef.ascon_top__DOT__affine_layer_in[8]),30);
        bufp->chgIData(oldp+487,(vlSelfRef.ascon_top__DOT__affine_layer_in[9]),30);
        bufp->chgIData(oldp+488,(vlSelfRef.ascon_top__DOT__affine_layer_in[10]),30);
        bufp->chgIData(oldp+489,(vlSelfRef.ascon_top__DOT__affine_layer_out[0]),30);
        bufp->chgIData(oldp+490,(vlSelfRef.ascon_top__DOT__affine_layer_out[1]),30);
        bufp->chgIData(oldp+491,(vlSelfRef.ascon_top__DOT__affine_layer_out[2]),30);
        bufp->chgIData(oldp+492,(vlSelfRef.ascon_top__DOT__affine_layer_out[3]),30);
        bufp->chgIData(oldp+493,(vlSelfRef.ascon_top__DOT__affine_layer_out[4]),30);
        bufp->chgIData(oldp+494,(vlSelfRef.ascon_top__DOT__affine_layer_out[5]),30);
        bufp->chgIData(oldp+495,(vlSelfRef.ascon_top__DOT__affine_layer_out[6]),30);
        bufp->chgIData(oldp+496,(vlSelfRef.ascon_top__DOT__affine_layer_out[7]),30);
        bufp->chgIData(oldp+497,(vlSelfRef.ascon_top__DOT__affine_layer_out[8]),30);
        bufp->chgIData(oldp+498,(vlSelfRef.ascon_top__DOT__affine_layer_out[9]),30);
        bufp->chgIData(oldp+499,(vlSelfRef.ascon_top__DOT__affine_layer_out[10]),30);
        bufp->chgQData(oldp+500,(vlSelfRef.ascon_top__DOT__next_sbox_input[0]),55);
        bufp->chgQData(oldp+502,(vlSelfRef.ascon_top__DOT__next_sbox_input[1]),55);
        bufp->chgQData(oldp+504,(vlSelfRef.ascon_top__DOT__next_sbox_input[2]),55);
        bufp->chgQData(oldp+506,(vlSelfRef.ascon_top__DOT__next_sbox_input[3]),55);
        bufp->chgQData(oldp+508,(vlSelfRef.ascon_top__DOT__next_sbox_input[4]),55);
        bufp->chgQData(oldp+510,(vlSelfRef.ascon_top__DOT__next_sbox_input[5]),55);
        bufp->chgQData(oldp+512,(vlSelfRef.ascon_top__DOT__mux_sbox_out[0]),55);
        bufp->chgQData(oldp+514,(vlSelfRef.ascon_top__DOT__mux_sbox_out[1]),55);
        bufp->chgQData(oldp+516,(vlSelfRef.ascon_top__DOT__mux_sbox_out[2]),55);
        bufp->chgQData(oldp+518,(vlSelfRef.ascon_top__DOT__mux_sbox_out[3]),55);
        bufp->chgQData(oldp+520,(vlSelfRef.ascon_top__DOT__mux_sbox_out[4]),55);
        bufp->chgQData(oldp+522,(vlSelfRef.ascon_top__DOT__mux_sbox_out[5]),55);
        bufp->chgIData(oldp+524,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0]),30);
        bufp->chgIData(oldp+525,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1]),30);
        bufp->chgIData(oldp+526,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2]),30);
        bufp->chgIData(oldp+527,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[3]),30);
        bufp->chgIData(oldp+528,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[4]),30);
        bufp->chgIData(oldp+529,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[5]),30);
        bufp->chgIData(oldp+530,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[6]),30);
        bufp->chgIData(oldp+531,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[7]),30);
        bufp->chgIData(oldp+532,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[8]),30);
        bufp->chgIData(oldp+533,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[9]),30);
        bufp->chgIData(oldp+534,(vlSelfRef.ascon_top__DOT__affine_layer2nd_in[10]),30);
        bufp->chgIData(oldp+535,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0]),30);
        bufp->chgIData(oldp+536,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1]),30);
        bufp->chgIData(oldp+537,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2]),30);
        bufp->chgIData(oldp+538,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[3]),30);
        bufp->chgIData(oldp+539,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[4]),30);
        bufp->chgIData(oldp+540,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[5]),30);
        bufp->chgIData(oldp+541,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[6]),30);
        bufp->chgIData(oldp+542,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[7]),30);
        bufp->chgIData(oldp+543,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[8]),30);
        bufp->chgIData(oldp+544,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[9]),30);
        bufp->chgIData(oldp+545,(vlSelfRef.ascon_top__DOT__affine_layer2nd_out[10]),30);
        bufp->chgCData(oldp+546,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [0U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+547,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [0xaU] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+548,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [1U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+549,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [2U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+550,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [3U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+551,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [4U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+552,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [5U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+553,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [6U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+554,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [7U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+555,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [8U] 
                                              >> 0xcU)))),6);
        bufp->chgCData(oldp+556,((0x3fU & (~ (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                              [9U] 
                                              >> 0xcU)))),6);
        bufp->chgSData(oldp+557,(vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+558,(vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+559,(vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+560,(vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+561,(vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+562,(vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+563,(vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+564,(vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+565,(vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+566,(vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+567,(vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+568,(vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+569,(vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+570,(vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+571,(vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+572,(vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+573,(vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+574,(vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+575,(vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+576,(vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+577,(vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+578,(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+579,(vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+580,(vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+581,(vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+582,(vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+583,(vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+584,(vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+585,(vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),11);
        bufp->chgSData(oldp+586,(vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),11);
        bufp->chgIData(oldp+587,(vlSelfRef.ascon_top__DOT__share_creator__DOT__temp),30);
        bufp->chgQData(oldp+588,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0]),64);
        bufp->chgQData(oldp+590,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1]),64);
        bufp->chgQData(oldp+592,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2]),64);
        bufp->chgQData(oldp+594,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3]),64);
        bufp->chgQData(oldp+596,(vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+598,(vlSelfRef.ascon_top__DOT__shift_en));
        bufp->chgBit(oldp+599,(vlSelfRef.ascon_top__DOT__shift_type));
        bufp->chgBit(oldp+600,(vlSelfRef.ascon_top__DOT__last_cycle));
        bufp->chgBit(oldp+601,(vlSelfRef.ascon_top__DOT__reg_key1_load));
        bufp->chgBit(oldp+602,(vlSelfRef.ascon_top__DOT__reg_key2_load));
        bufp->chgBit(oldp+603,(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
        bufp->chgBit(oldp+604,(vlSelfRef.ascon_top__DOT__sel_masked_round));
        bufp->chgBit(oldp+605,(vlSelfRef.ascon_top__DOT__sel_xor_signal));
        bufp->chgBit(oldp+606,(vlSelfRef.ascon_top__DOT__shift_enable_sipo));
        bufp->chgBit(oldp+607,(vlSelfRef.ascon_top__DOT__last_cycle_sipo));
        bufp->chgCData(oldp+608,(vlSelfRef.ascon_top__DOT__round_counter),4);
        bufp->chgCData(oldp+609,(vlSelfRef.ascon_top__DOT__bit_counter),4);
        bufp->chgQData(oldp+610,(vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q),64);
        bufp->chgQData(oldp+612,(vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q),64);
        bufp->chgQData(oldp+614,(vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
        bufp->chgQData(oldp+616,(vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
        bufp->chgQData(oldp+618,(vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
        bufp->chgQData(oldp+620,(vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
        bufp->chgQData(oldp+622,(vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
        bufp->chgQData(oldp+624,((0xf0ULL - (0xfULL 
                                             * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter))))),64);
        __Vtemp_1[0U] = (IData)((0xf0ULL - (0xfULL 
                                            * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
        __Vtemp_1[1U] = (IData)(((0xf0ULL - (0xfULL 
                                             * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                                 >> 0x20U));
        __Vtemp_1[2U] = 0U;
        bufp->chgWData(oldp+626,(__Vtemp_1),66);
        bufp->chgCData(oldp+629,(vlSelfRef.ascon_top__DOT__rc_block[0]),6);
        bufp->chgCData(oldp+630,(vlSelfRef.ascon_top__DOT__rc_block[1]),6);
        bufp->chgCData(oldp+631,(vlSelfRef.ascon_top__DOT__rc_block[2]),6);
        bufp->chgCData(oldp+632,(vlSelfRef.ascon_top__DOT__rc_block[3]),6);
        bufp->chgCData(oldp+633,(vlSelfRef.ascon_top__DOT__rc_block[4]),6);
        bufp->chgCData(oldp+634,(vlSelfRef.ascon_top__DOT__rc_block[5]),6);
        bufp->chgCData(oldp+635,(vlSelfRef.ascon_top__DOT__rc_block[6]),6);
        bufp->chgCData(oldp+636,(vlSelfRef.ascon_top__DOT__rc_block[7]),6);
        bufp->chgCData(oldp+637,(vlSelfRef.ascon_top__DOT__rc_block[8]),6);
        bufp->chgCData(oldp+638,(vlSelfRef.ascon_top__DOT__rc_block[9]),6);
        bufp->chgCData(oldp+639,(vlSelfRef.ascon_top__DOT__rc_block[10]),6);
        bufp->chgQData(oldp+640,(((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                   ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                   : 0x8000000000000000ULL)),64);
        bufp->chgCData(oldp+642,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state),5);
        bufp->chgCData(oldp+643,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits),4);
        bufp->chgCData(oldp+644,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round),4);
        bufp->chgBit(oldp+645,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
        bufp->chgBit(oldp+646,(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+647,(vlSelfRef.ascon_top__DOT__state_reg_out),320);
        bufp->chgWData(oldp+657,(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1),320);
        bufp->chgQData(oldp+667,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))),64);
        bufp->chgQData(oldp+669,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])))),64);
        bufp->chgQData(oldp+671,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U])))),64);
        bufp->chgQData(oldp+673,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])))),64);
        bufp->chgQData(oldp+675,((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])))),64);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))));
        __Vtemp_2[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                                 >> 0x20U));
        __Vtemp_2[2U] = 0U;
        bufp->chgWData(oldp+677,(__Vtemp_2),66);
        __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))));
        __Vtemp_3[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                                 >> 0x20U));
        __Vtemp_3[2U] = 0U;
        bufp->chgWData(oldp+680,(__Vtemp_3),66);
        __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))));
        __Vtemp_4[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                                 >> 0x20U));
        __Vtemp_4[2U] = 0U;
        bufp->chgWData(oldp+683,(__Vtemp_4),66);
        __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))));
        __Vtemp_5[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                 >> 0x20U));
        __Vtemp_5[2U] = 0U;
        bufp->chgWData(oldp+686,(__Vtemp_5),66);
        bufp->chgQData(oldp+689,(vlSelfRef.ascon_top__DOT__sbox_input[0]),55);
        bufp->chgQData(oldp+691,(vlSelfRef.ascon_top__DOT__sbox_input[1]),55);
        bufp->chgQData(oldp+693,(vlSelfRef.ascon_top__DOT__sbox_input[2]),55);
        bufp->chgQData(oldp+695,(vlSelfRef.ascon_top__DOT__sbox_input[3]),55);
        bufp->chgQData(oldp+697,(vlSelfRef.ascon_top__DOT__sbox_input[4]),55);
        bufp->chgQData(oldp+699,(vlSelfRef.ascon_top__DOT__sbox_input[5]),55);
        bufp->chgQData(oldp+701,(vlSelfRef.ascon_top__DOT__sbox_output[0]),55);
        bufp->chgQData(oldp+703,(vlSelfRef.ascon_top__DOT__sbox_output[1]),55);
        bufp->chgQData(oldp+705,(vlSelfRef.ascon_top__DOT__sbox_output[2]),55);
        bufp->chgQData(oldp+707,(vlSelfRef.ascon_top__DOT__sbox_output[3]),55);
        bufp->chgQData(oldp+709,(vlSelfRef.ascon_top__DOT__sbox_output[4]),55);
        bufp->chgQData(oldp+711,(vlSelfRef.ascon_top__DOT__sbox_output[5]),55);
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
        bufp->chgWData(oldp+713,(__Vtemp_7),320);
        bufp->chgQData(oldp+723,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[0]),64);
        bufp->chgQData(oldp+725,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[1]),64);
        bufp->chgQData(oldp+727,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[2]),64);
        bufp->chgQData(oldp+729,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[3]),64);
        bufp->chgQData(oldp+731,(vlSelfRef.ascon_top__DOT__linear_diffusion_debug[4]),64);
        bufp->chgQData(oldp+733,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [0U]),55);
        bufp->chgQData(oldp+735,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
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
        bufp->chgSData(oldp+737,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),11);
        bufp->chgSData(oldp+738,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),11);
        bufp->chgSData(oldp+739,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),11);
        bufp->chgSData(oldp+740,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),11);
        bufp->chgSData(oldp+741,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),11);
        bufp->chgSData(oldp+742,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                  [0U][0U])),11);
        bufp->chgSData(oldp+743,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+744,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+745,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+746,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+747,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+748,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+749,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+750,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+751,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+752,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+753,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                  [1U][0U])),11);
        bufp->chgSData(oldp+754,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+755,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+756,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+757,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+758,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+759,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+760,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+761,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+762,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+763,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+764,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                  [2U][0U])),11);
        bufp->chgSData(oldp+765,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+766,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+767,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+768,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+769,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+770,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+771,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+772,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+773,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+774,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+775,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                  [3U][0U])),11);
        bufp->chgSData(oldp+776,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+777,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+778,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+779,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+780,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+781,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+782,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+783,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+784,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+785,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+786,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                  [4U][0U])),11);
        bufp->chgSData(oldp+787,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+788,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+789,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+790,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+791,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+792,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+793,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+794,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+795,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+796,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+797,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),11);
        bufp->chgSData(oldp+798,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),11);
        bufp->chgSData(oldp+799,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),11);
        bufp->chgSData(oldp+800,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),11);
        bufp->chgSData(oldp+801,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),11);
        bufp->chgIData(oldp+802,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+803,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        bufp->chgSData(oldp+804,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
        bufp->chgIData(oldp+805,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
        bufp->chgIData(oldp+806,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+807,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [1U]),55);
        bufp->chgQData(oldp+809,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
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
        bufp->chgSData(oldp+811,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0]),11);
        bufp->chgSData(oldp+812,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1]),11);
        bufp->chgSData(oldp+813,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2]),11);
        bufp->chgSData(oldp+814,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3]),11);
        bufp->chgSData(oldp+815,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4]),11);
        bufp->chgSData(oldp+816,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                  [0U][0U])),11);
        bufp->chgSData(oldp+817,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+818,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+819,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+820,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+821,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+822,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+823,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+824,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+825,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+826,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+827,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                  [1U][0U])),11);
        bufp->chgSData(oldp+828,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+829,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+830,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+831,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+832,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+833,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+834,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+835,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+836,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+837,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+838,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                  [2U][0U])),11);
        bufp->chgSData(oldp+839,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+840,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+841,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+842,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+843,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+844,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+845,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+846,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+847,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+848,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+849,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                  [3U][0U])),11);
        bufp->chgSData(oldp+850,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+851,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+852,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+853,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+854,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+855,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+856,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+857,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+858,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+859,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+860,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                  [4U][0U])),11);
        bufp->chgSData(oldp+861,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+862,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+863,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+864,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+865,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+866,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+867,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+868,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+869,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+870,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+871,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0]),11);
        bufp->chgSData(oldp+872,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1]),11);
        bufp->chgSData(oldp+873,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2]),11);
        bufp->chgSData(oldp+874,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3]),11);
        bufp->chgSData(oldp+875,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4]),11);
        bufp->chgIData(oldp+876,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+877,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        bufp->chgSData(oldp+878,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
        bufp->chgIData(oldp+879,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
        bufp->chgIData(oldp+880,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+881,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [2U]),55);
        bufp->chgQData(oldp+883,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
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
        bufp->chgSData(oldp+885,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0]),11);
        bufp->chgSData(oldp+886,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1]),11);
        bufp->chgSData(oldp+887,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2]),11);
        bufp->chgSData(oldp+888,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3]),11);
        bufp->chgSData(oldp+889,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4]),11);
        bufp->chgSData(oldp+890,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                  [0U][0U])),11);
        bufp->chgSData(oldp+891,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+892,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+893,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+894,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+895,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+896,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+897,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+898,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+899,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+900,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+901,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                  [1U][0U])),11);
        bufp->chgSData(oldp+902,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+903,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+904,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+905,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+906,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+907,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+908,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+909,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+910,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+911,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+912,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                  [2U][0U])),11);
        bufp->chgSData(oldp+913,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+914,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+915,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+916,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+917,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+918,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+919,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+920,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+921,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+922,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+923,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                  [3U][0U])),11);
        bufp->chgSData(oldp+924,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+925,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+926,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+927,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+928,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+929,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+930,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+931,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+932,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+933,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+934,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                  [4U][0U])),11);
        bufp->chgSData(oldp+935,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+936,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+937,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+938,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+939,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+940,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+941,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+942,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                               [4U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+943,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+944,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                            [4U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+945,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0]),11);
        bufp->chgSData(oldp+946,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1]),11);
        bufp->chgSData(oldp+947,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2]),11);
        bufp->chgSData(oldp+948,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3]),11);
        bufp->chgSData(oldp+949,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4]),11);
        bufp->chgIData(oldp+950,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+951,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        bufp->chgSData(oldp+952,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
        bufp->chgIData(oldp+953,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
        bufp->chgIData(oldp+954,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+955,(vlSelfRef.ascon_top__DOT__sbox_input
                                 [3U]),55);
        bufp->chgQData(oldp+957,((((QData)((IData)(
                                                   ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
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
        bufp->chgSData(oldp+959,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0]),11);
        bufp->chgSData(oldp+960,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1]),11);
        bufp->chgSData(oldp+961,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2]),11);
        bufp->chgSData(oldp+962,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3]),11);
        bufp->chgSData(oldp+963,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4]),11);
        bufp->chgSData(oldp+964,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                  [0U][0U])),11);
        bufp->chgSData(oldp+965,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+966,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+967,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+968,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+969,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+970,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+971,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+972,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [0U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+973,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+974,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [0U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+975,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                  [1U][0U])),11);
        bufp->chgSData(oldp+976,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+977,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+978,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+979,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+980,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+981,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+982,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+983,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [1U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+984,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+985,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [1U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+986,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                  [2U][0U])),11);
        bufp->chgSData(oldp+987,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+988,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+989,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 1U))),11);
        bufp->chgSData(oldp+990,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][1U] 
                                            >> 0xcU))),11);
        bufp->chgSData(oldp+991,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             << 9U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][1U] 
                                               >> 0x17U)))),11);
        bufp->chgSData(oldp+992,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 2U))),11);
        bufp->chgSData(oldp+993,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][2U] 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+994,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [2U][2U] 
                                               >> 0x18U)))),11);
        bufp->chgSData(oldp+995,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 3U))),11);
        bufp->chgSData(oldp+996,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [2U][3U] 
                                            >> 0xeU))),11);
        bufp->chgSData(oldp+997,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                  [3U][0U])),11);
        bufp->chgSData(oldp+998,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                            [3U][0U] 
                                            >> 0xbU))),11);
        bufp->chgSData(oldp+999,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                               [3U][0U] 
                                               >> 0x16U)))),11);
        bufp->chgSData(oldp+1000,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1001,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1002,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1003,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1004,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1005,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1006,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1007,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1008,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                   [4U][0U])),11);
        bufp->chgSData(oldp+1009,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1010,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1011,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1012,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1013,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1014,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1015,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1016,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1017,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1018,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1019,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0]),11);
        bufp->chgSData(oldp+1020,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1]),11);
        bufp->chgSData(oldp+1021,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[2]),11);
        bufp->chgSData(oldp+1022,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[3]),11);
        bufp->chgSData(oldp+1023,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[4]),11);
        bufp->chgIData(oldp+1024,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+1025,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        bufp->chgSData(oldp+1026,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
        bufp->chgIData(oldp+1027,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
        bufp->chgIData(oldp+1028,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+1029,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [4U]),55);
        bufp->chgQData(oldp+1031,((((QData)((IData)(
                                                    ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
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
        bufp->chgSData(oldp+1033,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0]),11);
        bufp->chgSData(oldp+1034,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1]),11);
        bufp->chgSData(oldp+1035,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2]),11);
        bufp->chgSData(oldp+1036,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3]),11);
        bufp->chgSData(oldp+1037,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4]),11);
        bufp->chgSData(oldp+1038,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                   [0U][0U])),11);
        bufp->chgSData(oldp+1039,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1040,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1041,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1042,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1043,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1044,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1045,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1046,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1047,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1048,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1049,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                   [1U][0U])),11);
        bufp->chgSData(oldp+1050,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1051,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1052,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1053,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1054,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1055,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1056,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1057,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1058,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1059,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1060,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                   [2U][0U])),11);
        bufp->chgSData(oldp+1061,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1062,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1063,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1064,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1065,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1066,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1067,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1068,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1069,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1070,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1071,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                   [3U][0U])),11);
        bufp->chgSData(oldp+1072,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1073,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1074,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1075,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1076,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1077,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1078,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1079,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1080,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1081,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1082,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                   [4U][0U])),11);
        bufp->chgSData(oldp+1083,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1084,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1085,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1086,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1087,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1088,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1089,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1090,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1091,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1092,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1093,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[0]),11);
        bufp->chgSData(oldp+1094,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[1]),11);
        bufp->chgSData(oldp+1095,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[2]),11);
        bufp->chgSData(oldp+1096,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[3]),11);
        bufp->chgSData(oldp+1097,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[4]),11);
        bufp->chgIData(oldp+1098,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+1099,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        bufp->chgSData(oldp+1100,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
        bufp->chgIData(oldp+1101,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
        bufp->chgIData(oldp+1102,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+1103,(vlSelfRef.ascon_top__DOT__sbox_input
                                  [5U]),55);
        bufp->chgQData(oldp+1105,((((QData)((IData)(
                                                    ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
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
        bufp->chgSData(oldp+1107,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0]),11);
        bufp->chgSData(oldp+1108,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1]),11);
        bufp->chgSData(oldp+1109,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2]),11);
        bufp->chgSData(oldp+1110,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3]),11);
        bufp->chgSData(oldp+1111,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4]),11);
        bufp->chgSData(oldp+1112,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                   [0U][0U])),11);
        bufp->chgSData(oldp+1113,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1114,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1115,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1116,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1117,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1118,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1119,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1120,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1121,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1122,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [0U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1123,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                   [1U][0U])),11);
        bufp->chgSData(oldp+1124,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1125,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1126,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1127,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1128,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1129,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1130,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1131,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1132,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1133,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [1U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1134,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                   [2U][0U])),11);
        bufp->chgSData(oldp+1135,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1136,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1137,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1138,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1139,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1140,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1141,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1142,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1143,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1144,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [2U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1145,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                   [3U][0U])),11);
        bufp->chgSData(oldp+1146,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1147,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1148,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1149,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1150,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1151,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1152,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1153,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1154,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1155,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [3U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1156,((0x7ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                   [4U][0U])),11);
        bufp->chgSData(oldp+1157,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][0U] 
                                             >> 0xbU))),11);
        bufp->chgSData(oldp+1158,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][0U] 
                                                >> 0x16U)))),11);
        bufp->chgSData(oldp+1159,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1160,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][1U] 
                                             >> 0xcU))),11);
        bufp->chgSData(oldp+1161,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][2U] 
                                              << 9U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][1U] 
                                                >> 0x17U)))),11);
        bufp->chgSData(oldp+1162,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1163,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][2U] 
                                             >> 0xdU))),11);
        bufp->chgSData(oldp+1164,((0x7ffU & ((vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U][3U] 
                                              << 8U) 
                                             | (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U][2U] 
                                                >> 0x18U)))),11);
        bufp->chgSData(oldp+1165,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             >> 3U))),11);
        bufp->chgSData(oldp+1166,((0x7ffU & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                             [4U][3U] 
                                             >> 0xeU))),11);
        bufp->chgSData(oldp+1167,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[0]),11);
        bufp->chgSData(oldp+1168,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[1]),11);
        bufp->chgSData(oldp+1169,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[2]),11);
        bufp->chgSData(oldp+1170,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[3]),11);
        bufp->chgSData(oldp+1171,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[4]),11);
        bufp->chgIData(oldp+1172,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+1173,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        bufp->chgSData(oldp+1174,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp),11);
        bufp->chgIData(oldp+1175,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k),32);
        bufp->chgIData(oldp+1176,(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i),32);
        bufp->chgCData(oldp+1177,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])),6);
        bufp->chgCData(oldp+1178,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])),6);
        bufp->chgCData(oldp+1179,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])),6);
        bufp->chgCData(oldp+1180,((0x3fU & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])),6);
        bufp->chgQData(oldp+1181,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[0]),64);
        bufp->chgQData(oldp+1183,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[1]),64);
        bufp->chgQData(oldp+1185,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[2]),64);
        bufp->chgQData(oldp+1187,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[3]),64);
        bufp->chgQData(oldp+1189,(vlSelfRef.ascon_top__DOT__state_reg__DOT__state[4]),64);
        bufp->chgIData(oldp+1191,(vlSelfRef.ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1192,(vlSelfRef.ascon_top__DOT__unnamedblk1__DOT__p),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        __Vtemp_8[0U] = (IData)((((QData)((IData)((
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
                                                                  | (IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit)))))));
        __Vtemp_8[1U] = ((0xfffffff0U & ((((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_33) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_30) 
                                             << 0x16U)) 
                                         | (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_27) 
                                             << 0x10U) 
                                            | (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_24) 
                                                << 0xaU) 
                                               | ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_21) 
                                                  << 4U))))) 
                         | (IData)(((((QData)((IData)(
                                                      (((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_18) 
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
                                           >> 4U) | 
                                          ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_30) 
                                           >> 0xaU))) 
                                 | ((0xfU & ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_27) 
                                             >> 0x10U)) 
                                    | ((0xfU & ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_24) 
                                                >> 0x16U)) 
                                       | ((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_21) 
                                          >> 0x1cU)))));
        bufp->chgWData(oldp+1193,(__Vtemp_8),66);
        bufp->chgIData(oldp+1196,(vlSelfRef.ascon_top__DOT__shares_in),30);
        bufp->chgQData(oldp+1197,(vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
        bufp->chgQData(oldp+1199,(vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
        bufp->chgCData(oldp+1201,(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit),6);
        bufp->chgQData(oldp+1202,(vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
        bufp->chgQData(oldp+1204,(vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
        bufp->chgQData(oldp+1206,(vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
    }
    bufp->chgBit(oldp+1208,(vlSelfRef.clk));
    bufp->chgBit(oldp+1209,(vlSelfRef.reset_n));
    bufp->chgBit(oldp+1210,(vlSelfRef.start));
    bufp->chgQData(oldp+1211,(vlSelfRef.key1),64);
    bufp->chgQData(oldp+1213,(vlSelfRef.key2),64);
    bufp->chgBit(oldp+1215,(vlSelfRef.key_valid));
    bufp->chgQData(oldp+1216,(vlSelfRef.nonce1),64);
    bufp->chgQData(oldp+1218,(vlSelfRef.nonce2),64);
    bufp->chgQData(oldp+1220,(vlSelfRef.initialVector),64);
    bufp->chgWData(oldp+1222,(vlSelfRef.data_in),128);
    bufp->chgBit(oldp+1226,(vlSelfRef.valid_data_in));
    bufp->chgBit(oldp+1227,(vlSelfRef.last_block));
    bufp->chgCData(oldp+1228,(vlSelfRef.valid_bytes),4);
    bufp->chgBit(oldp+1229,(vlSelfRef.EOT));
    bufp->chgWData(oldp+1230,(vlSelfRef.random_masks),300);
    bufp->chgQData(oldp+1240,(vlSelfRef.random_masks_sbox),55);
    bufp->chgBit(oldp+1242,(vlSelfRef.ciphertext_valid));
    bufp->chgWData(oldp+1243,(vlSelfRef.ciphertext),128);
    bufp->chgBit(oldp+1247,(vlSelfRef.done));
    bufp->chgBit(oldp+1248,(vlSelfRef.ready_tag));
    bufp->chgQData(oldp+1249,(vlSelfRef.tag1),64);
    bufp->chgQData(oldp+1251,(vlSelfRef.tag2),64);
    bufp->chgBit(oldp+1253,(vlSelfRef.ready_for_data));
    bufp->chgBit(oldp+1254,(vlSelfRef.debug_extra_padding_ff));
    bufp->chgCData(oldp+1255,(vlSelfRef.debug_bitcounter),4);
    bufp->chgCData(oldp+1256,(vlSelfRef.debug_roundcounter),4);
    bufp->chgCData(oldp+1257,(vlSelfRef.debug_state),5);
    bufp->chgQData(oldp+1258,(vlSelfRef.debug_state_0),64);
    bufp->chgQData(oldp+1260,(vlSelfRef.debug_state_1),64);
    bufp->chgQData(oldp+1262,(vlSelfRef.debug_state_2),64);
    bufp->chgQData(oldp+1264,(vlSelfRef.debug_state_3),64);
    bufp->chgQData(oldp+1266,(vlSelfRef.debug_state_4),64);
    bufp->chgQData(oldp+1268,(vlSelfRef.debug_round_state_0),64);
    bufp->chgQData(oldp+1270,(vlSelfRef.debug_round_state_1),64);
    bufp->chgQData(oldp+1272,(vlSelfRef.debug_round_state_2),64);
    bufp->chgQData(oldp+1274,(vlSelfRef.debug_round_state_3),64);
    bufp->chgQData(oldp+1276,(vlSelfRef.debug_round_state_4),64);
    bufp->chgQData(oldp+1278,(vlSelfRef.debug_linear_diffusion_state3),64);
    bufp->chgQData(oldp+1280,(vlSelfRef.debug_linear_diffusion_state4),64);
    bufp->chgQData(oldp+1282,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[0]),64);
    bufp->chgQData(oldp+1284,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[1]),64);
    bufp->chgQData(oldp+1286,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[2]),64);
    bufp->chgQData(oldp+1288,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[3]),64);
    bufp->chgQData(oldp+1290,(vlSelfRef.ascon_top__DOT__state_reg_in_absorb[4]),64);
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
    bufp->chgWData(oldp+1292,(__Vtemp_12),320);
    bufp->chgQData(oldp+1302,(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                                   [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                            ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                            : 0x8000000000000000ULL))
                                : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                               [4U])),64);
    bufp->chgQData(oldp+1304,(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
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
    bufp->chgWData(oldp+1306,(__Vtemp_14),320);
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
