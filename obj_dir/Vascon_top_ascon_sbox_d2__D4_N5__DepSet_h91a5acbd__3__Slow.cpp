// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top_ascon_sbox_d2__D4_N5.h"

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2__D4_N5___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D4_N5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D4_N5___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h7a999564__0;
    __Vlvbound_h7a999564__0 = 0;
    CData/*0:0*/ __Vlvbound_h163b5fa0__0;
    __Vlvbound_h163b5fa0__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__6__Vfuncout;
    __Vfunc_xor_tree__6__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_xor_tree__6__in;
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
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x1eU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x1dU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x1bU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x17U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xfU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x1eU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x1dU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x1bU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x17U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xfU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x1eU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x1dU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x1bU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x17U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xfU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x1eU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x1dU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x1bU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x17U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xfU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x1eU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x1dU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x1bU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x17U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__6__N = 5U;
    __Vfunc_xor_tree__6__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 5U;
    __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__6__unnamedblk8__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__6__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__6__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__6__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__6__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__6__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__6__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__6__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__6__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__6__stage
                                     [(3U & __Vfunc_xor_tree__6__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xfU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    vlSelfRef.__PVT__x[4U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [6U] >> 0x14U));
    vlSelfRef.__PVT__x[3U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [6U] >> 0xfU));
    vlSelfRef.__PVT__x[2U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [6U] >> 0xaU));
    vlSelfRef.__PVT__x[1U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [6U] >> 5U));
    vlSelfRef.__PVT__x[0U] = (0x1fU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [6U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__fresh_idx = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
            = ((4U >= (7U & VL_MODDIVS_III(32, ((IData)(1U) 
                                                + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U))))
                ? vlSelfRef.__PVT__x[(7U & VL_MODDIVS_III(32, 
                                                          ((IData)(1U) 
                                                           + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U)))]
                : 0U);
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
            = ((4U >= (7U & VL_MODDIVS_III(32, ((IData)(2U) 
                                                + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U))))
                ? vlSelfRef.__PVT__x[(7U & VL_MODDIVS_III(32, 
                                                          ((IData)(2U) 
                                                           + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U)))]
                : 0U);
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0x1fU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
        vlSelfRef.__Vlvbound_hf570816d__0 = 0U;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
            = ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                ? vlSelfRef.__PVT__x[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]
                : 0U);
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = vlSelfRef.__Vlvbound_hf570816d__0;
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffffeU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | (IData)(vlSelfRef.__Vlvbound_h2543d2aa__0));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & vlSelfRef.__PVT__and_result_bank
                                             [((4U 
                                                >= 
                                                (7U 
                                                 & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                ? (7U 
                                                   & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                : 0U)]);
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 1U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1eU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | (IData)(vlSelfRef.__Vlvbound_h914e6002__0));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffffdU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 1U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffffdfU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 5U));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 2U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffffbU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 2U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffbffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0xaU));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 3U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffff7U & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 3U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ff7fffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0xfU));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 1U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffffefU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 4U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1efffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x14U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffffbfU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 6U));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 6U));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 4U));
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 5U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1dU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 1U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffff7fU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 7U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fff7ffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0xbU));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 6U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffeffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 8U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1feffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x10U));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 2U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffdffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 9U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1dfffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x15U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffefffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 0xcU));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 0xcU));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 7U));
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 8U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1bU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 2U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffdfffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 0xdU));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fdffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x11U));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 3U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffbfffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 0xeU));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1bfffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x16U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fbffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 0x12U));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 0x12U));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 9U));
        vlSelfRef.__PVT__unnamedblk1__DOT__fresh_idx = 0xaU;
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 4U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x17U & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 3U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1f7ffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 0x13U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x17fffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x17U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0xffffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 0x18U));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 0x18U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0xfU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 4U));
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 5U;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
}

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2__D4_N5___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D4_N5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D4_N5___stl_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h7a999564__0;
    __Vlvbound_h7a999564__0 = 0;
    CData/*0:0*/ __Vlvbound_h163b5fa0__0;
    __Vlvbound_h163b5fa0__0 = 0;
    CData/*0:0*/ __Vfunc_xor_tree__7__Vfuncout;
    __Vfunc_xor_tree__7__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_xor_tree__7__in;
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
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [0U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x1eU & vlSelfRef.__PVT__y
                               [0U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x1dU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x1bU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0x17U & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [0U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[0U] = ((0xfU & vlSelfRef.__PVT__y
                               [0U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [1U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x1eU & vlSelfRef.__PVT__y
                               [1U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x1dU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x1bU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0x17U & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [1U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[1U] = ((0xfU & vlSelfRef.__PVT__y
                               [1U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [2U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x1eU & vlSelfRef.__PVT__y
                               [2U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x1dU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x1bU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0x17U & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [2U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[2U] = ((0xfU & vlSelfRef.__PVT__y
                               [2U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [3U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x1eU & vlSelfRef.__PVT__y
                               [3U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x1dU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x1bU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0x17U & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [3U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[3U] = ((0xfU & vlSelfRef.__PVT__y
                               [3U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    __Vlvbound_h7a999564__0 = (1U & vlSelfRef.__PVT__and_result_reg
                               [4U]);
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 1U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 2U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 3U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 4U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x1eU & vlSelfRef.__PVT__y
                               [4U]) | (IData)(__Vlvbound_h163b5fa0__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 5U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 6U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 7U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 8U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 9U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x1dU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xaU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xbU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xcU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xdU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xeU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x1bU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0xfU));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x10U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x11U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x12U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x13U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0x17U & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x14U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1eU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | (IData)(__Vlvbound_h7a999564__0));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x15U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1dU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 1U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x16U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x1bU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 2U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x17U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0x17U & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 3U));
    __Vlvbound_h7a999564__0 = (1U & (vlSelfRef.__PVT__and_result_reg
                                     [4U] >> 0x18U));
    vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
        = ((0xfU & (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
           | ((IData)(__Vlvbound_h7a999564__0) << 4U));
    __Vfunc_xor_tree__7__N = 5U;
    __Vfunc_xor_tree__7__in = vlSelfRef.__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 5U;
    __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_xor_tree__7__unnamedblk8__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelfRef.__Vlvbound_h2db25a5e__0 = ((4U >= 
                                              (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                                             && (1U 
                                                 & ((IData)(__Vfunc_xor_tree__7__in) 
                                                    >> 
                                                    (7U 
                                                     & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        if (VL_LIKELY(((4U >= (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))))) {
            vlSelfRef.__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                    & vlSelfRef.__Vfunc_xor_tree__7__stage
                    [0U]) | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h2db25a5e__0) 
                                      << (7U & __Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk8__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk8__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h593c59e9__0 = (((4U 
                                                   >= 
                                                   (7U 
                                                    & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) 
                                                 ^ 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                         [
                                                         (3U 
                                                          & __Vfunc_xor_tree__7__level)] 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i)))))));
            if (VL_LIKELY(((4U >= (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h593c59e9__0) 
                                   << (7U & vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i))));
            }
            vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_xor_tree__7__unnamedblk9__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.__Vlvbound_h4fe11655__0 = ((4U 
                                                  >= 
                                                  (7U 
                                                   & (__Vfunc_xor_tree__7__num 
                                                      - (IData)(1U)))) 
                                                 && (1U 
                                                     & (vlSelfRef.__Vfunc_xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_xor_tree__7__level)] 
                                                        >> 
                                                        (7U 
                                                         & (__Vfunc_xor_tree__7__num 
                                                            - (IData)(1U))))));
            if (VL_LIKELY(((4U >= (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))))) {
                vlSelfRef.__Vfunc_xor_tree__7__stage[(3U 
                                                      & ((IData)(1U) 
                                                         + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (0x1fU & ((IData)(vlSelfRef.__Vlvbound_h4fe11655__0) 
                                   << (7U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = (1U & vlSelfRef.__Vfunc_xor_tree__7__stage
                                     [(3U & __Vfunc_xor_tree__7__level)]);
    __Vlvbound_h163b5fa0__0 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelfRef.__PVT__y[4U] = ((0xfU & vlSelfRef.__PVT__y
                               [4U]) | ((IData)(__Vlvbound_h163b5fa0__0) 
                                        << 4U));
    vlSelfRef.__PVT__x[4U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [7U] >> 0x14U));
    vlSelfRef.__PVT__x[3U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [7U] >> 0xfU));
    vlSelfRef.__PVT__x[2U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [7U] >> 0xaU));
    vlSelfRef.__PVT__x[1U] = (0x1fU & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                       [7U] >> 5U));
    vlSelfRef.__PVT__x[0U] = (0x1fU & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [7U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__fresh_idx = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
            = ((4U >= (7U & VL_MODDIVS_III(32, ((IData)(1U) 
                                                + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U))))
                ? vlSelfRef.__PVT__x[(7U & VL_MODDIVS_III(32, 
                                                          ((IData)(1U) 
                                                           + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U)))]
                : 0U);
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
            = ((4U >= (7U & VL_MODDIVS_III(32, ((IData)(2U) 
                                                + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U))))
                ? vlSelfRef.__PVT__x[(7U & VL_MODDIVS_III(32, 
                                                          ((IData)(2U) 
                                                           + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i), (IData)(5U)))]
                : 0U);
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0x1fU & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
        vlSelfRef.__Vlvbound_hf570816d__0 = 0U;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
            = ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                ? vlSelfRef.__PVT__x[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]
                : 0U);
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = vlSelfRef.__Vlvbound_hf570816d__0;
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffffeU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | (IData)(vlSelfRef.__Vlvbound_h2543d2aa__0));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & vlSelfRef.__PVT__and_result_bank
                                             [((4U 
                                                >= 
                                                (7U 
                                                 & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                ? (7U 
                                                   & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                : 0U)]);
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & (IData)(vlSymsp->TOP.random_masks_sbox));
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 1U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1eU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | (IData)(vlSelfRef.__Vlvbound_h914e6002__0));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffffdU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 1U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffffdfU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 5U));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 2U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffffbU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 2U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffbffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0xaU));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 3U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffff7U & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 3U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ff7fffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0xfU));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 1U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffffefU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 4U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1efffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x14U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffffbfU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 6U));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 6U));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 4U));
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 5U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1dU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 1U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffff7fU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 7U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fff7ffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0xbU));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 6U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffeffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 8U));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1feffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x10U));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 1U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 2U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fffdffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 9U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1dfffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x15U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffefffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 0xcU));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 0xcU));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 7U));
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 8U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1bU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 2U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffdfffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 0xdU));
        }
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fdffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x11U));
        }
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 2U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 3U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1ffbfffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 0xeU));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1bfffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x16U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1fbffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 0x12U));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 0x12U));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
            = (1U & ((IData)(vlSymsp->TOP.random_masks_sbox) 
                     >> 9U));
        vlSelfRef.__PVT__unnamedblk1__DOT__fresh_idx = 0xaU;
        vlSelfRef.__Vlvbound_h2543d2aa__1 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 4U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_hb49a3744__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     >> 4U) 
                                                    & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                       >> 3U)) 
                                                   ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
        vlSelfRef.__Vlvbound_h2543d2aa__0 = (1U & (
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                                     & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                                    ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                                   >> 4U));
        if ((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x17U & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 3U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x1f7ffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__1) 
                      << 0x13U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0x17fffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_hb49a3744__0) 
                      << 0x17U));
            vlSelfRef.__PVT__and_result_bank[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0xffffffU & vlSelfRef.__PVT__and_result_bank
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h2543d2aa__0) 
                      << 0x18U));
        }
        vlSelfRef.__Vlvbound_h914e6002__0 = (1U & (
                                                   vlSelfRef.__PVT__and_result_bank
                                                   [
                                                   ((4U 
                                                     >= 
                                                     (7U 
                                                      & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))
                                                     ? 
                                                    (7U 
                                                     & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)
                                                     : 0U)] 
                                                   >> 0x18U));
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
            vlSelfRef.__PVT__y_noMask[(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                = ((0xfU & vlSelfRef.__PVT__y_noMask
                    [(7U & vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) 
                   | ((IData)(vlSelfRef.__Vlvbound_h914e6002__0) 
                      << 4U));
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 5U;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
}
