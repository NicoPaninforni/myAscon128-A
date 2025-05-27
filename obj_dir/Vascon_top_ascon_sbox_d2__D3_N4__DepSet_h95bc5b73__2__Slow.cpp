// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top_ascon_sbox_d2__D3_N4.h"

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2__D3_N4___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_hfd0839bb__0;
    __Vlvbound_hfd0839bb__0 = 0;
    CData/*0:0*/ __Vlvbound_h9b4e5e0f__0;
    __Vlvbound_h9b4e5e0f__0 = 0;
    CData/*0:0*/ __Vlvbound_hfd0839bb__1;
    __Vlvbound_hfd0839bb__1 = 0;
    CData/*0:0*/ __Vlvbound_h0c7bf815__0;
    __Vlvbound_h0c7bf815__0 = 0;
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
    // Body
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
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 5U));
    vlSelfRef.__PVT__y_noMask[0U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[0U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[0U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 5U));
    vlSelfRef.__PVT__y_noMask[1U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[1U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[1U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 5U));
    vlSelfRef.__PVT__y_noMask[2U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[2U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[2U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 5U));
    vlSelfRef.__PVT__y_noMask[3U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[3U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[3U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 5U));
    vlSelfRef.__PVT__y_noMask[4U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[4U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[4U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
}

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2__D3_N4___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_hfd0839bb__0;
    __Vlvbound_hfd0839bb__0 = 0;
    CData/*0:0*/ __Vlvbound_h9b4e5e0f__0;
    __Vlvbound_h9b4e5e0f__0 = 0;
    CData/*0:0*/ __Vlvbound_hfd0839bb__1;
    __Vlvbound_hfd0839bb__1 = 0;
    CData/*0:0*/ __Vlvbound_h0c7bf815__0;
    __Vlvbound_h0c7bf815__0 = 0;
    CData/*0:0*/ __Vlvbound_h2aa06c0c__0;
    __Vlvbound_h2aa06c0c__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__7__Vfuncout;
    __Vfunc_xor_tree__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_xor_tree__7__in;
    __Vfunc_xor_tree__7__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__7__N;
    __Vfunc_xor_tree__7__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__7__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__7__level;
    __Vfunc_xor_tree__7__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__7__num;
    __Vfunc_xor_tree__7__num = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[0U]);
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xeU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 4U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xdU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 8U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xbU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 0xcU));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((7U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[1U]);
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xeU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 4U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xdU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 8U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xbU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 0xcU));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((7U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[2U]);
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xeU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 4U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xdU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 8U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xbU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 0xcU));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((7U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[3U]);
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xeU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 4U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xdU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 8U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xbU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 0xcU));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((7U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[4U]);
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xeU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 4U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xdU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 8U));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xbU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 0xcU));
    __Vfunc_xor_tree__7__N = 4U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 4U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vfunc_xor_tree__7__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__7__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__7__in) 
                                      >> (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__7__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__7__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__7__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__7__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__7__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__7__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__7__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((7U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__x[4U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [7U] >> 0x10U));
    vlSelfRef.__PVT__x[3U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [7U] >> 0xcU));
    vlSelfRef.__PVT__x[2U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [7U] >> 8U));
    vlSelfRef.__PVT__x[1U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [7U] >> 4U));
    vlSelfRef.__PVT__x[0U] = (0xfU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [7U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 5U));
    vlSelfRef.__PVT__y_noMask[0U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[0U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[0U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 5U));
    vlSelfRef.__PVT__y_noMask[1U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[1U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[1U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 5U));
    vlSelfRef.__PVT__y_noMask[2U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[2U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[2U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 5U));
    vlSelfRef.__PVT__y_noMask[3U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[3U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[3U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 5U));
    vlSelfRef.__PVT__y_noMask[4U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[4U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[4U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
}

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2__D3_N4___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D3_N4___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_hfd0839bb__0;
    __Vlvbound_hfd0839bb__0 = 0;
    CData/*0:0*/ __Vlvbound_h9b4e5e0f__0;
    __Vlvbound_h9b4e5e0f__0 = 0;
    CData/*0:0*/ __Vlvbound_hfd0839bb__1;
    __Vlvbound_hfd0839bb__1 = 0;
    CData/*0:0*/ __Vlvbound_h0c7bf815__0;
    __Vlvbound_h0c7bf815__0 = 0;
    CData/*0:0*/ __Vlvbound_h2aa06c0c__0;
    __Vlvbound_h2aa06c0c__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__8__Vfuncout;
    __Vfunc_xor_tree__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_xor_tree__8__in;
    __Vfunc_xor_tree__8__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__N;
    __Vfunc_xor_tree__8__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__level;
    __Vfunc_xor_tree__8__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__num;
    __Vfunc_xor_tree__8__num = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[0U]);
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xeU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 4U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xdU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 8U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xbU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[0U] 
                   >> 0xcU));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((7U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[1U]);
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xeU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 4U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xdU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 8U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xbU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[1U] 
                   >> 0xcU));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((7U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[2U]);
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xeU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 4U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xdU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 8U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xbU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[2U] 
                   >> 0xcU));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((7U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[3U]);
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xeU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 4U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xdU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 8U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xbU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[3U] 
                   >> 0xcU));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((7U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & vlSelfRef.__PVT__and_result_reg[4U]);
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xeU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h2aa06c0c__0));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 4U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xdU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 8U));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xbU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = (0xfU & (vlSelfRef.__PVT__and_result_reg[4U] 
                   >> 0xcU));
    __Vfunc_xor_tree__8__N = 4U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 4U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vfunc_xor_tree__8__stage[0U] = 
            (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
              & vlSelfRef.__Vfunc_xor_tree__8__stage
              [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_xor_tree__8__in) 
                                      >> (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                               << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h70e7ebe7__0 = (1U 
                                                 & ((((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                    ^ 
                                                    (((2U 
                                                       >= 
                                                       (3U 
                                                        & __Vfunc_xor_tree__8__level))
                                                       ? 
                                                      vlSelfRef.__Vfunc_xor_tree__8__stage
                                                      [
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level)]
                                                       : 0U) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_h70e7ebe7__0) 
                                  << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hece044c0__0 = (1U 
                                                 & (((2U 
                                                      >= 
                                                      (3U 
                                                       & __Vfunc_xor_tree__8__level))
                                                      ? 
                                                     vlSelfRef.__Vfunc_xor_tree__8__stage
                                                     [
                                                     (3U 
                                                      & __Vfunc_xor_tree__8__level)]
                                                      : 0U) 
                                                    >> 
                                                    (3U 
                                                     & (__Vfunc_xor_tree__8__num 
                                                        - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & ((IData)(1U) 
                                         + __Vfunc_xor_tree__8__level)))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelfRef.__Vlvbound_hece044c0__0) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound_h2aa06c0c__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((7U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h2aa06c0c__0) 
                                        << 3U));
    vlSelfRef.__PVT__x[4U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [8U] >> 0x10U));
    vlSelfRef.__PVT__x[3U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [8U] >> 0xcU));
    vlSelfRef.__PVT__x[2U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [8U] >> 8U));
    vlSelfRef.__PVT__x[1U] = (0xfU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                      [8U] >> 4U));
    vlSelfRef.__PVT__x[0U] = (0xfU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [8U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 5U));
    vlSelfRef.__PVT__y_noMask[0U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[0U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[0U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 5U));
    vlSelfRef.__PVT__y_noMask[1U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[1U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[1U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 5U));
    vlSelfRef.__PVT__y_noMask[2U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[2U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[2U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 5U));
    vlSelfRef.__PVT__y_noMask[3U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[3U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[3U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    if (vlSymsp->TOP.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_hfd0839bb__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffeU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_hfd0839bb__0));
    __Vlvbound_h9b4e5e0f__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((0xeU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h9b4e5e0f__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 1U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffefU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 4U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 1U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfffbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 2U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfeffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 8U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 2U));
    __Vlvbound_hfd0839bb__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 3U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfff7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 3U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xefffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xcU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffdfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 5U));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 5U));
    vlSelfRef.__PVT__y_noMask[4U] = ((0xdU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 3U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffbfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 6U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfdffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 9U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 4U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xff7fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 7U));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xdfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xdU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xfbffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xaU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 0xaU));
    vlSelfRef.__PVT__y_noMask[4U] = ((0xbU & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                 >> 5U));
    __Vlvbound_hfd0839bb__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 3U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xf7ffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__1) 
                                               << 0xbU));
    __Vlvbound_h0c7bf815__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 3U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xbfffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h0c7bf815__0) 
                                               << 0xeU));
    __Vlvbound_hfd0839bb__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 3U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x7fffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfd0839bb__0) 
                                               << 0xfU));
    __Vlvbound_h9b4e5e0f__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 0xfU));
    vlSelfRef.__PVT__y_noMask[4U] = ((7U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h9b4e5e0f__0) 
                                               << 3U));
}
