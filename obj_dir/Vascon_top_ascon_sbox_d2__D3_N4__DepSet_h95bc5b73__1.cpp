// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top_ascon_sbox_d2__D3_N4.h"

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = 0;
    CData/*0:0*/ __Vlvbound_h2aa06c0c__0;
    __Vlvbound_h2aa06c0c__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__3__Vfuncout;
    __Vfunc_xor_tree__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_xor_tree__3__in;
    __Vfunc_xor_tree__3__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__3__N;
    __Vfunc_xor_tree__3__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__3__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__3__level;
    __Vfunc_xor_tree__3__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__3__num;
    __Vfunc_xor_tree__3__num = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    vlSelfRef.__PVT__x[4U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [3U] >> 0x10U));
    vlSelfRef.__PVT__x[3U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [3U] >> 0xcU));
    vlSelfRef.__PVT__x[2U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [3U] >> 8U));
    vlSelfRef.__PVT__x[1U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [3U] >> 4U));
    vlSelfRef.__PVT__x[0U] = (0xfU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [3U]);
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_h5a65583a__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[0U]);
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xeU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 4U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xdU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 8U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xbU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 0xcU));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((7U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[1U]);
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xeU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 4U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xdU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 8U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xbU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 0xcU));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((7U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[2U]);
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xeU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 4U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xdU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 8U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xbU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 0xcU));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((7U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[3U]);
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xeU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 4U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xdU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 8U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xbU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 0xcU));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((7U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[4U]);
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xeU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 4U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xdU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 8U));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xbU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 0xcU));
    __Vfunc_xor_tree__3__N = 4U;
    __Vfunc_xor_tree__3__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__3__level = 0U;
    __Vfunc_xor_tree__3__num = 4U;
    __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__3__unnamedblk8__DOT__i, __Vfunc_xor_tree__3__N)) {
        vlSelfRef.__Vfunc_xor_tree__3__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__3__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__3__in) 
                                      >> (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__3__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__3__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__3__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__3__num)) {
        vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__3__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__3__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__3__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__3__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__3__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__3__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__3__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__3__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__3__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__3__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__3__num = VL_DIVS_III(32, __Vfunc_xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_xor_tree__3__level = ((IData)(1U) + __Vfunc_xor_tree__3__level);
    }
    __Vfunc_xor_tree__3__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__3__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__3__stage
                                         [(3U & __Vfunc_xor_tree__3__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__3__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((7U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = 0;
    CData/*0:0*/ __Vlvbound_h2aa06c0c__0;
    __Vlvbound_h2aa06c0c__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__4__Vfuncout;
    __Vfunc_xor_tree__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_xor_tree__4__in;
    __Vfunc_xor_tree__4__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__4__N;
    __Vfunc_xor_tree__4__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__4__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__4__level;
    __Vfunc_xor_tree__4__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__4__num;
    __Vfunc_xor_tree__4__num = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    vlSelfRef.__PVT__x[4U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [4U] >> 0x10U));
    vlSelfRef.__PVT__x[3U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [4U] >> 0xcU));
    vlSelfRef.__PVT__x[2U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [4U] >> 8U));
    vlSelfRef.__PVT__x[1U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [4U] >> 4U));
    vlSelfRef.__PVT__x[0U] = (0xfU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [4U]);
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_h5a65583a__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[0U]);
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xeU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 4U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xdU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 8U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xbU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 0xcU));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((7U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[1U]);
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xeU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 4U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xdU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 8U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xbU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 0xcU));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((7U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[2U]);
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xeU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 4U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xdU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 8U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xbU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 0xcU));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((7U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[3U]);
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xeU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 4U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xdU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 8U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xbU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 0xcU));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((7U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[4U]);
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xeU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 4U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xdU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 8U));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xbU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 0xcU));
    __Vfunc_xor_tree__4__N = 4U;
    __Vfunc_xor_tree__4__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__4__level = 0U;
    __Vfunc_xor_tree__4__num = 4U;
    __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__4__unnamedblk8__DOT__i, __Vfunc_xor_tree__4__N)) {
        vlSelfRef.__Vfunc_xor_tree__4__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__4__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__4__in) 
                                      >> (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__4__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__4__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__4__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__4__num)) {
        vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__4__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__4__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__4__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__4__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__4__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__4__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__4__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__4__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__4__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__4__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__4__num = VL_DIVS_III(32, __Vfunc_xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_xor_tree__4__level = ((IData)(1U) + __Vfunc_xor_tree__4__level);
    }
    __Vfunc_xor_tree__4__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__4__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__4__stage
                                         [(3U & __Vfunc_xor_tree__4__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__4__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((7U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = 0;
    CData/*0:0*/ __Vlvbound_h2aa06c0c__0;
    __Vlvbound_h2aa06c0c__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__5__Vfuncout;
    __Vfunc_xor_tree__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_xor_tree__5__in;
    __Vfunc_xor_tree__5__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__5__N;
    __Vfunc_xor_tree__5__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__5__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__5__level;
    __Vfunc_xor_tree__5__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__5__num;
    __Vfunc_xor_tree__5__num = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    vlSelfRef.__PVT__x[4U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [5U] >> 0x10U));
    vlSelfRef.__PVT__x[3U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [5U] >> 0xcU));
    vlSelfRef.__PVT__x[2U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [5U] >> 8U));
    vlSelfRef.__PVT__x[1U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [5U] >> 4U));
    vlSelfRef.__PVT__x[0U] = (0xfU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [5U]);
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_h5a65583a__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[0U]);
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xeU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 4U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xdU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 8U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xbU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 0xcU));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((7U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[1U]);
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xeU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 4U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xdU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 8U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xbU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 0xcU));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((7U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[2U]);
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xeU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 4U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xdU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 8U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xbU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 0xcU));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((7U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[3U]);
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xeU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 4U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xdU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 8U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xbU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 0xcU));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((7U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[4U]);
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xeU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 4U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xdU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 8U));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xbU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 0xcU));
    __Vfunc_xor_tree__5__N = 4U;
    __Vfunc_xor_tree__5__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__5__level = 0U;
    __Vfunc_xor_tree__5__num = 4U;
    __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__5__unnamedblk8__DOT__i, __Vfunc_xor_tree__5__N)) {
        vlSelfRef.__Vfunc_xor_tree__5__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__5__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__5__in) 
                                      >> (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__5__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__5__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__5__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__5__num)) {
        vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__5__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__5__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__5__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__5__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__5__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__5__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__5__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__5__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__5__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__5__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__5__num = VL_DIVS_III(32, __Vfunc_xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_xor_tree__5__level = ((IData)(1U) + __Vfunc_xor_tree__5__level);
    }
    __Vfunc_xor_tree__5__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__5__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__5__stage
                                         [(3U & __Vfunc_xor_tree__5__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__5__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((7U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = 0;
    CData/*0:0*/ __Vlvbound_h2aa06c0c__0;
    __Vlvbound_h2aa06c0c__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__6__Vfuncout;
    __Vfunc_xor_tree__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_xor_tree__6__in;
    __Vfunc_xor_tree__6__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__6__N;
    __Vfunc_xor_tree__6__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__6__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__6__level;
    __Vfunc_xor_tree__6__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__6__num;
    __Vfunc_xor_tree__6__num = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*15:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    vlSelfRef.__PVT__x[4U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [6U] >> 0x10U));
    vlSelfRef.__PVT__x[3U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [6U] >> 0xcU));
    vlSelfRef.__PVT__x[2U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [6U] >> 8U));
    vlSelfRef.__PVT__x[1U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [6U] >> 4U));
    vlSelfRef.__PVT__x[0U] = (0xfU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [6U]);
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_h5a65583a__0;
    __Vlvbound_h5a65583a__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_h5a65583a__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[0U]);
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xeU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 4U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xdU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 8U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xbU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 0xcU));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((7U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[1U]);
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xeU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 4U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xdU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 8U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xbU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 0xcU));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((7U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[2U]);
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xeU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 4U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xdU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 8U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xbU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 0xcU));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((7U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[3U]);
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xeU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 4U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xdU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 8U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xbU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 0xcU));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((7U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[4U]);
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xeU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 4U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xdU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 8U));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xbU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 0xcU));
    __Vfunc_xor_tree__6__N = 4U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 4U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vfunc_xor_tree__6__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__6__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__6__in) 
                                      >> (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__6__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__6__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__6__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__6__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__6__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__6__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__6__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((7U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
}
