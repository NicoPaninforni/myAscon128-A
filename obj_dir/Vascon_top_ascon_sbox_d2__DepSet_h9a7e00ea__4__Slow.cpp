// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top_ascon_sbox_d2.h"

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2___stl_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___stl_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
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
    // Body
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
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xcU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2___stl_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___stl_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
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
    // Body
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
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xdU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2___stl_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___stl_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
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
    // Body
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
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xeU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}
