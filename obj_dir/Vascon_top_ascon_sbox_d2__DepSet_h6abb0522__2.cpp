// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top_ascon_sbox_d2.h"

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__8__Vfuncout;
    __Vfunc_xor_tree__8__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__8__in;
    __Vfunc_xor_tree__8__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__N;
    __Vfunc_xor_tree__8__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__level;
    __Vfunc_xor_tree__8__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__8__num;
    __Vfunc_xor_tree__8__num = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_hb513cab2__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((6U & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((5U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((3U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((6U & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((5U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((3U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((6U & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((5U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((3U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((6U & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((5U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((3U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((6U & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((5U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__8__unnamedblk8__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                                                  && (1U 
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
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))) 
                                                  && (1U 
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
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__8__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__8__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
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
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__8__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
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
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__9__Vfuncout;
    __Vfunc_xor_tree__9__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__9__in;
    __Vfunc_xor_tree__9__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__9__N;
    __Vfunc_xor_tree__9__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__9__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__9__level;
    __Vfunc_xor_tree__9__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__9__num;
    __Vfunc_xor_tree__9__num = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_hb513cab2__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((6U & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((5U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((3U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((6U & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((5U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((3U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((6U & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((5U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((3U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((6U & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((5U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((3U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((6U & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((5U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__9__N = 3U;
    __Vfunc_xor_tree__9__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__9__level = 0U;
    __Vfunc_xor_tree__9__num = 3U;
    __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__9__unnamedblk8__DOT__i, __Vfunc_xor_tree__9__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__9__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__9__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__9__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__9__num)) {
        vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__9__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__9__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__9__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__9__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__9__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__9__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__9__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__9__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__9__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__9__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__9__num = VL_DIVS_III(32, __Vfunc_xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_xor_tree__9__level = ((IData)(1U) + __Vfunc_xor_tree__9__level);
    }
    __Vfunc_xor_tree__9__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__9__level))
                                      ? (1U & vlSelfRef.__Vfunc_xor_tree__9__stage
                                         [(3U & __Vfunc_xor_tree__9__level)])
                                      : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__9__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__10__Vfuncout;
    __Vfunc_xor_tree__10__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__10__in;
    __Vfunc_xor_tree__10__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__10__N;
    __Vfunc_xor_tree__10__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__10__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__10__level;
    __Vfunc_xor_tree__10__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__10__num;
    __Vfunc_xor_tree__10__num = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_hb513cab2__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((6U & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((5U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((3U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((6U & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((5U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((3U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((6U & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((5U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((3U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((6U & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((5U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((3U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((6U & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((5U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__10__N = 3U;
    __Vfunc_xor_tree__10__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__10__level = 0U;
    __Vfunc_xor_tree__10__num = 3U;
    __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__10__unnamedblk8__DOT__i, __Vfunc_xor_tree__10__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__10__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__10__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__10__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__10__num)) {
        vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__10__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__10__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__10__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__10__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__10__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__10__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__10__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__10__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__10__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__10__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__10__num = VL_DIVS_III(32, __Vfunc_xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_xor_tree__10__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__10__level);
    }
    __Vfunc_xor_tree__10__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__10__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__10__stage
                                          [(3U & __Vfunc_xor_tree__10__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__10__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__11__Vfuncout;
    __Vfunc_xor_tree__11__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__11__in;
    __Vfunc_xor_tree__11__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__11__N;
    __Vfunc_xor_tree__11__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__11__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__11__level;
    __Vfunc_xor_tree__11__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__11__num;
    __Vfunc_xor_tree__11__num = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v0;
    __VdlyVal__and_result_reg__v0 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v1;
    __VdlyVal__and_result_reg__v1 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v2;
    __VdlyVal__and_result_reg__v2 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v3;
    __VdlyVal__and_result_reg__v3 = 0;
    SData/*8:0*/ __VdlyVal__and_result_reg__v4;
    __VdlyVal__and_result_reg__v4 = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk7__DOT__i = 5U;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [0U];
    __VdlyVal__and_result_reg__v0 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [1U];
    __VdlyVal__and_result_reg__v1 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [2U];
    __VdlyVal__and_result_reg__v2 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [3U];
    __VdlyVal__and_result_reg__v3 = __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = vlSelfRef.__PVT__and_result_bank
        [4U];
    __VdlyVal__and_result_reg__v4 = __Vlvbound_hb513cab2__0;
    vlSelfRef.__PVT__and_result_reg[0U] = __VdlyVal__and_result_reg__v0;
    vlSelfRef.__PVT__and_result_reg[1U] = __VdlyVal__and_result_reg__v1;
    vlSelfRef.__PVT__and_result_reg[2U] = __VdlyVal__and_result_reg__v2;
    vlSelfRef.__PVT__and_result_reg[3U] = __VdlyVal__and_result_reg__v3;
    vlSelfRef.__PVT__and_result_reg[4U] = __VdlyVal__and_result_reg__v4;
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((6U & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((5U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((3U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((6U & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((5U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((3U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((6U & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((5U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((3U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((6U & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((5U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((3U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
    __Vlvbound_h6dc2e2e6__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((6U & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_hb06bec49__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((5U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((6U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h6dc2e2e6__0));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((5U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 1U));
    __Vlvbound_h6dc2e2e6__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((3U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h6dc2e2e6__0) << 2U));
    __Vfunc_xor_tree__11__N = 3U;
    __Vfunc_xor_tree__11__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__11__level = 0U;
    __Vfunc_xor_tree__11__num = 3U;
    __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__11__unnamedblk8__DOT__i, __Vfunc_xor_tree__11__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__11__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__11__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__11__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__11__num)) {
        vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__11__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__11__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__11__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__11__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__11__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__11__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__11__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__11__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__11__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__11__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__11__num = VL_DIVS_III(32, __Vfunc_xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_xor_tree__11__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__11__level);
    }
    __Vfunc_xor_tree__11__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__11__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__11__stage
                                          [(3U & __Vfunc_xor_tree__11__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__11__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}
