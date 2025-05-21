// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top_ascon_sbox_d2.h"

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__12__Vfuncout;
    __Vfunc_xor_tree__12__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__12__in;
    __Vfunc_xor_tree__12__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__12__N;
    __Vfunc_xor_tree__12__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__12__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__12__level;
    __Vfunc_xor_tree__12__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__12__num;
    __Vfunc_xor_tree__12__num = 0;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
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
    __Vfunc_xor_tree__12__N = 3U;
    __Vfunc_xor_tree__12__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__12__level = 0U;
    __Vfunc_xor_tree__12__num = 3U;
    __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__12__unnamedblk8__DOT__i, __Vfunc_xor_tree__12__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__12__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__12__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__12__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__12__num)) {
        vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__12__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__12__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__12__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__12__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__12__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__12__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__12__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__12__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__12__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__12__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__12__num = VL_DIVS_III(32, __Vfunc_xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_xor_tree__12__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__12__level);
    }
    __Vfunc_xor_tree__12__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__12__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__12__stage
                                          [(3U & __Vfunc_xor_tree__12__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__12__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__13__Vfuncout;
    __Vfunc_xor_tree__13__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__13__in;
    __Vfunc_xor_tree__13__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__13__N;
    __Vfunc_xor_tree__13__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__13__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__13__level;
    __Vfunc_xor_tree__13__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__13__num;
    __Vfunc_xor_tree__13__num = 0;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
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
    __Vfunc_xor_tree__13__N = 3U;
    __Vfunc_xor_tree__13__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__13__level = 0U;
    __Vfunc_xor_tree__13__num = 3U;
    __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__13__unnamedblk8__DOT__i, __Vfunc_xor_tree__13__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__13__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__13__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__13__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__13__num)) {
        vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__13__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__13__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__13__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__13__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__13__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__13__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__13__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__13__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__13__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__13__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__13__num = VL_DIVS_III(32, __Vfunc_xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_xor_tree__13__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__13__level);
    }
    __Vfunc_xor_tree__13__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__13__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__13__stage
                                          [(3U & __Vfunc_xor_tree__13__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__13__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__14__Vfuncout;
    __Vfunc_xor_tree__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__14__in;
    __Vfunc_xor_tree__14__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__14__N;
    __Vfunc_xor_tree__14__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__14__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__14__level;
    __Vfunc_xor_tree__14__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__14__num;
    __Vfunc_xor_tree__14__num = 0;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
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
    __Vfunc_xor_tree__14__N = 3U;
    __Vfunc_xor_tree__14__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__14__level = 0U;
    __Vfunc_xor_tree__14__num = 3U;
    __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__14__unnamedblk8__DOT__i, __Vfunc_xor_tree__14__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__14__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__14__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__14__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__14__num)) {
        vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__14__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__14__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__14__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__14__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__14__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__14__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__14__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__14__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__14__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__14__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__14__num = VL_DIVS_III(32, __Vfunc_xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_xor_tree__14__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__14__level);
    }
    __Vfunc_xor_tree__14__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__14__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__14__stage
                                          [(3U & __Vfunc_xor_tree__14__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__14__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vlvbound_hb513cab2__0;
    __Vlvbound_hb513cab2__0 = 0;
    CData/*0:0*/ __Vlvbound_h6dc2e2e6__0;
    __Vlvbound_h6dc2e2e6__0 = 0;
    CData/*0:0*/ __Vlvbound_hb06bec49__0;
    __Vlvbound_hb06bec49__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__15__Vfuncout;
    __Vfunc_xor_tree__15__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_xor_tree__15__in;
    __Vfunc_xor_tree__15__in = 0;
    IData/*31:0*/ __Vfunc_xor_tree__15__N;
    __Vfunc_xor_tree__15__N = 0;
    IData/*31:0*/ __Vfunc_xor_tree__15__unnamedblk8__DOT__i;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vfunc_xor_tree__15__level;
    __Vfunc_xor_tree__15__level = 0;
    IData/*31:0*/ __Vfunc_xor_tree__15__num;
    __Vfunc_xor_tree__15__num = 0;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
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
    __Vfunc_xor_tree__15__N = 3U;
    __Vfunc_xor_tree__15__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_xor_tree__15__level = 0U;
    __Vfunc_xor_tree__15__num = 3U;
    __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__15__unnamedblk8__DOT__i, __Vfunc_xor_tree__15__N)) {
        vlSelfRef.__Vlvbound_heb392477__0 = ((2U >= 
                                              (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.__Vlvbound_heb392477__0) 
                                   << (3U & __Vfunc_xor_tree__15__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__15__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__15__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__15__num)) {
        vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_hf00c1e9a__0 = (((2U 
                                                   >= 
                                                   (3U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (((2U 
                                                           >= 
                                                           (3U 
                                                            & __Vfunc_xor_tree__15__level))
                                                           ? 
                                                          vlSelfRef.__Vfunc_xor_tree__15__stage
                                                          [
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level)]
                                                           : 0U) 
                                                         >> 
                                                         (3U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_hf00c1e9a__0) 
                                << (3U & vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__15__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h56f822d7__0 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & (__Vfunc_xor_tree__15__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (((2U 
                                                          >= 
                                                          (3U 
                                                           & __Vfunc_xor_tree__15__level))
                                                          ? 
                                                         vlSelfRef.__Vfunc_xor_tree__15__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__15__level)]
                                                          : 0U) 
                                                        >> 
                                                        (3U 
                                                         & (__Vfunc_xor_tree__15__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_xor_tree__15__stage[(3U 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.__Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__15__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__15__num = VL_DIVS_III(32, __Vfunc_xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_xor_tree__15__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__15__level);
    }
    __Vfunc_xor_tree__15__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__15__level))
                                       ? (1U & vlSelfRef.__Vfunc_xor_tree__15__stage
                                          [(3U & __Vfunc_xor_tree__15__level)])
                                       : 0U);
    __Vlvbound_hb06bec49__0 = __Vfunc_xor_tree__15__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((3U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_hb06bec49__0) 
                                        << 2U));
}
